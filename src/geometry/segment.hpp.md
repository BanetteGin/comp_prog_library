---
data:
  _extendedDependsOn:
  - icon: ':warning:'
    path: src/basic/comparison.hpp
    title: src/basic/comparison.hpp
  - icon: ':warning:'
    path: src/basic/constant.hpp
    title: src/basic/constant.hpp
  - icon: ':warning:'
    path: src/basic/equal.hpp
    title: src/basic/equal.hpp
  - icon: ':warning:'
    path: src/basic/greater_equal.hpp
    title: src/basic/greater_equal.hpp
  - icon: ':warning:'
    path: src/basic/greater_than.hpp
    title: src/basic/greater_than.hpp
  - icon: ':warning:'
    path: src/basic/less_equal.hpp
    title: src/basic/less_equal.hpp
  - icon: ':warning:'
    path: src/basic/less_than.hpp
    title: src/basic/less_than.hpp
  - icon: ':warning:'
    path: src/basic/sign.hpp
    title: src/basic/sign.hpp
  - icon: ':warning:'
    path: src/geometry/distance_point_and_point.hpp
    title: src/geometry/distance_point_and_point.hpp
  - icon: ':warning:'
    path: src/geometry/point.hpp
    title: src/geometry/point.hpp
  _extendedRequiredBy:
  - icon: ':warning:'
    path: src/geometry/centroid.hpp
    title: src/geometry/centroid.hpp
  - icon: ':warning:'
    path: src/geometry/circle.hpp
    title: src/geometry/circle.hpp
  - icon: ':warning:'
    path: src/geometry/circumcenter.hpp
    title: src/geometry/circumcenter.hpp
  - icon: ':warning:'
    path: src/geometry/circumradius.hpp
    title: src/geometry/circumradius.hpp
  - icon: ':warning:'
    path: src/geometry/distance_point_and_segment.hpp
    title: src/geometry/distance_point_and_segment.hpp
  - icon: ':warning:'
    path: src/geometry/distance_segment_and_segment.hpp
    title: src/geometry/distance_segment_and_segment.hpp
  - icon: ':warning:'
    path: src/geometry/incenter.hpp
    title: src/geometry/incenter.hpp
  - icon: ':warning:'
    path: src/geometry/inradius.hpp
    title: src/geometry/inradius.hpp
  - icon: ':warning:'
    path: src/geometry/intersect_circle_and_circle.hpp
    title: src/geometry/intersect_circle_and_circle.hpp
  - icon: ':warning:'
    path: src/geometry/intersect_line_and_circle.hpp
    title: src/geometry/intersect_line_and_circle.hpp
  - icon: ':warning:'
    path: src/geometry/orthocenter.hpp
    title: src/geometry/orthocenter.hpp
  - icon: ':warning:'
    path: src/geometry/triangle.hpp
    title: src/geometry/triangle.hpp
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/geometry/segment.hpp\"\n\n\n\n#line 1 \"src/geometry/distance_point_and_point.hpp\"\
    \n\n\n\n#line 1 \"src/geometry/point.hpp\"\n\n\n\n#include <complex>\n\n#line\
    \ 1 \"src/basic/comparison.hpp\"\n\n\n\n#line 1 \"src/basic/equal.hpp\"\n\n\n\n\
    #line 1 \"src/basic/sign.hpp\"\n\n\n\n#line 1 \"src/basic/constant.hpp\"\n\n\n\
    \nnamespace BanetteGin {\n\nconst long double EPS = 10e-12;\nconst long long int\
    \ LINF = 1001001001001001001LL;\nconst long double PI = acos(-1);\nconst long\
    \ double GOLDEN_RATIO = 2 * cos(PI / 5);\n\n}  // namespace BanetteGin\n\n\n#line\
    \ 5 \"src/basic/sign.hpp\"\n\nnamespace BanetteGin {\n\ntemplate <class T>\nint\
    \ sign(const T& x) {\n    return (x < -EPS ? -1 : (x < EPS ? 0 : 1));\n}\n\n}\
    \  // namespace BanetteGin\n\n\n#line 5 \"src/basic/equal.hpp\"\n\nnamespace BanetteGin\
    \ {\n\ntemplate <class T>\nbool equal(const T &a, const T &b) {\n    return (sign(a\
    \ - b) == 0);\n}\n\n}  // namespace BanetteGin\n\n\n#line 1 \"src/basic/greater_equal.hpp\"\
    \n\n\n\nnamespace BanetteGin {\n\ntemplate <class T>\nbool greater_equal(const\
    \ T &a, const T &b) {\n    return (sign(a - b) >= 0);\n}\n\n}  // namespace BanetteGin\n\
    \n\n#line 1 \"src/basic/greater_than.hpp\"\n\n\n\nnamespace BanetteGin {\n\ntemplate\
    \ <class T>\nbool greater_than(const T &a, const T &b) {\n    return (sign(a -\
    \ b) > 0);\n}\n\n}  // namespace BanetteGin\n\n\n#line 1 \"src/basic/less_equal.hpp\"\
    \n\n\n\nnamespace BanetteGin {\n\ntemplate <class T>\nbool less_equal(const T\
    \ &a, const T &b) {\n    return (sign(a - b) <= 0);\n}\n\n}  // namespace BanetteGin\n\
    \n\n#line 1 \"src/basic/less_than.hpp\"\n\n\n\nnamespace BanetteGin {\n\ntemplate\
    \ <class T>\nbool less_than(const T &a, const T &b) {\n    return (sign(a - b)\
    \ < 0);\n}\n\n}  // namespace BanetteGin\n\n\n#line 9 \"src/basic/comparison.hpp\"\
    \n\n\n#line 7 \"src/geometry/point.hpp\"\n\nnamespace BanetteGin {\n\ntemplate\
    \ <class T>\nstruct point {\n    T x, y;\n    point(T x_, T y_)\n        : x(x_),\
    \ y(y_) {\n    }\n\n    point operator+(const point& p) const noexcept {\n   \
    \     return point<T>(this->x + p.x, this->y + p.y);\n    }\n    point operator-(const\
    \ point& p) const noexcept {\n        return point<T>(this->x - p.x, this->y -\
    \ p.y);\n    }\n    point operator*(const T& a) const noexcept {\n        return\
    \ point<T>(this->x * a, this->y * a);\n    }\n    point operator/(const T& a)\
    \ const noexcept {\n        return point<T>(this->x / a, this->y / a);\n    }\n\
    \n    point& operator+=(const point& p) noexcept {\n        this->x += p.x;\n\
    \        this->y += p.y;\n        return *this;\n    }\n    point& operator-=(const\
    \ point& p) noexcept {\n        this->x -= p.x;\n        this->y -= p.y;\n   \
    \     return *this;\n    }\n    point& operator*=(const T& a) noexcept {\n   \
    \     this->x *= a;\n        this->y *= a;\n        return *this;\n    }\n   \
    \ point& operator/=(const T& a) noexcept {\n        this->x /= a;\n        this->y\
    \ /= a;\n        return *this;\n    }\n\n    bool operator==(const point& p) const\
    \ noexcept {\n        return equal(this->x, p.x) && equal(this->y, p.y);\n   \
    \ }\n    bool operator!=(const point& p) const noexcept {\n        return !equal(this->x,\
    \ p.x) || !equal(this->y, p.y);\n    }\n    bool operator<(const point& p) const\
    \ noexcept {\n        return !equal(this->x, p.x) || !equal(this->y, p.y);\n \
    \   }\n\n    friend T dot(const point& p, const point& q) {\n        return p.x\
    \ * q.x + p.y * q.y;\n    }\n    friend T cross(const point& p, const point& q)\
    \ {\n        return p.x * q.y - p.y * q.x;\n    }\n};\n\n}  // namespace BanetteGin\n\
    \n\n#line 5 \"src/geometry/distance_point_and_point.hpp\"\n\nnamespace BanetteGin\
    \ {\n\ntemplate <class T>\nT distance_point_and_point(point<T> p, point<T> q)\
    \ {\n    return sqrt(pow(p.x - q.x, 2) + pow(p.y - q.y, 2));\n}\n\n}  // namespace\
    \ BanetteGin\n\n\n#line 6 \"src/geometry/segment.hpp\"\n\nnamespace BanetteGin\
    \ {\n\ntemplate <class T>\nstruct segment {\n    point<T> p, q;\n    T length;\n\
    \    segment(point<T> p_, point<T> q_)\n        : p(p_), q(q_), length(distance_point_and_point(p,\
    \ q)) {\n    }\n};\n\n}  // namespace BanetteGin\n\n\n"
  code: "#ifndef BANETTEGIN_SEGMENT_HPP_INCLUDED\n#define BANETTEGIN_SEGMENT_HPP_INCLUDED\n\
    \n#include \"distance_point_and_point.hpp\"\n#include \"point.hpp\"\n\nnamespace\
    \ BanetteGin {\n\ntemplate <class T>\nstruct segment {\n    point<T> p, q;\n \
    \   T length;\n    segment(point<T> p_, point<T> q_)\n        : p(p_), q(q_),\
    \ length(distance_point_and_point(p, q)) {\n    }\n};\n\n}  // namespace BanetteGin\n\
    \n#endif"
  dependsOn:
  - src/geometry/distance_point_and_point.hpp
  - src/geometry/point.hpp
  - src/basic/comparison.hpp
  - src/basic/equal.hpp
  - src/basic/sign.hpp
  - src/basic/constant.hpp
  - src/basic/greater_equal.hpp
  - src/basic/greater_than.hpp
  - src/basic/less_equal.hpp
  - src/basic/less_than.hpp
  isVerificationFile: false
  path: src/geometry/segment.hpp
  requiredBy:
  - src/geometry/intersect_line_and_circle.hpp
  - src/geometry/circle.hpp
  - src/geometry/circumcenter.hpp
  - src/geometry/inradius.hpp
  - src/geometry/circumradius.hpp
  - src/geometry/orthocenter.hpp
  - src/geometry/distance_point_and_segment.hpp
  - src/geometry/distance_segment_and_segment.hpp
  - src/geometry/incenter.hpp
  - src/geometry/triangle.hpp
  - src/geometry/intersect_circle_and_circle.hpp
  - src/geometry/centroid.hpp
  timestamp: '2023-09-07 19:24:46+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/geometry/segment.hpp
layout: document
redirect_from:
- /library/src/geometry/segment.hpp
- /library/src/geometry/segment.hpp.html
title: src/geometry/segment.hpp
---

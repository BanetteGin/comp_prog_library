---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/basic/comparison.hpp
    title: src/basic/comparison.hpp
  - icon: ':heavy_check_mark:'
    path: src/basic/constant.hpp
    title: src/basic/constant.hpp
  - icon: ':heavy_check_mark:'
    path: src/basic/equal.hpp
    title: src/basic/equal.hpp
  - icon: ':heavy_check_mark:'
    path: src/basic/equal.hpp
    title: src/basic/equal.hpp
  - icon: ':heavy_check_mark:'
    path: src/basic/greater_equal.hpp
    title: src/basic/greater_equal.hpp
  - icon: ':heavy_check_mark:'
    path: src/basic/greater_than.hpp
    title: src/basic/greater_than.hpp
  - icon: ':heavy_check_mark:'
    path: src/basic/less_equal.hpp
    title: src/basic/less_equal.hpp
  - icon: ':heavy_check_mark:'
    path: src/basic/less_than.hpp
    title: src/basic/less_than.hpp
  - icon: ':heavy_check_mark:'
    path: src/basic/sign.hpp
    title: src/basic/sign.hpp
  - icon: ':heavy_check_mark:'
    path: src/geometry/distance_point_and_point.hpp
    title: src/geometry/distance_point_and_point.hpp
  - icon: ':heavy_check_mark:'
    path: src/geometry/point.hpp
    title: src/geometry/point.hpp
  - icon: ':heavy_check_mark:'
    path: src/geometry/segment.hpp
    title: src/geometry/segment.hpp
  - icon: ':heavy_check_mark:'
    path: src/geometry/triangle.hpp
    title: src/geometry/triangle.hpp
  _extendedRequiredBy:
  - icon: ':warning:'
    path: src/all.hpp
    title: src/all.hpp
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/geometry/orthocenter.hpp\"\n\n\n\n#line 1 \"src/geometry/triangle.hpp\"\
    \n\n\n\n#line 1 \"src/basic/equal.hpp\"\n\n\n\n#line 1 \"src/basic/sign.hpp\"\n\
    \n\n\n#line 1 \"src/basic/constant.hpp\"\n\n\n\nnamespace BanetteGin {\n\nconst\
    \ long double EPS = 10e-12;\nconst long long int LINF = 1001001001001001001LL;\n\
    const long double PI = acos(-1);\nconst long double GOLDEN_RATIO = 2 * cos(PI\
    \ / 5);\n\n}  // namespace BanetteGin\n\n\n#line 5 \"src/basic/sign.hpp\"\n\n\
    namespace BanetteGin {\n\ntemplate <class T>\nint sign(const T& x) {\n    return\
    \ (x < -EPS ? -1 : (x < EPS ? 0 : 1));\n}\n\n}  // namespace BanetteGin\n\n\n\
    #line 5 \"src/basic/equal.hpp\"\n\nnamespace BanetteGin {\n\ntemplate <class T>\n\
    bool equal(const T &a, const T &b) {\n    return (sign(a - b) == 0);\n}\n\n} \
    \ // namespace BanetteGin\n\n\n#line 1 \"src/geometry/distance_point_and_point.hpp\"\
    \n\n\n\n#line 1 \"src/geometry/point.hpp\"\n\n\n\n#include <complex>\n\n#line\
    \ 1 \"src/basic/comparison.hpp\"\n\n\n\n#line 1 \"src/basic/greater_equal.hpp\"\
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
    \   }\n\n    friend T dot(const point& p, const point& q) noexcept {\n       \
    \ return p.x * q.x + p.y * q.y;\n    }\n    friend T cross(const point& p, const\
    \ point& q) noexcept {\n        return p.x * q.y - p.y * q.x;\n    }\n    friend\
    \ T norm(const point& p) {\n        return sqrt(p.x * p.x + p.y * p.y);\n    }\n\
    \    friend T arg(const point& p) {\n        return atan2(p.y, p.x);\n    }\n\
    };\n\n}  // namespace BanetteGin\n\n\n#line 5 \"src/geometry/distance_point_and_point.hpp\"\
    \n\nnamespace BanetteGin {\n\ntemplate <class T>\nT distance_point_and_point(point<T>\
    \ p, point<T> q) {\n    return sqrt(pow(p.x - q.x, 2) + pow(p.y - q.y, 2));\n\
    }\n\n}  // namespace BanetteGin\n\n\n#line 1 \"src/geometry/segment.hpp\"\n\n\n\
    \n#line 6 \"src/geometry/segment.hpp\"\n\nnamespace BanetteGin {\n\ntemplate <class\
    \ T>\nstruct segment {\n    point<T> p, q;\n    T length;\n    segment(point<T>\
    \ p_, point<T> q_)\n        : p(p_), q(q_), length(distance_point_and_point(p,\
    \ q)) {\n    }\n};\n\n}  // namespace BanetteGin\n\n\n#line 8 \"src/geometry/triangle.hpp\"\
    \n\nnamespace BanetteGin {\n\ntemplate <class T>\nstruct triangle {\n    point<T>\
    \ points[3];\n    T lengths[3];\n    T angles[3];\n    T area;\n    triangle(point<T>\
    \ point_a, point<T> point_b, point<T> point_c)\n        : points{point_a, point_b,\
    \ point_c} {\n        for (int a = 0; a < 3; ++a) {\n            int b, c;\n \
    \           bool added_flag = false;\n            for (int i = 0; i < 3; ++i)\
    \ {\n                if (a != i) {\n                    if (!added_flag) {\n \
    \                       b = i;\n                        added_flag = true;\n \
    \                   } else\n                        c = i;\n                }\n\
    \            }\n            lengths[a] = distance_point_and_point(points[b], points[c]);\n\
    \        }\n\n        for (int a = 0; a < 3; ++a) {\n            int b, c;\n \
    \           bool added_flag = false;\n            for (int i = 0; i < 3; ++i)\
    \ {\n                if (a != i) {\n                    if (!added_flag) {\n \
    \                       b = i;\n                        added_flag = true;\n \
    \                   } else\n                        c = i;\n                }\n\
    \            }\n            angles[a] = acos((pow(lengths[b], 2) + pow(lengths[c],\
    \ 2) - pow(lengths[a], 2)) / (2 * lengths[b] * lengths[c]));\n        }\n\n  \
    \      area = lengths[1] * lengths[2] * sin(angles[0]) / 2;\n    };\n    triangle(T\
    \ length_a, T length_b, T length_c)\n        : lengths{length_a, length_b, length_c}\
    \ {\n        for (int a = 0; a < 3; ++a) {\n            int b, c;\n          \
    \  bool added_flag = false;\n            for (int i = 0; i < 3; ++i) {\n     \
    \           if (a != i) {\n                    if (!added_flag) {\n          \
    \              b = i;\n                        added_flag = true;\n          \
    \          } else\n                        c = i;\n                }\n       \
    \     }\n            angles[a] = acos((pow(lengths[b], 2) + pow(lengths[c], 2)\
    \ - pow(lengths[a], 2)) / (2 * lengths[b] * lengths[c]));\n        }\n\n     \
    \   points[0] = point(0, 0);\n        points[1] = point(0, lengths[1]);\n    \
    \    points[2] = point(lengths[2] * cos(angles[0]), lengths[2] * sin(angles[0]));\n\
    \n        area = lengths[1] * lengths[2] * sin(angles[0]) / 2;\n    };\n};\n\n\
    }  // namespace BanetteGin\n\n\n#line 5 \"src/geometry/orthocenter.hpp\"\n\nnamespace\
    \ BanetteGin {\n\ntemplate <class T>\npoint<T> orthocenter(triangle<T> t) {\n\
    \    point ret = point(0.0L, 0.0L);\n    T denom = 0.0L;\n    for (int i = 0;\
    \ i < 3; ++i) {\n        ret += t.points[i] * tan(t.angles[i]);\n        denom\
    \ += tan(t.angles[i]);\n    }\n    return ret / denom;\n}\n\n}  // namespace BanetteGin\n\
    \n\n"
  code: "#ifndef BANETTEGIN_ORTHOCENTER_HPP_INCLUDED\n#define BANETTEGIN_ORTHOCENTER_HPP_INCLUDED\n\
    \n#include \"triangle.hpp\"\n\nnamespace BanetteGin {\n\ntemplate <class T>\n\
    point<T> orthocenter(triangle<T> t) {\n    point ret = point(0.0L, 0.0L);\n  \
    \  T denom = 0.0L;\n    for (int i = 0; i < 3; ++i) {\n        ret += t.points[i]\
    \ * tan(t.angles[i]);\n        denom += tan(t.angles[i]);\n    }\n    return ret\
    \ / denom;\n}\n\n}  // namespace BanetteGin\n\n#endif"
  dependsOn:
  - src/geometry/triangle.hpp
  - src/basic/equal.hpp
  - src/basic/sign.hpp
  - src/basic/constant.hpp
  - src/geometry/distance_point_and_point.hpp
  - src/geometry/point.hpp
  - src/basic/comparison.hpp
  - src/basic/equal.hpp
  - src/basic/greater_equal.hpp
  - src/basic/greater_than.hpp
  - src/basic/less_equal.hpp
  - src/basic/less_than.hpp
  - src/geometry/segment.hpp
  isVerificationFile: false
  path: src/geometry/orthocenter.hpp
  requiredBy:
  - src/all.hpp
  timestamp: '2023-09-08 09:32:39+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/geometry/orthocenter.hpp
layout: document
redirect_from:
- /library/src/geometry/orthocenter.hpp
- /library/src/geometry/orthocenter.hpp.html
title: src/geometry/orthocenter.hpp
---

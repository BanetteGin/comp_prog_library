---
data:
  _extendedDependsOn:
  - icon: ':question:'
    path: src/basic/comparison.hpp
    title: src/basic/comparison.hpp
  - icon: ':question:'
    path: src/basic/constant.hpp
    title: src/basic/constant.hpp
  - icon: ':question:'
    path: src/basic/equal.hpp
    title: src/basic/equal.hpp
  - icon: ':question:'
    path: src/basic/greater_equal.hpp
    title: src/basic/greater_equal.hpp
  - icon: ':question:'
    path: src/basic/greater_than.hpp
    title: src/basic/greater_than.hpp
  - icon: ':question:'
    path: src/basic/less_equal.hpp
    title: src/basic/less_equal.hpp
  - icon: ':question:'
    path: src/basic/less_than.hpp
    title: src/basic/less_than.hpp
  - icon: ':question:'
    path: src/basic/sign.hpp
    title: src/basic/sign.hpp
  - icon: ':question:'
    path: src/geometry/line.hpp
    title: src/geometry/line.hpp
  - icon: ':question:'
    path: src/geometry/point.hpp
    title: src/geometry/point.hpp
  - icon: ':question:'
    path: src/geometry/segment.hpp
    title: src/geometry/segment.hpp
  _extendedRequiredBy:
  - icon: ':warning:'
    path: src/all.hpp
    title: src/all.hpp
  - icon: ':warning:'
    path: src/all.hpp
    title: src/all.hpp
  - icon: ':warning:'
    path: src/geometry/centroid.hpp
    title: src/geometry/centroid.hpp
  - icon: ':heavy_check_mark:'
    path: src/geometry/circle.hpp
    title: src/geometry/circle.hpp
  - icon: ':heavy_check_mark:'
    path: src/geometry/circumcircle.hpp
    title: src/geometry/circumcircle.hpp
  - icon: ':warning:'
    path: src/geometry/excircle.hpp
    title: src/geometry/excircle.hpp
  - icon: ':heavy_check_mark:'
    path: src/geometry/incircle.hpp
    title: src/geometry/incircle.hpp
  - icon: ':warning:'
    path: src/geometry/intersect.hpp
    title: src/geometry/intersect.hpp
  - icon: ':warning:'
    path: src/geometry/orthocenter.hpp
    title: src/geometry/orthocenter.hpp
  - icon: ':question:'
    path: src/geometry/segment.hpp
    title: src/geometry/segment.hpp
  - icon: ':heavy_check_mark:'
    path: src/geometry/triangle.hpp
    title: src/geometry/triangle.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aizu_online_judge/Library/CGL/7_B.test.cpp
    title: test/aizu_online_judge/Library/CGL/7_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aizu_online_judge/Library/CGL/7_C.test.cpp
    title: test/aizu_online_judge/Library/CGL/7_C.test.cpp
  - icon: ':x:'
    path: test/yukicoder/306-1.test.cpp
    title: test/yukicoder/306-1.test.cpp
  - icon: ':x:'
    path: test/yukicoder/306-1.test.cpp
    title: test/yukicoder/306-1.test.cpp
  - icon: ':x:'
    path: test/yukicoder/306-2.test.cpp
    title: test/yukicoder/306-2.test.cpp
  - icon: ':x:'
    path: test/yukicoder/306-2.test.cpp
    title: test/yukicoder/306-2.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':question:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/geometry/distance.hpp\"\n\n\n\n#line 1 \"src/geometry/line.hpp\"\
    \n\n\n\n#line 1 \"src/basic/comparison.hpp\"\n\n\n\n#line 1 \"src/basic/equal.hpp\"\
    \n\n\n\n#line 1 \"src/basic/sign.hpp\"\n\n\n\n#line 1 \"src/basic/constant.hpp\"\
    \n\n\n\nnamespace BanetteGin {\n\nconst long double EPS = 1e-6L;\nconst long long\
    \ int LINF = 1001001001001001001LL;\nconst long double PI = acos(-1.0L);\nconst\
    \ long double GOLDEN_RATIO = 2.0L * cos(PI / 5.0L);\n\n}  // namespace BanetteGin\n\
    \n\n#line 5 \"src/basic/sign.hpp\"\n\nnamespace BanetteGin {\n\ntemplate <class\
    \ T>\nint sign(const T& x) {\n    return (x < -EPS ? -1 : (x < EPS ? 0 : 1));\n\
    }\n\n}  // namespace BanetteGin\n\n\n#line 5 \"src/basic/equal.hpp\"\n\nnamespace\
    \ BanetteGin {\n\ntemplate <class T>\nbool equal(const T &a, const T &b) {\n \
    \   return (sign(a - b) == 0);\n}\n\n}  // namespace BanetteGin\n\n\n#line 1 \"\
    src/basic/greater_equal.hpp\"\n\n\n\nnamespace BanetteGin {\n\ntemplate <class\
    \ T>\nbool greater_equal(const T &a, const T &b) {\n    return (sign(a - b) >=\
    \ 0);\n}\n\n}  // namespace BanetteGin\n\n\n#line 1 \"src/basic/greater_than.hpp\"\
    \n\n\n\nnamespace BanetteGin {\n\ntemplate <class T>\nbool greater_than(const\
    \ T &a, const T &b) {\n    return (sign(a - b) > 0);\n}\n\n}  // namespace BanetteGin\n\
    \n\n#line 1 \"src/basic/less_equal.hpp\"\n\n\n\nnamespace BanetteGin {\n\ntemplate\
    \ <class T>\nbool less_equal(const T &a, const T &b) {\n    return (sign(a - b)\
    \ <= 0);\n}\n\n}  // namespace BanetteGin\n\n\n#line 1 \"src/basic/less_than.hpp\"\
    \n\n\n\nnamespace BanetteGin {\n\ntemplate <class T>\nbool less_than(const T &a,\
    \ const T &b) {\n    return (sign(a - b) < 0);\n}\n\n}  // namespace BanetteGin\n\
    \n\n#line 9 \"src/basic/comparison.hpp\"\n\n\n#line 1 \"src/geometry/point.hpp\"\
    \n\n\n\n#include <complex>\n\n#line 7 \"src/geometry/point.hpp\"\n\nnamespace\
    \ BanetteGin {\n\ntemplate <class T>\nstruct point {\n    T x, y;\n    point(T\
    \ x_, T y_)\n        : x(x_), y(y_) {\n    }\n\n    point operator+(const point&\
    \ p) const noexcept {\n        return point<T>(this->x + p.x, this->y + p.y);\n\
    \    }\n    point operator-(const point& p) const noexcept {\n        return point<T>(this->x\
    \ - p.x, this->y - p.y);\n    }\n    point operator*(const T& a) const noexcept\
    \ {\n        return point<T>(this->x * a, this->y * a);\n    }\n    point operator/(const\
    \ T& a) const noexcept {\n        return point<T>(this->x / a, this->y / a);\n\
    \    }\n\n    point& operator+=(const point& p) noexcept {\n        this->x +=\
    \ p.x;\n        this->y += p.y;\n        return *this;\n    }\n    point& operator-=(const\
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
    };\n\n}  // namespace BanetteGin\n\n\n#line 6 \"src/geometry/line.hpp\"\n\nnamespace\
    \ BanetteGin {\n\ntemplate <class T>\nstruct line {\n    T a, b, c;\n    point<T>\
    \ p, q;\n    line(point<T> p_, point<T> q_)\n        : a(q_.y - p_.y), b(p_.x\
    \ - q_.x), c(-p_.x * q_.y + q_.x * p_.y) {\n        normalize();\n    }\n    line(point<T>\
    \ p_, T m_)\n        : a(m_), b(-1), c(p_.y - m_ * p_.x) {\n        normalize();\n\
    \    }\n    line(T a_, T b_, T c_)\n        : a(a_), b(b_), c(c_) {\n        normalize();\n\
    \    }\n    void normalize() {\n        if (!equal(a, 0)) {\n            b /=\
    \ a;\n            c /= a;\n            a = 1;\n        } else if (!equal(b, 0))\
    \ {\n            b = 1;\n            c /= b;\n        } else {\n            assert(c\
    \ == 0);\n        }\n        bool a_zero = equal(a, 0);\n        bool b_zero =\
    \ equal(b, 0);\n        if (!a_zero && !b_zero) {\n            p = point(-(c /\
    \ a), 0);\n            q = point(0, -(c / b));\n        } else if (!a_zero &&\
    \ b_zero) {\n            p = point(-(c / a), 0);\n            q = point(-(c /\
    \ a), 1);\n        } else if (a_zero && !b_zero) {\n            p = point(1, -(c\
    \ / b));\n            q = point(0, -(c / b));\n        } else if (a_zero && b_zero)\
    \ {\n            p = point(0, 0);\n            q = point(1, 0);\n        }\n \
    \       return;\n    }\n    bool operator==(const line& l) const noexcept {\n\
    \        return equal(this->a, l.a) && equal(this->b, l.b) && equal(this->c, l.c);\n\
    \    }\n    bool operator!=(const line& l) const noexcept {\n        return !equal(this->a,\
    \ l.a) || !equal(this->b, l.b) || !equal(this->c, l.c);\n    }\n};\n\n}  // namespace\
    \ BanetteGin\n\n\n#line 1 \"src/geometry/segment.hpp\"\n\n\n\n#line 6 \"src/geometry/segment.hpp\"\
    \n\nnamespace BanetteGin {\n\ntemplate <class T>\nstruct segment {\n    point<T>\
    \ p, q;\n    T length;\n    segment(point<T> p_, point<T> q_)\n        : p(p_),\
    \ q(q_), length(sqrt(pow(p_.x - q_.x, T(2)) + pow(p_.y - q_.y, T(2)))) {\n   \
    \ }\n};\n\n}  // namespace BanetteGin\n\n\n#line 7 \"src/geometry/distance.hpp\"\
    \n\nnamespace BanetteGin {\n\ntemplate <class T>\nT distance(point<T> p, point<T>\
    \ q) {\n    return sqrt(pow(p.x - q.x, T(2)) + pow(p.y - q.y, T(2)));\n}\n\ntemplate\
    \ <class T>\nT distance(point<T> p, line<T> l) {\n    return abs(p.x * l.a + p.y\
    \ * l.b + l.c) / sqrt(l.a * l.a + l.b * l.b);\n}\n\ntemplate <class T>\nT distance(point<T>\
    \ p, segment<T> s) {\n}\n\ntemplate <class T>\nT distance(segment<T> s, segment<T>\
    \ t) {\n}\n\n}  // namespace BanetteGin\n\n\n"
  code: "#ifndef BANETTEGIN_DISTANCE_HPP_INCLUDED\n#define BANETTEGIN_DISTANCE_HPP_INCLUDED\n\
    \n#include \"line.hpp\"\n#include \"point.hpp\"\n#include \"segment.hpp\"\n\n\
    namespace BanetteGin {\n\ntemplate <class T>\nT distance(point<T> p, point<T>\
    \ q) {\n    return sqrt(pow(p.x - q.x, T(2)) + pow(p.y - q.y, T(2)));\n}\n\ntemplate\
    \ <class T>\nT distance(point<T> p, line<T> l) {\n    return abs(p.x * l.a + p.y\
    \ * l.b + l.c) / sqrt(l.a * l.a + l.b * l.b);\n}\n\ntemplate <class T>\nT distance(point<T>\
    \ p, segment<T> s) {\n}\n\ntemplate <class T>\nT distance(segment<T> s, segment<T>\
    \ t) {\n}\n\n}  // namespace BanetteGin\n\n#endif"
  dependsOn:
  - src/geometry/line.hpp
  - src/basic/comparison.hpp
  - src/basic/equal.hpp
  - src/basic/sign.hpp
  - src/basic/constant.hpp
  - src/basic/greater_equal.hpp
  - src/basic/greater_than.hpp
  - src/basic/less_equal.hpp
  - src/basic/less_than.hpp
  - src/geometry/point.hpp
  - src/geometry/segment.hpp
  isVerificationFile: false
  path: src/geometry/distance.hpp
  requiredBy:
  - src/all.hpp
  - src/all.hpp
  - src/geometry/circle.hpp
  - src/geometry/circumcircle.hpp
  - src/geometry/orthocenter.hpp
  - src/geometry/excircle.hpp
  - src/geometry/incircle.hpp
  - src/geometry/triangle.hpp
  - src/geometry/centroid.hpp
  - src/geometry/segment.hpp
  - src/geometry/intersect.hpp
  timestamp: '2023-09-09 01:13:20+09:00'
  verificationStatus: LIBRARY_SOME_WA
  verifiedWith:
  - test/aizu_online_judge/Library/CGL/7_C.test.cpp
  - test/aizu_online_judge/Library/CGL/7_B.test.cpp
  - test/yukicoder/306-2.test.cpp
  - test/yukicoder/306-2.test.cpp
  - test/yukicoder/306-1.test.cpp
  - test/yukicoder/306-1.test.cpp
documentation_of: src/geometry/distance.hpp
layout: document
redirect_from:
- /library/src/geometry/distance.hpp
- /library/src/geometry/distance.hpp.html
title: src/geometry/distance.hpp
---

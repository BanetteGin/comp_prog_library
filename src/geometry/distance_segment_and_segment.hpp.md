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
    path: src/geometry/line.hpp
    title: src/geometry/line.hpp
  - icon: ':warning:'
    path: src/geometry/point.hpp
    title: src/geometry/point.hpp
  - icon: ':warning:'
    path: src/geometry/segment.hpp
    title: src/geometry/segment.hpp
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
  bundledCode: "#line 1 \"src/geometry/distance_segment_and_segment.hpp\"\n\n\n\n\
    #line 1 \"src/geometry/line.hpp\"\n\n\n\n#line 1 \"src/basic/comparison.hpp\"\n\
    \n\n\n#line 1 \"src/basic/equal.hpp\"\n\n\n\n#line 1 \"src/basic/sign.hpp\"\n\n\
    \n\n#line 1 \"src/basic/constant.hpp\"\n\n\n\nnamespace BanetteGin {\n\nconst\
    \ long double EPS = 10e-12;\nconst long long int LINF = 1001001001001001001LL;\n\
    const long double PI = acos(-1);\nconst long double GOLDEN_RATIO = 2 * cos(PI\
    \ / 5);\n\n}  // namespace BanetteGin\n\n\n#line 5 \"src/basic/sign.hpp\"\n\n\
    namespace BanetteGin {\n\ntemplate <class T>\nint sign(const T& x) {\n    return\
    \ (x < -EPS ? -1 : (x < EPS ? 0 : 1));\n}\n\n}  // namespace BanetteGin\n\n\n\
    #line 5 \"src/basic/equal.hpp\"\n\nnamespace BanetteGin {\n\ntemplate <class T>\n\
    bool equal(const T &a, const T &b) {\n    return (sign(a - b) == 0);\n}\n\n} \
    \ // namespace BanetteGin\n\n\n#line 1 \"src/basic/greater_equal.hpp\"\n\n\n\n\
    namespace BanetteGin {\n\ntemplate <class T>\nbool greater_equal(const T &a, const\
    \ T &b) {\n    return (sign(a - b) >= 0);\n}\n\n}  // namespace BanetteGin\n\n\
    \n#line 1 \"src/basic/greater_than.hpp\"\n\n\n\nnamespace BanetteGin {\n\ntemplate\
    \ <class T>\nbool greater_than(const T &a, const T &b) {\n    return (sign(a -\
    \ b) > 0);\n}\n\n}  // namespace BanetteGin\n\n\n#line 1 \"src/basic/less_equal.hpp\"\
    \n\n\n\nnamespace BanetteGin {\n\ntemplate <class T>\nbool less_equal(const T\
    \ &a, const T &b) {\n    return (sign(a - b) <= 0);\n}\n\n}  // namespace BanetteGin\n\
    \n\n#line 1 \"src/basic/less_than.hpp\"\n\n\n\nnamespace BanetteGin {\n\ntemplate\
    \ <class T>\nbool less_than(const T &a, const T &b) {\n    return (sign(a - b)\
    \ < 0);\n}\n\n}  // namespace BanetteGin\n\n\n#line 9 \"src/basic/comparison.hpp\"\
    \n\n\n#line 1 \"src/geometry/point.hpp\"\n\n\n\n#include <complex>\n\n#line 7\
    \ \"src/geometry/point.hpp\"\n\nnamespace BanetteGin {\n\ntemplate <class T>\n\
    struct point {\n    T x, y;\n    point(T x_, T y_)\n        : x(x_), y(y_) {\n\
    \    }\n\n    point operator+(const point& p) const noexcept {\n        return\
    \ point<T>(this->x + p.x, this->y + p.y);\n    }\n    point operator-(const point&\
    \ p) const noexcept {\n        return point<T>(this->x - p.x, this->y - p.y);\n\
    \    }\n    point operator*(const T& a) const noexcept {\n        return point<T>(this->x\
    \ * a, this->y * a);\n    }\n    point operator/(const T& a) const noexcept {\n\
    \        return point<T>(this->x / a, this->y / a);\n    }\n\n    point& operator+=(const\
    \ point& p) noexcept {\n        this->x += p.x;\n        this->y += p.y;\n   \
    \     return *this;\n    }\n    point& operator-=(const point& p) noexcept {\n\
    \        this->x -= p.x;\n        this->y -= p.y;\n        return *this;\n   \
    \ }\n    point& operator*=(const T& a) noexcept {\n        this->x *= a;\n   \
    \     this->y *= a;\n        return *this;\n    }\n    point& operator/=(const\
    \ T& a) noexcept {\n        this->x /= a;\n        this->y /= a;\n        return\
    \ *this;\n    }\n\n    bool operator==(const point& p) const noexcept {\n    \
    \    return equal(this->x, p.x) && equal(this->y, p.y);\n    }\n    bool operator!=(const\
    \ point& p) const noexcept {\n        return !equal(this->x, p.x) || !equal(this->y,\
    \ p.y);\n    }\n    bool operator<(const point& p) const noexcept {\n        return\
    \ !equal(this->x, p.x) || !equal(this->y, p.y);\n    }\n\n    friend T dot(const\
    \ point& p, const point& q) noexcept {\n        return p.x * q.x + p.y * q.y;\n\
    \    }\n    friend T cross(const point& p, const point& q) noexcept {\n      \
    \  return p.x * q.y - p.y * q.x;\n    }\n    friend T norm(const point& p) {\n\
    \        return sqrt(p.x * p.x + p.y * p.y);\n    }\n    friend T arg(const point&\
    \ p) {\n        return atan2(p.y, p.x);\n    }\n};\n\n}  // namespace BanetteGin\n\
    \n\n#line 6 \"src/geometry/line.hpp\"\n\nnamespace BanetteGin {\n\ntemplate <class\
    \ T>\nstruct line {\n    T a, b, c;\n    point<T> p, q;\n    line(point<T> p_,\
    \ point<T> q_)\n        : a(q_.y - p_.y), b(p_.x - q_.x), c(-p_.x * q_.y + q_.x\
    \ * p_.y) {\n        normalize();\n    }\n    line(point<T> p_, T m_)\n      \
    \  : a(m_), b(-1), c(p_.y - m_ * p_.x) {\n        normalize();\n    }\n    line(T\
    \ a_, T b_, T c_)\n        : a(a_), b(b_), c(c_) {\n        normalize();\n   \
    \ }\n    void normalize() {\n        if (!equal(a, 0)) {\n            b /= a;\n\
    \            c /= a;\n            a = 1;\n        } else if (!equal(b, 0)) {\n\
    \            b = 1;\n            c /= b;\n        } else {\n            assert(c\
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
    \ BanetteGin\n\n\n#line 1 \"src/geometry/segment.hpp\"\n\n\n\n#line 1 \"src/geometry/distance_point_and_point.hpp\"\
    \n\n\n\n#line 5 \"src/geometry/distance_point_and_point.hpp\"\n\nnamespace BanetteGin\
    \ {\n\ntemplate <class T>\nT distance_point_and_point(point<T> p, point<T> q)\
    \ {\n    return sqrt(pow(p.x - q.x, 2) + pow(p.y - q.y, 2));\n}\n\n}  // namespace\
    \ BanetteGin\n\n\n#line 6 \"src/geometry/segment.hpp\"\n\nnamespace BanetteGin\
    \ {\n\ntemplate <class T>\nstruct segment {\n    point<T> p, q;\n    T length;\n\
    \    segment(point<T> p_, point<T> q_)\n        : p(p_), q(q_), length(distance_point_and_point(p,\
    \ q)) {\n    }\n};\n\n}  // namespace BanetteGin\n\n\n#line 7 \"src/geometry/distance_segment_and_segment.hpp\"\
    \n\nnamespace BanetteGin {\n\ntemplate <class T>\nT distance_segment_and_segment(point<T>\
    \ l, segment<T> m) {\n}\n\n}  // namespace BanetteGin\n\n\n"
  code: '#ifndef BANETTEGIN_DISTANCE_SEGMENT_AND_SEGMENT_HPP_INCLUDED

    #define BANETTEGIN_DISTANCE_SEGMENT_AND_SEGMENT_HPP_INCLUDED


    #include "line.hpp"

    #include "point.hpp"

    #include "segment.hpp"


    namespace BanetteGin {


    template <class T>

    T distance_segment_and_segment(point<T> l, segment<T> m) {

    }


    }  // namespace BanetteGin


    #endif'
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
  - src/geometry/distance_point_and_point.hpp
  isVerificationFile: false
  path: src/geometry/distance_segment_and_segment.hpp
  requiredBy:
  - src/all.hpp
  timestamp: '2023-09-08 07:19:50+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/geometry/distance_segment_and_segment.hpp
layout: document
redirect_from:
- /library/src/geometry/distance_segment_and_segment.hpp
- /library/src/geometry/distance_segment_and_segment.hpp.html
title: src/geometry/distance_segment_and_segment.hpp
---

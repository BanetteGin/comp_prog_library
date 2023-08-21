---
data:
  _extendedDependsOn:
  - icon: ':warning:'
    path: src/basic/constant.hpp
    title: src/basic/constant.hpp
  - icon: ':warning:'
    path: src/basic/equal.hpp
    title: src/basic/equal.hpp
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
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/geometry/distance_point_and_segment.hpp\"\n\n\n\n#line\
    \ 1 \"src/geometry/line.hpp\"\n\n\n\n#line 1 \"src/basic/equal.hpp\"\n\n\n\n#line\
    \ 1 \"src/basic/sign.hpp\"\n\n\n\n#line 1 \"src/basic/constant.hpp\"\n\n\n\nnamespace\
    \ BanetteGin {\n\nconst long double EPS = 10e-12;\nconst long long int LINF =\
    \ 1001001001001001001LL;\nconst long double PI = acos(-1);\nconst long double\
    \ GOLDEN_RATIO = 2 * cos(PI / 5);\n\n}  // namespace BanetteGin\n\n\n#line 5 \"\
    src/basic/sign.hpp\"\n\nnamespace BanetteGin {\n\ntemplate <class T>\nint sign(const\
    \ T& x) {\n    return (x < -EPS ? -1 : (x < EPS ? 0 : 1));\n}\n\n}  // namespace\
    \ BanetteGin\n\n\n#line 5 \"src/basic/equal.hpp\"\n\nnamespace BanetteGin {\n\n\
    template <class T>\nbool equal(const T &a, const T &b) {\n    return (sign(a -\
    \ b) == 0);\n}\n\n}  // namespace BanetteGin\n\n\n#line 1 \"src/geometry/point.hpp\"\
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
    \   }\n\n    T dot(const point& p, const point& q) const noexcept {\n        return\
    \ p.x * q.x + p.y * q.y;\n    }\n    T cross(const point& p, const point& q) const\
    \ noexcept {\n        return p.x * q.y - p.y * q.x;\n    }\n};\n\n}  // namespace\
    \ BanetteGin\n\n\n#line 6 \"src/geometry/line.hpp\"\n\nnamespace BanetteGin {\n\
    \ntemplate <class T>\nstruct line {\n    T a, b, c;\n    line(point<T> p_, point<T>\
    \ q_)\n        : a(q_.y - p_.y), b(p_.x - q_.x), c(-p_.x * q_.y + q_.x * p_.y)\
    \ {\n        if (!equal(a, 0)) {\n            a = 1;\n            b /= a;\n  \
    \          c /= a;\n        } else if (!equal(b, 0)) {\n            b = 1;\n \
    \           c /= b;\n        }\n    }\n    line(point<T> p_, T m_)\n        :\
    \ a(m_), b(-1), c(p_.y - m_ * p_.x) {\n        if (!equal(a, 0)) {\n         \
    \   b /= a;\n            c /= a;\n            a = 1;\n        } else if (!equal(b,\
    \ 0)) {\n            c /= b;\n            b = 1;\n        }\n    }\n    line(T\
    \ a_, T b_, T c_)\n        : a(a_), b(b_), c(c_) {\n        if (!equal(a, 0))\
    \ {\n            b /= a;\n            c /= a;\n            a = 1;\n        } else\
    \ if (!equal(b, 0)) {\n            c /= b;\n            b = 1;\n        }\n  \
    \  }\n\n    bool operator==(const line& l) const noexcept {\n        return equal(this->a,\
    \ l.a) && equal(this->b, l.b) && equal(this->c, l.c);\n    }\n    bool operator!=(const\
    \ line& l) const noexcept {\n        return !equal(this->a, l.a) || !equal(this->b,\
    \ l.b) || !equal(this->c, l.c);\n    }\n};\n\n}  // namespace BanetteGin\n\n\n\
    #line 1 \"src/geometry/segment.hpp\"\n\n\n\n#line 1 \"src/geometry/distance_point_and_point.hpp\"\
    \n\n\n\n#line 5 \"src/geometry/distance_point_and_point.hpp\"\n\nnamespace BanetteGin\
    \ {\n\ntemplate <class T>\nT distance_point_and_point(point<T> p, point<T> q)\
    \ {\n    return sqrt(pow(p.x - q.x, 2) + pow(p.y - q.y, 2));\n}\n\n}  // namespace\
    \ BanetteGin\n\n\n#line 6 \"src/geometry/segment.hpp\"\n\nnamespace BanetteGin\
    \ {\n\ntemplate <class T>\nstruct segment {\n    point<T> p, q;\n    T length;\n\
    \    segment(point<T> p_, point<T> q_)\n        : p(p_), q(q_), length(distance_between_point_and_point(p,\
    \ q)) {\n    }\n};\n\n}  // namespace BanetteGin\n\n\n#line 7 \"src/geometry/distance_point_and_segment.hpp\"\
    \n\nnamespace BanetteGin {\n\ntemplate <class T>\nT distance_point_and_segment(point<T>\
    \ p, segment<T> l) {\n}\n\n}  // namespace BanetteGin\n\n\n"
  code: '#ifndef BANETTEGIN_DISTANCE_POINT_AND_SEGMENT_HPP_INCLUDED

    #define BANETTEGIN_DISTANCE_POINT_AND_SEGMENT_HPP_INCLUDED


    #include "line.hpp"

    #include "point.hpp"

    #include "segment.hpp"


    namespace BanetteGin {


    template <class T>

    T distance_point_and_segment(point<T> p, segment<T> l) {

    }


    }  // namespace BanetteGin


    #endif'
  dependsOn:
  - src/geometry/line.hpp
  - src/basic/equal.hpp
  - src/basic/sign.hpp
  - src/basic/constant.hpp
  - src/geometry/point.hpp
  - src/geometry/segment.hpp
  - src/geometry/distance_point_and_point.hpp
  isVerificationFile: false
  path: src/geometry/distance_point_and_segment.hpp
  requiredBy: []
  timestamp: '2023-08-22 02:10:12+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/geometry/distance_point_and_segment.hpp
layout: document
redirect_from:
- /library/src/geometry/distance_point_and_segment.hpp
- /library/src/geometry/distance_point_and_segment.hpp.html
title: src/geometry/distance_point_and_segment.hpp
---

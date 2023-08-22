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
    path: src/geometry/line.hpp
    title: src/geometry/line.hpp
  - icon: ':warning:'
    path: src/geometry/point.hpp
    title: src/geometry/point.hpp
  _extendedRequiredBy:
  - icon: ':warning:'
    path: src/geometry/intersect_line_and_circle.hpp
    title: src/geometry/intersect_line_and_circle.hpp
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/geometry/distance_point_and_line.hpp\"\n\n\n\n#line\
    \ 1 \"src/geometry/line.hpp\"\n\n\n\n#line 1 \"src/basic/comparison.hpp\"\n\n\n\
    \n#line 1 \"src/basic/equal.hpp\"\n\n\n\n#line 1 \"src/basic/sign.hpp\"\n\n\n\n\
    #line 1 \"src/basic/constant.hpp\"\n\n\n\nnamespace BanetteGin {\n\nconst long\
    \ double EPS = 10e-12;\nconst long long int LINF = 1001001001001001001LL;\nconst\
    \ long double PI = acos(-1);\nconst long double GOLDEN_RATIO = 2 * cos(PI / 5);\n\
    \n}  // namespace BanetteGin\n\n\n#line 5 \"src/basic/sign.hpp\"\n\nnamespace\
    \ BanetteGin {\n\ntemplate <class T>\nint sign(const T& x) {\n    return (x <\
    \ -EPS ? -1 : (x < EPS ? 0 : 1));\n}\n\n}  // namespace BanetteGin\n\n\n#line\
    \ 5 \"src/basic/equal.hpp\"\n\nnamespace BanetteGin {\n\ntemplate <class T>\n\
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
    \ !equal(this->x, p.x) || !equal(this->y, p.y);\n    }\n\n    T dot(const point&\
    \ p, const point& q) const noexcept {\n        return p.x * q.x + p.y * q.y;\n\
    \    }\n    T cross(const point& p, const point& q) const noexcept {\n       \
    \ return p.x * q.y - p.y * q.x;\n    }\n};\n\n}  // namespace BanetteGin\n\n\n\
    #line 6 \"src/geometry/line.hpp\"\n\nnamespace BanetteGin {\n\ntemplate <class\
    \ T>\nstruct line {\n    T a, b, c;\n    line(point<T> p_, point<T> q_)\n    \
    \    : a(q_.y - p_.y), b(p_.x - q_.x), c(-p_.x * q_.y + q_.x * p_.y) {\n     \
    \   if (!equal(a, 0)) {\n            a = 1;\n            b /= a;\n           \
    \ c /= a;\n        } else if (!equal(b, 0)) {\n            b = 1;\n          \
    \  c /= b;\n        }\n    }\n    line(point<T> p_, T m_)\n        : a(m_), b(-1),\
    \ c(p_.y - m_ * p_.x) {\n        if (!equal(a, 0)) {\n            b /= a;\n  \
    \          c /= a;\n            a = 1;\n        } else if (!equal(b, 0)) {\n \
    \           c /= b;\n            b = 1;\n        }\n    }\n    line(T a_, T b_,\
    \ T c_)\n        : a(a_), b(b_), c(c_) {\n        if (!equal(a, 0)) {\n      \
    \      b /= a;\n            c /= a;\n            a = 1;\n        } else if (!equal(b,\
    \ 0)) {\n            c /= b;\n            b = 1;\n        }\n    }\n\n    bool\
    \ operator==(const line& l) const noexcept {\n        return equal(this->a, l.a)\
    \ && equal(this->b, l.b) && equal(this->c, l.c);\n    }\n    bool operator!=(const\
    \ line& l) const noexcept {\n        return !equal(this->a, l.a) || !equal(this->b,\
    \ l.b) || !equal(this->c, l.c);\n    }\n};\n\n}  // namespace BanetteGin\n\n\n\
    #line 6 \"src/geometry/distance_point_and_line.hpp\"\n\nnamespace BanetteGin {\n\
    \ntemplate <class T>\nT distance_point_and_line(point<T> p, line<T> l) {\n   \
    \ return abs(p.x * l.a + p.y * l.b + l.c) / sqrt(l.a * l.a + l.b * l.b);\n}\n\n\
    }  // namespace BanetteGin\n\n\n"
  code: "#ifndef BANETTEGIN_DISTANCE_POINT_AND_LINE_HPP_INCLUDED\n#define BANETTEGIN_DISTANCE_POINT_AND_LINE_HPP_INCLUDED\n\
    \n#include \"line.hpp\"\n#include \"point.hpp\"\n\nnamespace BanetteGin {\n\n\
    template <class T>\nT distance_point_and_line(point<T> p, line<T> l) {\n    return\
    \ abs(p.x * l.a + p.y * l.b + l.c) / sqrt(l.a * l.a + l.b * l.b);\n}\n\n}  //\
    \ namespace BanetteGin\n\n#endif"
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
  isVerificationFile: false
  path: src/geometry/distance_point_and_line.hpp
  requiredBy:
  - src/geometry/intersect_line_and_circle.hpp
  timestamp: '2023-08-22 22:07:36+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/geometry/distance_point_and_line.hpp
layout: document
redirect_from:
- /library/src/geometry/distance_point_and_line.hpp
- /library/src/geometry/distance_point_and_line.hpp.html
title: src/geometry/distance_point_and_line.hpp
---

---
data:
  _extendedDependsOn:
  - icon: ':warning:'
    path: src/constant.hpp
    title: src/constant.hpp
  - icon: ':warning:'
    path: src/equal.hpp
    title: src/equal.hpp
  _extendedRequiredBy:
  - icon: ':warning:'
    path: src/all.hpp
    title: src/all.hpp
  - icon: ':warning:'
    path: src/circle.hpp
    title: src/circle.hpp
  - icon: ':warning:'
    path: src/line.hpp
    title: src/line.hpp
  - icon: ':warning:'
    path: src/rotate.hpp
    title: src/rotate.hpp
  - icon: ':warning:'
    path: src/segment.hpp
    title: src/segment.hpp
  - icon: ':warning:'
    path: src/triangle.hpp
    title: src/triangle.hpp
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/point.hpp\"\n\n\n\n#include <complex>\n\n#line 1 \"\
    src/equal.hpp\"\n\n\n\n#line 1 \"src/constant.hpp\"\n\n\n\nnamespace BanetteGin\
    \ {\n\nconst long double EPS = 10e-12;\nconst long long int LINF = 1001001001001001001LL;\n\
    const long double PI = acos(-1);\n\n}  // namespace BanetteGin\n\n\n#line 5 \"\
    src/equal.hpp\"\n\nnamespace BanetteGin {\n\ntemplate <class T>\nbool equal(const\
    \ T &a, const T &b) {\n    const T dif = a - b;\n    if (dif < 0) dif = -dif;\n\
    \    return dif < EPS;\n}\n\n}  // namespace BanetteGin\n\n\n#line 7 \"src/point.hpp\"\
    \n\nnamespace BanetteGin {\n\ntemplate <class T>\nstruct point {\n    T x, y;\n\
    \    point(T x_, T y_)\n        : x(x_), y(y_) {\n    }\n\n    point operator+(const\
    \ point& p) const noexcept {\n        return point<T>(this->x + p.x, this->y +\
    \ p.y);\n    }\n    point operator-(const point& p) const noexcept {\n       \
    \ return point<T>(this->x - p.x, this->y - p.y);\n    }\n    point operator*(const\
    \ T& a) const noexcept {\n        return point<T>(this->x * a, this->y * a);\n\
    \    }\n    point operator/(const T& a) const noexcept {\n        return point<T>(this->x\
    \ / a, this->y / a);\n    }\n\n    point& operator+=(const point& p) noexcept\
    \ {\n        this->x += p.x;\n        this->y += p.y;\n        return *this;\n\
    \    }\n    point& operator-=(const point& p) noexcept {\n        this->x -= p.x;\n\
    \        this->y -= p.y;\n        return *this;\n    }\n    point& operator*=(const\
    \ T& a) noexcept {\n        this->x *= a;\n        this->y *= a;\n        return\
    \ *this;\n    }\n    point& operator/=(const T& a) noexcept {\n        this->x\
    \ /= a;\n        this->y /= a;\n        return *this;\n    }\n\n    bool operator==(const\
    \ point& p) const noexcept {\n        return equal(this->x, p.x) && equal(this->y,\
    \ p.y);\n    }\n    bool operator!=(const point& p) const noexcept {\n       \
    \ return !equal(this->x, p.x) || !equal(this->y, p.y);\n    }\n\n    T dot(const\
    \ point& p, const point& q) const noexcept {\n        return p.x * q.x + p.y *\
    \ q.y;\n    }\n    T cross(const point& p, const point& q) const noexcept {\n\
    \        return p.x * q.y - p.y * q.x;\n    }\n};\n\n}  // namespace BanetteGin\n\
    \n\n"
  code: "#ifndef BANETTEGIN_POINT_HPP_INCLUDED\n#define BANETTEGIN_POINT_HPP_INCLUDED\n\
    \n#include <complex>\n\n#include \"equal.hpp\"\n\nnamespace BanetteGin {\n\ntemplate\
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
    \ p.x) || !equal(this->y, p.y);\n    }\n\n    T dot(const point& p, const point&\
    \ q) const noexcept {\n        return p.x * q.x + p.y * q.y;\n    }\n    T cross(const\
    \ point& p, const point& q) const noexcept {\n        return p.x * q.y - p.y *\
    \ q.x;\n    }\n};\n\n}  // namespace BanetteGin\n\n#endif"
  dependsOn:
  - src/equal.hpp
  - src/constant.hpp
  isVerificationFile: false
  path: src/point.hpp
  requiredBy:
  - src/triangle.hpp
  - src/all.hpp
  - src/circle.hpp
  - src/rotate.hpp
  - src/segment.hpp
  - src/line.hpp
  timestamp: '2023-08-07 22:07:44+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/point.hpp
layout: document
redirect_from:
- /library/src/point.hpp
- /library/src/point.hpp.html
title: src/point.hpp
---

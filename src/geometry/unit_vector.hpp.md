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
    path: src/geometry/point.hpp
    title: src/geometry/point.hpp
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
  bundledCode: "#line 1 \"src/geometry/unit_vector.hpp\"\n\n\n\n#line 1 \"src/geometry/point.hpp\"\
    \n\n\n\n#include <complex>\n\n#line 1 \"src/basic/comparison.hpp\"\n\n\n\n#line\
    \ 1 \"src/basic/equal.hpp\"\n\n\n\n#line 1 \"src/basic/sign.hpp\"\n\n\n\n#line\
    \ 1 \"src/basic/constant.hpp\"\n\n\n\nnamespace BanetteGin {\n\nconst long double\
    \ EPS = 10e-12;\nconst long long int LINF = 1001001001001001001LL;\nconst long\
    \ double PI = acos(-1);\nconst long double GOLDEN_RATIO = 2 * cos(PI / 5);\n\n\
    }  // namespace BanetteGin\n\n\n#line 5 \"src/basic/sign.hpp\"\n\nnamespace BanetteGin\
    \ {\n\ntemplate <class T>\nint sign(const T& x) {\n    return (x < -EPS ? -1 :\
    \ (x < EPS ? 0 : 1));\n}\n\n}  // namespace BanetteGin\n\n\n#line 5 \"src/basic/equal.hpp\"\
    \n\nnamespace BanetteGin {\n\ntemplate <class T>\nbool equal(const T &a, const\
    \ T &b) {\n    return (sign(a - b) == 0);\n}\n\n}  // namespace BanetteGin\n\n\
    \n#line 1 \"src/basic/greater_equal.hpp\"\n\n\n\nnamespace BanetteGin {\n\ntemplate\
    \ <class T>\nbool greater_equal(const T &a, const T &b) {\n    return (sign(a\
    \ - b) >= 0);\n}\n\n}  // namespace BanetteGin\n\n\n#line 1 \"src/basic/greater_than.hpp\"\
    \n\n\n\nnamespace BanetteGin {\n\ntemplate <class T>\nbool greater_than(const\
    \ T &a, const T &b) {\n    return (sign(a - b) > 0);\n}\n\n}  // namespace BanetteGin\n\
    \n\n#line 1 \"src/basic/less_equal.hpp\"\n\n\n\nnamespace BanetteGin {\n\ntemplate\
    \ <class T>\nbool less_equal(const T &a, const T &b) {\n    return (sign(a - b)\
    \ <= 0);\n}\n\n}  // namespace BanetteGin\n\n\n#line 1 \"src/basic/less_than.hpp\"\
    \n\n\n\nnamespace BanetteGin {\n\ntemplate <class T>\nbool less_than(const T &a,\
    \ const T &b) {\n    return (sign(a - b) < 0);\n}\n\n}  // namespace BanetteGin\n\
    \n\n#line 9 \"src/basic/comparison.hpp\"\n\n\n#line 7 \"src/geometry/point.hpp\"\
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
    \ return !equal(this->x, p.x) || !equal(this->y, p.y);\n    }\n    bool operator<(const\
    \ point& p) const noexcept {\n        return !equal(this->x, p.x) || !equal(this->y,\
    \ p.y);\n    }\n\n    friend T dot(const point& p, const point& q) noexcept {\n\
    \        return p.x * q.x + p.y * q.y;\n    }\n    friend T cross(const point&\
    \ p, const point& q) noexcept {\n        return p.x * q.y - p.y * q.x;\n    }\n\
    \    friend T norm(const point& p) {\n        return sqrt(p.x * p.x + p.y * p.y);\n\
    \    }\n    friend T arg(const point& p) {\n        return atan2(p.y, p.x);\n\
    \    }\n};\n\n}  // namespace BanetteGin\n\n\n#line 5 \"src/geometry/unit_vector.hpp\"\
    \n\nnamespace BanetteGin {\n\ntemplate <class T>\npoint<T> unit_vector(const point<T>&\
    \ p) {\n    return p / norm(p);\n}\n\n}  // namespace BanetteGin\n\n\n"
  code: "#ifndef BANETTEGIN_UNIT_VECTOR_HPP_INCLUDED\n#define BANETTEGIN_UNIT_VECTOR_HPP_INCLUDED\n\
    \n#include \"point.hpp\"\n\nnamespace BanetteGin {\n\ntemplate <class T>\npoint<T>\
    \ unit_vector(const point<T>& p) {\n    return p / norm(p);\n}\n\n}  // namespace\
    \ BanetteGin\n\n#endif"
  dependsOn:
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
  path: src/geometry/unit_vector.hpp
  requiredBy:
  - src/all.hpp
  timestamp: '2023-09-08 11:51:57+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/geometry/unit_vector.hpp
layout: document
redirect_from:
- /library/src/geometry/unit_vector.hpp
- /library/src/geometry/unit_vector.hpp.html
title: src/geometry/unit_vector.hpp
---

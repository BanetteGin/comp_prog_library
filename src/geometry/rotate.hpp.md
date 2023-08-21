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
  bundledCode: "#line 1 \"src/geometry/rotate.hpp\"\n\n\n\n#line 1 \"src/geometry/point.hpp\"\
    \n\n\n\n#include <complex>\n\n#line 1 \"src/basic/equal.hpp\"\n\n\n\n#line 1 \"\
    src/basic/sign.hpp\"\n\n\n\n#line 1 \"src/basic/constant.hpp\"\n\n\n\nnamespace\
    \ BanetteGin {\n\nconst long double EPS = 10e-12;\nconst long long int LINF =\
    \ 1001001001001001001LL;\nconst long double PI = acos(-1);\nconst long double\
    \ GOLDEN_RATIO = 2 * cos(PI / 5);\n\n}  // namespace BanetteGin\n\n\n#line 5 \"\
    src/basic/sign.hpp\"\n\nnamespace BanetteGin {\n\ntemplate <class T>\nint sign(const\
    \ T& x) {\n    return (x < -EPS ? -1 : (x < EPS ? 0 : 1));\n}\n\n}  // namespace\
    \ BanetteGin\n\n\n#line 5 \"src/basic/equal.hpp\"\n\nnamespace BanetteGin {\n\n\
    template <class T>\nbool equal(const T &a, const T &b) {\n    return (sign(a -\
    \ b) == 0);\n}\n\n}  // namespace BanetteGin\n\n\n#line 7 \"src/geometry/point.hpp\"\
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
    \ p.y);\n    }\n\n    T dot(const point& p, const point& q) const noexcept {\n\
    \        return p.x * q.x + p.y * q.y;\n    }\n    T cross(const point& p, const\
    \ point& q) const noexcept {\n        return p.x * q.y - p.y * q.x;\n    }\n};\n\
    \n}  // namespace BanetteGin\n\n\n#line 5 \"src/geometry/rotate.hpp\"\n\nnamespace\
    \ BanetteGin {\n\ntemplate <class T>\npoint<T> rotate(const point<T>& p, const\
    \ T& theta) {\n    return point<T>(cos(theta) * p.x - sin(theta) * p.y, sin(theta)\
    \ * p.x + cos(theta) * p.y);\n}\n\n}  // namespace BanetteGin\n\n\n"
  code: "#ifndef BANETTEGIN_ROTATE_HPP_INCLUDED\n#define BANETTEGIN_ROTATE_HPP_INCLUDED\n\
    \n#include \"point.hpp\"\n\nnamespace BanetteGin {\n\ntemplate <class T>\npoint<T>\
    \ rotate(const point<T>& p, const T& theta) {\n    return point<T>(cos(theta)\
    \ * p.x - sin(theta) * p.y, sin(theta) * p.x + cos(theta) * p.y);\n}\n\n}  //\
    \ namespace BanetteGin\n\n#endif"
  dependsOn:
  - src/geometry/point.hpp
  - src/basic/equal.hpp
  - src/basic/sign.hpp
  - src/basic/constant.hpp
  isVerificationFile: false
  path: src/geometry/rotate.hpp
  requiredBy:
  - src/all.hpp
  timestamp: '2023-08-22 02:10:12+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/geometry/rotate.hpp
layout: document
redirect_from:
- /library/src/geometry/rotate.hpp
- /library/src/geometry/rotate.hpp.html
title: src/geometry/rotate.hpp
---

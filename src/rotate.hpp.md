---
data:
  _extendedDependsOn:
  - icon: ':warning:'
    path: src/constant.hpp
    title: src/constant.hpp
  - icon: ':warning:'
    path: src/equal.hpp
    title: src/equal.hpp
  - icon: ':warning:'
    path: src/point.hpp
    title: src/point.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/rotate.hpp\"\n\n\n\n#line 1 \"src/point.hpp\"\n\n\n\n\
    #include <complex>\n\n#line 1 \"src/equal.hpp\"\n\n\n\n#line 1 \"src/constant.hpp\"\
    \n\n\n\nnamespace BanetteGin {\n\nconst long double EPS = 10e-12;\nconst long\
    \ long int LINF = 1001001001001001001LL;\nconst long double PI = acos(-1);\n\n\
    }  // namespace BanetteGin\n\n\n#line 5 \"src/equal.hpp\"\n\nnamespace BanetteGin\
    \ {\n\ntemplate <class T>\nbool equal(const T &a, const T &b) {\n    const T dif\
    \ = a - b;\n    if (dif < 0) dif = -dif;\n    return dif < EPS;\n}\n\n}  // namespace\
    \ BanetteGin\n\n\n#line 7 \"src/point.hpp\"\n\nnamespace BanetteGin {\n\ntemplate\
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
    \ q.x;\n    }\n};\n\n}  // namespace BanetteGin\n\n\n#line 5 \"src/rotate.hpp\"\
    \n\nnamespace BanetteGin {\n\ntemplate <class T>\npoint<T> rotate(const point<T>&\
    \ p, const T& theta) {\n    return point<T>(cos(theta) * p.x - sin(theta) * p.y,\
    \ sin(theta) * p.x + cos(theta) * p.y);\n}\n\n}  // namespace BanetteGin\n\n\n"
  code: "#ifndef BANETTEGIN_ROTATE_HPP_INCLUDED\n#define BANETTEGIN_ROTATE_HPP_INCLUDED\n\
    \n#include \"point.hpp\"\n\nnamespace BanetteGin {\n\ntemplate <class T>\npoint<T>\
    \ rotate(const point<T>& p, const T& theta) {\n    return point<T>(cos(theta)\
    \ * p.x - sin(theta) * p.y, sin(theta) * p.x + cos(theta) * p.y);\n}\n\n}  //\
    \ namespace BanetteGin\n\n#endif"
  dependsOn:
  - src/point.hpp
  - src/equal.hpp
  - src/constant.hpp
  isVerificationFile: false
  path: src/rotate.hpp
  requiredBy: []
  timestamp: '2023-08-07 22:07:44+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/rotate.hpp
layout: document
redirect_from:
- /library/src/rotate.hpp
- /library/src/rotate.hpp.html
title: src/rotate.hpp
---

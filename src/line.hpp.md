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
  bundledCode: "#line 1 \"src/line.hpp\"\n\n\n\n#line 1 \"src/equal.hpp\"\n\n\n\n\
    #line 1 \"src/constant.hpp\"\n\n\n\nnamespace BanetteGin {\n\nconst long double\
    \ EPS = 10e-12;\nconst long long int LINF = 1001001001001001001LL;\nconst long\
    \ double PI = acos(-1);\n\n}  // namespace BanetteGin\n\n\n#line 5 \"src/equal.hpp\"\
    \n\nnamespace BanetteGin {\n\ntemplate <class T>\nbool equal(const T &a, const\
    \ T &b) {\n    const T dif = a - b;\n    if (dif < 0) dif = -dif;\n    return\
    \ dif < EPS;\n}\n\n}  // namespace BanetteGin\n\n\n#line 1 \"src/point.hpp\"\n\
    \n\n\n#include <complex>\n\n#line 7 \"src/point.hpp\"\n\nnamespace BanetteGin\
    \ {\n\ntemplate <class T>\nstruct point {\n    T x, y;\n    point(T x_, T y_)\n\
    \        : x(x_), y(y_) {\n    }\n\n    point operator+(const point& p) const\
    \ noexcept {\n        return point<T>(this->x + p.x, this->y + p.y);\n    }\n\
    \    point operator-(const point& p) const noexcept {\n        return point<T>(this->x\
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
    \ p.x) || !equal(this->y, p.y);\n    }\n\n    T dot(const point& p, const point&\
    \ q) const noexcept {\n        return p.x * q.x + p.y * q.y;\n    }\n    T cross(const\
    \ point& p, const point& q) const noexcept {\n        return p.x * q.y - p.y *\
    \ q.x;\n    }\n};\n\n}  // namespace BanetteGin\n\n\n#line 6 \"src/line.hpp\"\n\
    \nnamespace BanetteGin {\n\ntemplate <class T>\nstruct line {\n    T a, b, c;\n\
    \    line(point<T> p_, point<T> q_)\n        : a(q_.y - p_.y), b(p_.x - q_.x),\
    \ c(-p_.x * q_.y + q_.x * p_.y) {\n        if (!equal(a, 0)) {\n            a\
    \ = 1;\n            b /= a;\n            c /= a;\n        } else if (!equal(b,\
    \ 0)) {\n            b = 1;\n            c /= b;\n        }\n    }\n    line(point<T>\
    \ p_, T m_)\n        : a(m_), b(-1), c(p_.y - m_ * p_.x) {\n        if (!equal(a,\
    \ 0)) {\n            b /= a;\n            c /= a;\n            a = 1;\n      \
    \  } else if (!equal(b, 0)) {\n            c /= b;\n            b = 1;\n     \
    \   }\n    }\n    line(T a_, T b_, T c_)\n        : a(a_), b(b_), c(c_) {\n  \
    \      if (!equal(a, 0)) {\n            b /= a;\n            c /= a;\n       \
    \     a = 1;\n        } else if (!equal(b, 0)) {\n            c /= b;\n      \
    \      b = 1;\n        }\n    }\n\n    bool operator==(const line& l) const noexcept\
    \ {\n        return equal(this->a, l.a) && equal(this->b, l.b) && equal(this->c,\
    \ l.c);\n    }\n    bool operator!=(const line& l) const noexcept {\n        return\
    \ !equal(this->a, l.a) || !equal(this->b, l.b) || !equal(this->c, l.c);\n    }\n\
    };\n\n}  // namespace BanetteGin\n\n\n"
  code: "#ifndef BANETTEGIN_LINE_HPP_INCLUDED\n#define BANETTEGIN_LINE_HPP_INCLUDED\n\
    \n#include \"equal.hpp\"\n#include \"point.hpp\"\n\nnamespace BanetteGin {\n\n\
    template <class T>\nstruct line {\n    T a, b, c;\n    line(point<T> p_, point<T>\
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
    \ l.b) || !equal(this->c, l.c);\n    }\n};\n\n}  // namespace BanetteGin\n\n#endif"
  dependsOn:
  - src/equal.hpp
  - src/constant.hpp
  - src/point.hpp
  isVerificationFile: false
  path: src/line.hpp
  requiredBy:
  - src/all.hpp
  timestamp: '2023-08-07 22:07:44+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/line.hpp
layout: document
redirect_from:
- /library/src/line.hpp
- /library/src/line.hpp.html
title: src/line.hpp
---

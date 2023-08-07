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
  - icon: ':warning:'
    path: src/segment.hpp
    title: src/segment.hpp
  - icon: ':warning:'
    path: src/triangle.hpp
    title: src/triangle.hpp
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
  bundledCode: "#line 1 \"src/circle.hpp\"\n\n\n\n#line 1 \"src/point.hpp\"\n\n\n\n\
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
    \ q.x;\n    }\n};\n\n}  // namespace BanetteGin\n\n\n#line 1 \"src/segment.hpp\"\
    \n\n\n\n#line 5 \"src/segment.hpp\"\n\nnamespace BanetteGin {\n\ntemplate <class\
    \ T>\nstruct segment {\n    point<T> p, q;\n    T len;\n    segment(point<T> p_,\
    \ point<T> q_)\n        : p(p_), q(q_), len(sqrt(pow(p.x - q.x, 2) + pow(p.y -\
    \ q.y, 2))) {\n    }\n    T length() {\n        return len;\n    }\n};\n\n}  //\
    \ namespace BanetteGin\n\n\n#line 1 \"src/triangle.hpp\"\n\n\n\n#line 7 \"src/triangle.hpp\"\
    \n\nnamespace BanetteGin {\n\ntemplate <class T>\nstruct triangle {\n    point<T>\
    \ point_a, point_b, point_c;\n    T length_a, length_b, length_c;\n    T angle_a,\
    \ angle_b, angle_c;\n    triangle(point<T> point_a_, point<T> point_b_, point<T>\
    \ point_c_)\n        : point_a(point_a_), point_b(point_b_), point_c(point_c_)\
    \ {\n        length_a = segment(point_b, point_c).length();\n        length_b\
    \ = segment(point_c, point_a).length();\n        length_c = segment(point_a, point_b).length();\n\
    \        angle_a = acos((pow(length_b, 2) + pow(length_c, 2) - pow(length_a, 2))\
    \ / (2 * length_b * length_c));\n        angle_b = acos((pow(length_c, 2) + pow(length_a,\
    \ 2) - pow(length_b, 2)) / (2 * length_c * length_a));\n        angle_c = acos((pow(length_a,\
    \ 2) + pow(length_b, 2) - pow(length_c, 2)) / (2 * length_a * length_b));\n  \
    \  };\n    std::pair<point<T>, T> circumcenter() const noexcept {\n        point<T>\
    \ o = (point_a * sin(2 * angle_a) + point_b * sin(2 * angle_b) + point_c * sin(2\
    \ * angle_c)) / (sin(2 * angle_a) + sin(2 * angle_b) + sin(2 * angle_c));\n  \
    \      T r = length_a / sin(angle_a) / 2;\n        return std::make_pair(o, r);\n\
    \    }\n};\n\n}  // namespace BanetteGin\n\n\n#line 7 \"src/circle.hpp\"\n\nnamespace\
    \ BanetteGin {\n\ntemplate <class T>\nstruct circle {\n    point<T> p;\n    T\
    \ r;\n    circle(point<T> p_, point<T> q_, point<T> r_)\n        : p(triangle(p_,\
    \ q_, r_).circumcenter().first), r(triangle(p_, q_, r_).circumcenter().second)\
    \ {\n    }\n};\n\n}  // namespace BanetteGin\n\n\n"
  code: "#ifndef BANETTEGIN_CIRCLE_HPP_INCLUDED\n#define BANETTEGIN_CIRCLE_HPP_INCLUDED\n\
    \n#include \"point.hpp\"\n#include \"segment.hpp\"\n#include \"triangle.hpp\"\n\
    \nnamespace BanetteGin {\n\ntemplate <class T>\nstruct circle {\n    point<T>\
    \ p;\n    T r;\n    circle(point<T> p_, point<T> q_, point<T> r_)\n        : p(triangle(p_,\
    \ q_, r_).circumcenter().first), r(triangle(p_, q_, r_).circumcenter().second)\
    \ {\n    }\n};\n\n}  // namespace BanetteGin\n\n#endif"
  dependsOn:
  - src/point.hpp
  - src/equal.hpp
  - src/constant.hpp
  - src/segment.hpp
  - src/triangle.hpp
  isVerificationFile: false
  path: src/circle.hpp
  requiredBy:
  - src/all.hpp
  timestamp: '2023-08-07 22:07:44+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/circle.hpp
layout: document
redirect_from:
- /library/src/circle.hpp
- /library/src/circle.hpp.html
title: src/circle.hpp
---

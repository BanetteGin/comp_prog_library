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
    path: src/geometry/circle.hpp
    title: src/geometry/circle.hpp
  - icon: ':warning:'
    path: src/geometry/distance_point_and_line.hpp
    title: src/geometry/distance_point_and_line.hpp
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
  - icon: ':warning:'
    path: src/geometry/triangle.hpp
    title: src/geometry/triangle.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/geometry/intersect_line_and_circle.hpp\"\n\n\n\n#line\
    \ 1 \"src/basic/comparison.hpp\"\n\n\n\n#line 1 \"src/basic/equal.hpp\"\n\n\n\n\
    #line 1 \"src/basic/sign.hpp\"\n\n\n\n#line 1 \"src/basic/constant.hpp\"\n\n\n\
    \nnamespace BanetteGin {\n\nconst long double EPS = 10e-12;\nconst long long int\
    \ LINF = 1001001001001001001LL;\nconst long double PI = acos(-1);\nconst long\
    \ double GOLDEN_RATIO = 2 * cos(PI / 5);\n\n}  // namespace BanetteGin\n\n\n#line\
    \ 5 \"src/basic/sign.hpp\"\n\nnamespace BanetteGin {\n\ntemplate <class T>\nint\
    \ sign(const T& x) {\n    return (x < -EPS ? -1 : (x < EPS ? 0 : 1));\n}\n\n}\
    \  // namespace BanetteGin\n\n\n#line 5 \"src/basic/equal.hpp\"\n\nnamespace BanetteGin\
    \ {\n\ntemplate <class T>\nbool equal(const T &a, const T &b) {\n    return (sign(a\
    \ - b) == 0);\n}\n\n}  // namespace BanetteGin\n\n\n#line 1 \"src/basic/greater_equal.hpp\"\
    \n\n\n\nnamespace BanetteGin {\n\ntemplate <class T>\nbool greater_equal(const\
    \ T &a, const T &b) {\n    return (sign(a - b) >= 0);\n}\n\n}  // namespace BanetteGin\n\
    \n\n#line 1 \"src/basic/greater_than.hpp\"\n\n\n\nnamespace BanetteGin {\n\ntemplate\
    \ <class T>\nbool greater_than(const T &a, const T &b) {\n    return (sign(a -\
    \ b) > 0);\n}\n\n}  // namespace BanetteGin\n\n\n#line 1 \"src/basic/less_equal.hpp\"\
    \n\n\n\nnamespace BanetteGin {\n\ntemplate <class T>\nbool less_equal(const T\
    \ &a, const T &b) {\n    return (sign(a - b) <= 0);\n}\n\n}  // namespace BanetteGin\n\
    \n\n#line 1 \"src/basic/less_than.hpp\"\n\n\n\nnamespace BanetteGin {\n\ntemplate\
    \ <class T>\nbool less_than(const T &a, const T &b) {\n    return (sign(a - b)\
    \ < 0);\n}\n\n}  // namespace BanetteGin\n\n\n#line 9 \"src/basic/comparison.hpp\"\
    \n\n\n#line 1 \"src/geometry/circle.hpp\"\n\n\n\n#line 1 \"src/geometry/distance_point_and_point.hpp\"\
    \n\n\n\n#line 1 \"src/geometry/point.hpp\"\n\n\n\n#include <complex>\n\n#line\
    \ 7 \"src/geometry/point.hpp\"\n\nnamespace BanetteGin {\n\ntemplate <class T>\n\
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
    #line 5 \"src/geometry/distance_point_and_point.hpp\"\n\nnamespace BanetteGin\
    \ {\n\ntemplate <class T>\nT distance_point_and_point(point<T> p, point<T> q)\
    \ {\n    return sqrt(pow(p.x - q.x, 2) + pow(p.y - q.y, 2));\n}\n\n}  // namespace\
    \ BanetteGin\n\n\n#line 1 \"src/geometry/segment.hpp\"\n\n\n\n#line 6 \"src/geometry/segment.hpp\"\
    \n\nnamespace BanetteGin {\n\ntemplate <class T>\nstruct segment {\n    point<T>\
    \ p, q;\n    T length;\n    segment(point<T> p_, point<T> q_)\n        : p(p_),\
    \ q(q_), length(distance_between_point_and_point(p, q)) {\n    }\n};\n\n}  //\
    \ namespace BanetteGin\n\n\n#line 1 \"src/geometry/triangle.hpp\"\n\n\n\n#line\
    \ 8 \"src/geometry/triangle.hpp\"\n\nnamespace BanetteGin {\n\ntemplate <class\
    \ T>\nstruct triangle {\n    point<T> point_a, point_b, point_c;\n    T length_a,\
    \ length_b, length_c;\n    T angle_a, angle_b, angle_c;\n    T area;\n    triangle(point<T>\
    \ point_a_, point<T> point_b_, point<T> point_c_)\n        : point_a(point_a_),\
    \ point_b(point_b_), point_c(point_c_) {\n        length_a = distance_point_and_point(point_b,\
    \ point_c);\n        length_b = distance_point_and_point(point_c, point_a);\n\
    \        length_c = distance_point_and_point(point_a, point_b);\n        angle_a\
    \ = acos((pow(length_b, 2) + pow(length_c, 2) - pow(length_a, 2)) / (2 * length_b\
    \ * length_c));\n        angle_b = acos((pow(length_c, 2) + pow(length_a, 2) -\
    \ pow(length_b, 2)) / (2 * length_c * length_a));\n        angle_c = acos((pow(length_a,\
    \ 2) + pow(length_b, 2) - pow(length_c, 2)) / (2 * length_a * length_b));\n  \
    \      area = length_b * length_c * sin(angle_a) / 2;\n    };\n    point<T> centroid()\
    \ const noexcept {\n        return (point_a + point_b + point_c) / 3;\n    }\n\
    \    std::pair<point<T>, T> circumcenter() const noexcept {\n        point<T>\
    \ o = (point_a * sin(2 * angle_a) + point_b * sin(2 * angle_b) + point_c * sin(2\
    \ * angle_c)) / (sin(2 * angle_a) + sin(2 * angle_b) + sin(2 * angle_c));\n  \
    \      T r = length_a / sin(angle_a) / 2;\n        return std::make_pair(o, r);\n\
    \    }\n    std::pair<point<T>, T> incenter() const noexcept {\n        point<T>\
    \ o = (point_a * length_a + point_b * length_b + point_c * length_c) / (length_a\
    \ + length_b + length_c);\n        T r = area * 2 / (length_a + length_b + length_c);\n\
    \        return std::make_pair(o, r);\n    }\n    std::pair<point<T>, T> incenter()\
    \ const noexcept {\n        point<T> o = (point_a * length_a + point_b * length_b\
    \ + point_c * length_c) / (length_a + length_b + length_c);\n        T r = area\
    \ * 2 / (length_a + length_b + length_c);\n        return std::make_pair(o, r);\n\
    \    }\n    point<T> orthocenter() const noexcept {\n        return (point_a *\
    \ tan(angle_a) + point_b * tan(angle_b) + point_c * tan(angle_c)) / (tan(angle_a)\
    \ + tan(angle_b) + tan(angle_c));\n    }\n};\n\n}  // namespace BanetteGin\n\n\
    \n#line 9 \"src/geometry/circle.hpp\"\n\nnamespace BanetteGin {\n\ntemplate <class\
    \ T>\nstruct circle {\n    point<T> p;\n    T r;\n    circle(point<T> p_, T r_)\n\
    \        : p(p_), r(r_) {\n    }\n    circle(point<T> p_, point<T> q_)\n     \
    \   : p(p_), r(distance_point_and_point(p_, q_)) {\n    }\n    circle(point<T>\
    \ p_, point<T> q_, point<T> r_)\n        : p(triangle(p_, q_, r_).circumcenter().first),\
    \ r(triangle(p_, q_, r_).circumcenter().second) {\n    }\n    bool operator==(const\
    \ circle& c) const noexcept {\n        return equal(this->p, c.p) && equal(this->r,\
    \ c.r);\n    }\n    bool operator!=(const circle& c) const noexcept {\n      \
    \  return !equal(this->p, c.p) || !equal(this->r, c.r);\n    }\n};\n\n}  // namespace\
    \ BanetteGin\n\n\n#line 1 \"src/geometry/distance_point_and_line.hpp\"\n\n\n\n\
    #line 1 \"src/geometry/line.hpp\"\n\n\n\n#line 6 \"src/geometry/line.hpp\"\n\n\
    namespace BanetteGin {\n\ntemplate <class T>\nstruct line {\n    T a, b, c;\n\
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
    };\n\n}  // namespace BanetteGin\n\n\n#line 6 \"src/geometry/distance_point_and_line.hpp\"\
    \n\nnamespace BanetteGin {\n\ntemplate <class T>\nT distance_point_and_line(point<T>\
    \ p, line<T> l) {\n    return abs(p.x * l.a + p.y * l.b + l.c) / sqrt(l.a * l.a\
    \ + l.b * l.b);\n}\n\n}  // namespace BanetteGin\n\n\n#line 8 \"src/geometry/intersect_line_and_circle.hpp\"\
    \n\nnamespace BanetteGin {\n\ntemplate <class T>\nint intersect_line_and_circle(const\
    \ line<T>& l, const circle<T>& c) {\n    T d = distance_point_and_line(c.p, l);\n\
    \    if (greater_than(d, c.r)) {\n        return 2;\n    }\n    if (equal(d, c.r))\
    \ {\n        return 1;\n    }\n    return 0;\n}\n\n}  // namespace BanetteGin\n\
    \n\n"
  code: "#ifndef BANETTEGIN_INTERSECT_LINE_AND_CIRCLE_HPP_INCLUDED\n#define BANETTEGIN_INTERSECT_LINE_AND_CIRCLE_HPP_INCLUDED\n\
    \n#include \"../basic/comparison.hpp\"\n#include \"circle.hpp\"\n#include \"distance_point_and_line.hpp\"\
    \n#include \"line.hpp\"\n\nnamespace BanetteGin {\n\ntemplate <class T>\nint intersect_line_and_circle(const\
    \ line<T>& l, const circle<T>& c) {\n    T d = distance_point_and_line(c.p, l);\n\
    \    if (greater_than(d, c.r)) {\n        return 2;\n    }\n    if (equal(d, c.r))\
    \ {\n        return 1;\n    }\n    return 0;\n}\n\n}  // namespace BanetteGin\n\
    \n#endif"
  dependsOn:
  - src/basic/comparison.hpp
  - src/basic/equal.hpp
  - src/basic/sign.hpp
  - src/basic/constant.hpp
  - src/basic/greater_equal.hpp
  - src/basic/greater_than.hpp
  - src/basic/less_equal.hpp
  - src/basic/less_than.hpp
  - src/geometry/circle.hpp
  - src/basic/equal.hpp
  - src/geometry/distance_point_and_point.hpp
  - src/geometry/point.hpp
  - src/geometry/segment.hpp
  - src/geometry/triangle.hpp
  - src/geometry/distance_point_and_line.hpp
  - src/geometry/line.hpp
  isVerificationFile: false
  path: src/geometry/intersect_line_and_circle.hpp
  requiredBy: []
  timestamp: '2023-08-22 02:10:12+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/geometry/intersect_line_and_circle.hpp
layout: document
redirect_from:
- /library/src/geometry/intersect_line_and_circle.hpp
- /library/src/geometry/intersect_line_and_circle.hpp.html
title: src/geometry/intersect_line_and_circle.hpp
---

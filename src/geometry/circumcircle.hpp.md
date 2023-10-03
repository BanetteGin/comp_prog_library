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
    path: src/geometry/circle.hpp
    title: src/geometry/circle.hpp
  - icon: ':heavy_check_mark:'
    path: src/geometry/distance.hpp
    title: src/geometry/distance.hpp
  - icon: ':heavy_check_mark:'
    path: src/geometry/line.hpp
    title: src/geometry/line.hpp
  - icon: ':heavy_check_mark:'
    path: src/geometry/point.hpp
    title: src/geometry/point.hpp
  - icon: ':heavy_check_mark:'
    path: src/geometry/segment.hpp
    title: src/geometry/segment.hpp
  - icon: ':heavy_check_mark:'
    path: src/geometry/triangle.hpp
    title: src/geometry/triangle.hpp
  _extendedRequiredBy:
  - icon: ':warning:'
    path: src/all.hpp
    title: src/all.hpp
  - icon: ':warning:'
    path: src/geometry/geometry.hpp
    title: src/geometry/geometry.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aizu_online_judge/Library/CGL/7_C.test.cpp
    title: test/aizu_online_judge/Library/CGL/7_C.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/geometry/circumcircle.hpp\"\n\n\n\n#line 1 \"src/geometry/circle.hpp\"\
    \n\n\n\n#line 1 \"src/basic/comparison.hpp\"\n\n\n\n#line 1 \"src/basic/equal.hpp\"\
    \n\n\n\n#line 1 \"src/basic/sign.hpp\"\n\n\n\n#line 1 \"src/basic/constant.hpp\"\
    \n\n\n\nnamespace BanetteGin {\n\nconst long double EPS = 1e-15L;\nconst long\
    \ long int LINF = 1001001001001001001LL;\nconst long double PI = acos(-1.0L);\n\
    const long double GOLDEN_RATIO = (1 + sqrt(5)) / 2;\n\n}  // namespace BanetteGin\n\
    \n\n#line 5 \"src/basic/sign.hpp\"\n\nnamespace BanetteGin {\n\ntemplate <class\
    \ T>\nint sign(const T& x) {\n    return (x < -EPS ? -1 : (x < EPS ? 0 : 1));\n\
    }\n\n}  // namespace BanetteGin\n\n\n#line 5 \"src/basic/equal.hpp\"\n\nnamespace\
    \ BanetteGin {\n\ntemplate <class T>\nbool equal(const T &a, const T &b) {\n \
    \   return (sign(a - b) == 0);\n}\n\n}  // namespace BanetteGin\n\n\n#line 1 \"\
    src/basic/greater_equal.hpp\"\n\n\n\nnamespace BanetteGin {\n\ntemplate <class\
    \ T>\nbool greater_equal(const T &a, const T &b) {\n    return (sign(a - b) >=\
    \ 0);\n}\n\n}  // namespace BanetteGin\n\n\n#line 1 \"src/basic/greater_than.hpp\"\
    \n\n\n\nnamespace BanetteGin {\n\ntemplate <class T>\nbool greater_than(const\
    \ T &a, const T &b) {\n    return (sign(a - b) > 0);\n}\n\n}  // namespace BanetteGin\n\
    \n\n#line 1 \"src/basic/less_equal.hpp\"\n\n\n\nnamespace BanetteGin {\n\ntemplate\
    \ <class T>\nbool less_equal(const T &a, const T &b) {\n    return (sign(a - b)\
    \ <= 0);\n}\n\n}  // namespace BanetteGin\n\n\n#line 1 \"src/basic/less_than.hpp\"\
    \n\n\n\nnamespace BanetteGin {\n\ntemplate <class T>\nbool less_than(const T &a,\
    \ const T &b) {\n    return (sign(a - b) < 0);\n}\n\n}  // namespace BanetteGin\n\
    \n\n#line 9 \"src/basic/comparison.hpp\"\n\n\n#line 1 \"src/geometry/distance.hpp\"\
    \n\n\n\n#line 1 \"src/geometry/line.hpp\"\n\n\n\n#line 1 \"src/geometry/point.hpp\"\
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
    \   }\n\n    friend T dot(const point& p, const point& q) noexcept {\n       \
    \ return p.x * q.x + p.y * q.y;\n    }\n    friend T cross(const point& p, const\
    \ point& q) noexcept {\n        return p.x * q.y - p.y * q.x;\n    }\n    friend\
    \ T norm(const point& p) {\n        return sqrt(p.x * p.x + p.y * p.y);\n    }\n\
    \    friend T arg(const point& p) {\n        return atan2(p.y, p.x);\n    }\n\
    };\n\n}  // namespace BanetteGin\n\n\n#line 6 \"src/geometry/line.hpp\"\n\nnamespace\
    \ BanetteGin {\n\ntemplate <class T>\nstruct line {\n    T a, b, c;\n    point<T>\
    \ p, q;\n    line(point<T> p_, point<T> q_)\n        : a(q_.y - p_.y), b(p_.x\
    \ - q_.x), c(-p_.x * q_.y + q_.x * p_.y) {\n        normalize();\n    }\n    line(point<T>\
    \ p_, T m_)\n        : a(m_), b(-1), c(p_.y - m_ * p_.x) {\n        normalize();\n\
    \    }\n    line(T a_, T b_, T c_)\n        : a(a_), b(b_), c(c_) {\n        normalize();\n\
    \    }\n    void normalize() {\n        if (!equal(a, 0)) {\n            b /=\
    \ a;\n            c /= a;\n            a = 1;\n        } else if (!equal(b, 0))\
    \ {\n            b = 1;\n            c /= b;\n        } else {\n            assert(c\
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
    \ BanetteGin\n\n\n#line 1 \"src/geometry/segment.hpp\"\n\n\n\n#line 6 \"src/geometry/segment.hpp\"\
    \n\nnamespace BanetteGin {\n\ntemplate <class T>\nstruct segment {\n    point<T>\
    \ p, q;\n    T length;\n    segment(point<T> p_, point<T> q_)\n        : p(p_),\
    \ q(q_), length(sqrt(pow(p_.x - q_.x, T(2)) + pow(p_.y - q_.y, T(2)))) {\n   \
    \ }\n};\n\n}  // namespace BanetteGin\n\n\n#line 7 \"src/geometry/distance.hpp\"\
    \n\nnamespace BanetteGin {\n\ntemplate <class T>\nT distance(point<T> p, point<T>\
    \ q) {\n    return sqrt(pow(p.x - q.x, T(2)) + pow(p.y - q.y, T(2)));\n}\n\ntemplate\
    \ <class T>\nT distance(point<T> p, line<T> l) {\n    return abs(p.x * l.a + p.y\
    \ * l.b + l.c) / sqrt(l.a * l.a + l.b * l.b);\n}\n\ntemplate <class T>\nT distance(point<T>\
    \ p, segment<T> s) {\n}\n\ntemplate <class T>\nT distance(segment<T> s, segment<T>\
    \ t) {\n}\n\n}  // namespace BanetteGin\n\n\n#line 1 \"src/geometry/triangle.hpp\"\
    \n\n\n\n#line 8 \"src/geometry/triangle.hpp\"\n\nnamespace BanetteGin {\n\ntemplate\
    \ <class T>\nstruct triangle {\n    point<T> points[3];\n    T lengths[3];\n \
    \   T angles[3];\n    T area;\n    triangle(point<T> point_a, point<T> point_b,\
    \ point<T> point_c)\n        : points{point_a, point_b, point_c} {\n        for\
    \ (int a = 0; a < 3; ++a) {\n            int b, c;\n            bool added_flag\
    \ = false;\n            for (int i = 0; i < 3; ++i) {\n                if (a !=\
    \ i) {\n                    if (!added_flag) {\n                        b = i;\n\
    \                        added_flag = true;\n                    } else\n    \
    \                    c = i;\n                }\n            }\n            lengths[a]\
    \ = distance(points[b], points[c]);\n        }\n\n        for (int a = 0; a <\
    \ 3; ++a) {\n            int b, c;\n            bool added_flag = false;\n   \
    \         for (int i = 0; i < 3; ++i) {\n                if (a != i) {\n     \
    \               if (!added_flag) {\n                        b = i;\n         \
    \               added_flag = true;\n                    } else\n             \
    \           c = i;\n                }\n            }\n            angles[a] =\
    \ acos((pow(lengths[b], 2) + pow(lengths[c], 2) - pow(lengths[a], 2)) / (2 * lengths[b]\
    \ * lengths[c]));\n        }\n\n        area = lengths[1] * lengths[2] * sin(angles[0])\
    \ / 2;\n    };\n    triangle(T length_a, T length_b, T length_c)\n        : lengths{length_a,\
    \ length_b, length_c} {\n        for (int a = 0; a < 3; ++a) {\n            int\
    \ b, c;\n            bool added_flag = false;\n            for (int i = 0; i <\
    \ 3; ++i) {\n                if (a != i) {\n                    if (!added_flag)\
    \ {\n                        b = i;\n                        added_flag = true;\n\
    \                    } else\n                        c = i;\n                }\n\
    \            }\n            angles[a] = acos((pow(lengths[b], 2) + pow(lengths[c],\
    \ 2) - pow(lengths[a], 2)) / (2 * lengths[b] * lengths[c]));\n        }\n\n  \
    \      points[0] = point(0, 0);\n        points[1] = point(0, lengths[1]);\n \
    \       points[2] = point(lengths[2] * cos(angles[0]), lengths[2] * sin(angles[0]));\n\
    \n        area = lengths[1] * lengths[2] * sin(angles[0]) / 2;\n    };\n};\n\n\
    }  // namespace BanetteGin\n\n\n#line 9 \"src/geometry/circle.hpp\"\n\nnamespace\
    \ BanetteGin {\n\ntemplate <class T>\nstruct circle {\n    point<T> p;\n    T\
    \ r;\n    circle(point<T> p_, T r_)\n        : p(p_), r(r_) {\n    }\n    circle(point<T>\
    \ p_, point<T> q_)\n        : p(p_), r(distance(p_, q_)) {\n    }\n    circle(point<T>\
    \ p_, point<T> q_, point<T> r_)\n        : p(constracter_circumcircle(triangle(p_,\
    \ q_, r_)).p), r(constracter_circumcircle(triangle(p_, q_, r_)).r) {\n    }\n\
    \    bool operator==(const circle& c) const noexcept {\n        return equal(this->p,\
    \ c.p) && equal(this->r, c.r);\n    }\n    bool operator!=(const circle& c) const\
    \ noexcept {\n        return !equal(this->p, c.p) || !equal(this->r, c.r);\n \
    \   }\n\nprivate:\n    circle<T> constracter_circumcircle(triangle<T> t) {\n \
    \       point ret = point(0.0L, 0.0L);\n        T denom = 0.0L;\n        for (int\
    \ i = 0; i < 3; ++i) {\n            ret += t.points[i] * sin(2 * t.angles[i]);\n\
    \            denom += sin(2 * t.angles[i]);\n        }\n        T r = t.lengths[0]\
    \ / sin(t.angles[0]) / 2;\n        return circle(ret / denom, r);\n    }\n};\n\
    \n}  // namespace BanetteGin\n\n\n#line 6 \"src/geometry/circumcircle.hpp\"\n\n\
    namespace BanetteGin {\n\ntemplate <class T>\ncircle<T> circumcircle(triangle<T>\
    \ t) {\n    point ret = point(T(0), T(0));\n    for (int i = 0; i < 3; ++i) {\n\
    \        T mlt = 0;\n        for (int j = 0; j < 3; ++j) {\n            if (i\
    \ == j)\n                mlt += -pow(t.lengths[j], T(2));\n            else\n\
    \                mlt += pow(t.lengths[j], T(2));\n        }\n        mlt *= pow(t.lengths[i],\
    \ T(2));\n        ret += t.points[i] * mlt;\n    }\n    T r = t.lengths[0] / sin(t.angles[0])\
    \ / T(2);\n    return circle(ret / (T(16) * pow(t.area, T(2))), r);\n}\n\n}  //\
    \ namespace BanetteGin\n\n\n"
  code: "#ifndef BANETTEGIN_CIRCUMCIRCLE_HPP_INCLUDED\n#define BANETTEGIN_CIRCUMCIRCLE_HPP_INCLUDED\n\
    \n#include \"circle.hpp\"\n#include \"triangle.hpp\"\n\nnamespace BanetteGin {\n\
    \ntemplate <class T>\ncircle<T> circumcircle(triangle<T> t) {\n    point ret =\
    \ point(T(0), T(0));\n    for (int i = 0; i < 3; ++i) {\n        T mlt = 0;\n\
    \        for (int j = 0; j < 3; ++j) {\n            if (i == j)\n            \
    \    mlt += -pow(t.lengths[j], T(2));\n            else\n                mlt +=\
    \ pow(t.lengths[j], T(2));\n        }\n        mlt *= pow(t.lengths[i], T(2));\n\
    \        ret += t.points[i] * mlt;\n    }\n    T r = t.lengths[0] / sin(t.angles[0])\
    \ / T(2);\n    return circle(ret / (T(16) * pow(t.area, T(2))), r);\n}\n\n}  //\
    \ namespace BanetteGin\n\n#endif"
  dependsOn:
  - src/geometry/circle.hpp
  - src/basic/comparison.hpp
  - src/basic/equal.hpp
  - src/basic/sign.hpp
  - src/basic/constant.hpp
  - src/basic/greater_equal.hpp
  - src/basic/greater_than.hpp
  - src/basic/less_equal.hpp
  - src/basic/less_than.hpp
  - src/geometry/distance.hpp
  - src/geometry/line.hpp
  - src/geometry/point.hpp
  - src/geometry/segment.hpp
  - src/geometry/triangle.hpp
  - src/basic/equal.hpp
  isVerificationFile: false
  path: src/geometry/circumcircle.hpp
  requiredBy:
  - src/geometry/geometry.hpp
  - src/all.hpp
  timestamp: '2023-09-23 20:16:43+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aizu_online_judge/Library/CGL/7_C.test.cpp
documentation_of: src/geometry/circumcircle.hpp
layout: document
redirect_from:
- /library/src/geometry/circumcircle.hpp
- /library/src/geometry/circumcircle.hpp.html
title: src/geometry/circumcircle.hpp
---

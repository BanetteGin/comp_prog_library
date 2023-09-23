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
  - icon: ':warning:'
    path: src/geometry/centroid.hpp
    title: src/geometry/centroid.hpp
  - icon: ':heavy_check_mark:'
    path: src/geometry/circle.hpp
    title: src/geometry/circle.hpp
  - icon: ':heavy_check_mark:'
    path: src/geometry/circumcircle.hpp
    title: src/geometry/circumcircle.hpp
  - icon: ':warning:'
    path: src/geometry/concyclic.hpp
    title: src/geometry/concyclic.hpp
  - icon: ':warning:'
    path: src/geometry/degree_to_radian.hpp
    title: src/geometry/degree_to_radian.hpp
  - icon: ':heavy_check_mark:'
    path: src/geometry/distance.hpp
    title: src/geometry/distance.hpp
  - icon: ':warning:'
    path: src/geometry/excircle.hpp
    title: src/geometry/excircle.hpp
  - icon: ':heavy_check_mark:'
    path: src/geometry/incircle.hpp
    title: src/geometry/incircle.hpp
  - icon: ':warning:'
    path: src/geometry/intersect.hpp
    title: src/geometry/intersect.hpp
  - icon: ':heavy_check_mark:'
    path: src/geometry/line.hpp
    title: src/geometry/line.hpp
  - icon: ':warning:'
    path: src/geometry/normal_vector.hpp
    title: src/geometry/normal_vector.hpp
  - icon: ':warning:'
    path: src/geometry/orthocenter.hpp
    title: src/geometry/orthocenter.hpp
  - icon: ':warning:'
    path: src/geometry/orthogonal_check.hpp
    title: src/geometry/orthogonal_check.hpp
  - icon: ':warning:'
    path: src/geometry/parallel_check.hpp
    title: src/geometry/parallel_check.hpp
  - icon: ':heavy_check_mark:'
    path: src/geometry/point.hpp
    title: src/geometry/point.hpp
  - icon: ':warning:'
    path: src/geometry/projection.hpp
    title: src/geometry/projection.hpp
  - icon: ':warning:'
    path: src/geometry/radian_to_degree.hpp
    title: src/geometry/radian_to_degree.hpp
  - icon: ':warning:'
    path: src/geometry/rotate.hpp
    title: src/geometry/rotate.hpp
  - icon: ':heavy_check_mark:'
    path: src/geometry/segment.hpp
    title: src/geometry/segment.hpp
  - icon: ':heavy_check_mark:'
    path: src/geometry/triangle.hpp
    title: src/geometry/triangle.hpp
  - icon: ':warning:'
    path: src/geometry/unit_vector.hpp
    title: src/geometry/unit_vector.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/geometry/geometry.hpp\"\n\n\n\n#line 1 \"src/geometry/centroid.hpp\"\
    \n\n\n\n#line 1 \"src/geometry/triangle.hpp\"\n\n\n\n#line 1 \"src/basic/equal.hpp\"\
    \n\n\n\n#line 1 \"src/basic/sign.hpp\"\n\n\n\n#line 1 \"src/basic/constant.hpp\"\
    \n\n\n\nnamespace BanetteGin {\n\nconst long double EPS = 1e-15L;\nconst long\
    \ long int LINF = 1001001001001001001LL;\nconst long double PI = acos(-1.0L);\n\
    const long double GOLDEN_RATIO = (1 + sqrt(5)) / 2;\n\n}  // namespace BanetteGin\n\
    \n\n#line 5 \"src/basic/sign.hpp\"\n\nnamespace BanetteGin {\n\ntemplate <class\
    \ T>\nint sign(const T& x) {\n    return (x < -EPS ? -1 : (x < EPS ? 0 : 1));\n\
    }\n\n}  // namespace BanetteGin\n\n\n#line 5 \"src/basic/equal.hpp\"\n\nnamespace\
    \ BanetteGin {\n\ntemplate <class T>\nbool equal(const T &a, const T &b) {\n \
    \   return (sign(a - b) == 0);\n}\n\n}  // namespace BanetteGin\n\n\n#line 1 \"\
    src/geometry/distance.hpp\"\n\n\n\n#line 1 \"src/geometry/line.hpp\"\n\n\n\n#line\
    \ 1 \"src/basic/comparison.hpp\"\n\n\n\n#line 1 \"src/basic/greater_equal.hpp\"\
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
    \ !equal(this->x, p.x) || !equal(this->y, p.y);\n    }\n\n    friend T dot(const\
    \ point& p, const point& q) noexcept {\n        return p.x * q.x + p.y * q.y;\n\
    \    }\n    friend T cross(const point& p, const point& q) noexcept {\n      \
    \  return p.x * q.y - p.y * q.x;\n    }\n    friend T norm(const point& p) {\n\
    \        return sqrt(p.x * p.x + p.y * p.y);\n    }\n    friend T arg(const point&\
    \ p) {\n        return atan2(p.y, p.x);\n    }\n};\n\n}  // namespace BanetteGin\n\
    \n\n#line 6 \"src/geometry/line.hpp\"\n\nnamespace BanetteGin {\n\ntemplate <class\
    \ T>\nstruct line {\n    T a, b, c;\n    point<T> p, q;\n    line(point<T> p_,\
    \ point<T> q_)\n        : a(q_.y - p_.y), b(p_.x - q_.x), c(-p_.x * q_.y + q_.x\
    \ * p_.y) {\n        normalize();\n    }\n    line(point<T> p_, T m_)\n      \
    \  : a(m_), b(-1), c(p_.y - m_ * p_.x) {\n        normalize();\n    }\n    line(T\
    \ a_, T b_, T c_)\n        : a(a_), b(b_), c(c_) {\n        normalize();\n   \
    \ }\n    void normalize() {\n        if (!equal(a, 0)) {\n            b /= a;\n\
    \            c /= a;\n            a = 1;\n        } else if (!equal(b, 0)) {\n\
    \            b = 1;\n            c /= b;\n        } else {\n            assert(c\
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
    \ t) {\n}\n\n}  // namespace BanetteGin\n\n\n#line 8 \"src/geometry/triangle.hpp\"\
    \n\nnamespace BanetteGin {\n\ntemplate <class T>\nstruct triangle {\n    point<T>\
    \ points[3];\n    T lengths[3];\n    T angles[3];\n    T area;\n    triangle(point<T>\
    \ point_a, point<T> point_b, point<T> point_c)\n        : points{point_a, point_b,\
    \ point_c} {\n        for (int a = 0; a < 3; ++a) {\n            int b, c;\n \
    \           bool added_flag = false;\n            for (int i = 0; i < 3; ++i)\
    \ {\n                if (a != i) {\n                    if (!added_flag) {\n \
    \                       b = i;\n                        added_flag = true;\n \
    \                   } else\n                        c = i;\n                }\n\
    \            }\n            lengths[a] = distance(points[b], points[c]);\n   \
    \     }\n\n        for (int a = 0; a < 3; ++a) {\n            int b, c;\n    \
    \        bool added_flag = false;\n            for (int i = 0; i < 3; ++i) {\n\
    \                if (a != i) {\n                    if (!added_flag) {\n     \
    \                   b = i;\n                        added_flag = true;\n     \
    \               } else\n                        c = i;\n                }\n  \
    \          }\n            angles[a] = acos((pow(lengths[b], 2) + pow(lengths[c],\
    \ 2) - pow(lengths[a], 2)) / (2 * lengths[b] * lengths[c]));\n        }\n\n  \
    \      area = lengths[1] * lengths[2] * sin(angles[0]) / 2;\n    };\n    triangle(T\
    \ length_a, T length_b, T length_c)\n        : lengths{length_a, length_b, length_c}\
    \ {\n        for (int a = 0; a < 3; ++a) {\n            int b, c;\n          \
    \  bool added_flag = false;\n            for (int i = 0; i < 3; ++i) {\n     \
    \           if (a != i) {\n                    if (!added_flag) {\n          \
    \              b = i;\n                        added_flag = true;\n          \
    \          } else\n                        c = i;\n                }\n       \
    \     }\n            angles[a] = acos((pow(lengths[b], 2) + pow(lengths[c], 2)\
    \ - pow(lengths[a], 2)) / (2 * lengths[b] * lengths[c]));\n        }\n\n     \
    \   points[0] = point(0, 0);\n        points[1] = point(0, lengths[1]);\n    \
    \    points[2] = point(lengths[2] * cos(angles[0]), lengths[2] * sin(angles[0]));\n\
    \n        area = lengths[1] * lengths[2] * sin(angles[0]) / 2;\n    };\n};\n\n\
    }  // namespace BanetteGin\n\n\n#line 5 \"src/geometry/centroid.hpp\"\n\nnamespace\
    \ BanetteGin {\n\ntemplate <class T>\npoint<T> centroid(triangle<T> t) {\n   \
    \ return (t.points[0] + t.points[1] + t.points[2]) / 3;\n}\n\n}  // namespace\
    \ BanetteGin\n\n\n#line 1 \"src/geometry/circle.hpp\"\n\n\n\n#line 9 \"src/geometry/circle.hpp\"\
    \n\nnamespace BanetteGin {\n\ntemplate <class T>\nstruct circle {\n    point<T>\
    \ p;\n    T r;\n    circle(point<T> p_, T r_)\n        : p(p_), r(r_) {\n    }\n\
    \    circle(point<T> p_, point<T> q_)\n        : p(p_), r(distance(p_, q_)) {\n\
    \    }\n    circle(point<T> p_, point<T> q_, point<T> r_)\n        : p(constracter_circumcircle(triangle(p_,\
    \ q_, r_)).p), r(constracter_circumcircle(triangle(p_, q_, r_)).r) {\n    }\n\
    \    bool operator==(const circle& c) const noexcept {\n        return equal(this->p,\
    \ c.p) && equal(this->r, c.r);\n    }\n    bool operator!=(const circle& c) const\
    \ noexcept {\n        return !equal(this->p, c.p) || !equal(this->r, c.r);\n \
    \   }\n\nprivate:\n    circle<T> constracter_circumcircle(triangle<T> t) {\n \
    \       point ret = point(0.0L, 0.0L);\n        T denom = 0.0L;\n        for (int\
    \ i = 0; i < 3; ++i) {\n            ret += t.points[i] * sin(2 * t.angles[i]);\n\
    \            denom += sin(2 * t.angles[i]);\n        }\n        T r = t.lengths[0]\
    \ / sin(t.angles[0]) / 2;\n        return circle(ret / denom, r);\n    }\n};\n\
    \n}  // namespace BanetteGin\n\n\n#line 1 \"src/geometry/circumcircle.hpp\"\n\n\
    \n\n#line 6 \"src/geometry/circumcircle.hpp\"\n\nnamespace BanetteGin {\n\ntemplate\
    \ <class T>\ncircle<T> circumcircle(triangle<T> t) {\n    point ret = point(T(0),\
    \ T(0));\n    for (int i = 0; i < 3; ++i) {\n        T mlt = 0;\n        for (int\
    \ j = 0; j < 3; ++j) {\n            if (i == j)\n                mlt += -pow(t.lengths[j],\
    \ T(2));\n            else\n                mlt += pow(t.lengths[j], T(2));\n\
    \        }\n        mlt *= pow(t.lengths[i], T(2));\n        ret += t.points[i]\
    \ * mlt;\n    }\n    T r = t.lengths[0] / sin(t.angles[0]) / T(2);\n    return\
    \ circle(ret / (T(16) * pow(t.area, T(2))), r);\n}\n\n}  // namespace BanetteGin\n\
    \n\n#line 1 \"src/geometry/concyclic.hpp\"\n\n\n\n#line 5 \"src/geometry/concyclic.hpp\"\
    \n\nnamespace BanetteGin {\n\ntemplate <class T>\nbool concyclic(std::vector<T>\
    \ points) {\n    assert(points.size() >= 3);\n    if (points.size() == 3) return\
    \ true;\n    T theta = triangle(points[0], points[1], points[2]).angles[2];\n\
    \    for (long long int i = 3; i < points.size(); ++i) {\n        if (triangle(points[0],\
    \ points[1], points[i]).angles[2] != theta) return false;\n    }\n    return true;\n\
    }\n\n}  // namespace BanetteGin\n\n\n#line 1 \"src/geometry/degree_to_radian.hpp\"\
    \n\n\n\n#line 5 \"src/geometry/degree_to_radian.hpp\"\n\nnamespace BanetteGin\
    \ {\n\ntemplate <class T>\nT degree_to_radian(T theta) {\n    return theta / 180\
    \ * PI;\n}\n\n}  // namespace BanetteGin\n\n\n#line 1 \"src/geometry/excircle.hpp\"\
    \n\n\n\n#line 6 \"src/geometry/excircle.hpp\"\n\nnamespace BanetteGin {\n\ntemplate\
    \ <class T>\ncircle<T> excircle(triangle<T> t, int option = 0) {\n    assert(0\
    \ <= option && option <= 2);\n    point ret = point(T(0), T(0));\n    T denom\
    \ = T(0);\n    for (int i = 0; i < 3; ++i) {\n        T sgn = 1.0;\n        if\
    \ (i == option) sgn = -1.0;\n        ret += t.points[i] * sgn * t.lengths[i];\n\
    \        denom += sgn * t.lengths[i];\n    }\n\n    T r = t.area * T(2) / denom;\n\
    \    return circle(ret / denom, r);\n}\n\n}  // namespace BanetteGin\n\n\n#line\
    \ 1 \"src/geometry/incircle.hpp\"\n\n\n\n#line 6 \"src/geometry/incircle.hpp\"\
    \n\nnamespace BanetteGin {\n\ntemplate <class T>\ncircle<T> incircle(triangle<T>\
    \ t) {\n    point ret = point(T(0), T(0));\n    T denom = T(0);\n    for (int\
    \ i = 0; i < 3; ++i) {\n        ret += t.points[i] * t.lengths[i];\n        denom\
    \ += t.lengths[i];\n    }\n    T r = t.area * T(2) / denom;\n    return circle(ret\
    \ / denom, r);\n}\n\n}  // namespace BanetteGin\n\n\n#line 1 \"src/geometry/intersect.hpp\"\
    \n\n\n\n#line 7 \"src/geometry/intersect.hpp\"\n\nnamespace BanetteGin {\n\ntemplate\
    \ <class T>\nint intersect(const line<T>& l, const circle<T>& c) {\n    T d =\
    \ distance(c.p, l);\n    if (greater_than(d, c.r)) {\n        return 2;\n    }\n\
    \    if (equal(d, c.r)) {\n        return 1;\n    }\n    return 0;\n}\n\ntemplate\
    \ <class T>\nint intersect(const circle<T>& c1, const circle<T>& c2) {\n    T\
    \ d = distance(c1.p, c2.p);\n    if (greater_than(d, c1.r + c2.r)) {\n       \
    \ return 4;\n    }\n    if (greater_than(d, c1.r + c2.r)) {\n        return 3;\n\
    \    }\n    if (equal(d, abs(c1.r - c2.r))) {\n        return 1;\n    }\n    if\
    \ (less_than(d, abs(c1.r - c2.r))) {\n        return 0;\n    }\n    return 2;\n\
    }\n\n}  // namespace BanetteGin\n\n\n#line 1 \"src/geometry/normal_vector.hpp\"\
    \n\n\n\n#line 5 \"src/geometry/normal_vector.hpp\"\n\nnamespace BanetteGin {\n\
    \ntemplate <class T>\npoint<T> normal_vector(const point<T>& p) {\n    return\
    \ p * point(0, 1);\n}\n\n}  // namespace BanetteGin\n\n\n#line 1 \"src/geometry/orthocenter.hpp\"\
    \n\n\n\n#line 5 \"src/geometry/orthocenter.hpp\"\n\nnamespace BanetteGin {\n\n\
    template <class T>\npoint<T> orthocenter(triangle<T> t) {\n    point ret = point(0.0L,\
    \ 0.0L);\n    T denom = 0.0L;\n    for (int i = 0; i < 3; ++i) {\n        ret\
    \ += t.points[i] * tan(t.angles[i]);\n        denom += tan(t.angles[i]);\n   \
    \ }\n    return ret / denom;\n}\n\n}  // namespace BanetteGin\n\n\n#line 1 \"\
    src/geometry/orthogonal_check.hpp\"\n\n\n\n#line 6 \"src/geometry/orthogonal_check.hpp\"\
    \n\nnamespace BanetteGin {\n\ntemplate <class T>\nbool orthogonal_check(const\
    \ line<T>& l, const line<T>& m) {\n    return equal(l.a * l.b + m.a * m.b, 0);\n\
    }\n\n}  // namespace BanetteGin\n\n\n#line 1 \"src/geometry/parallel_check.hpp\"\
    \n\n\n\n#line 6 \"src/geometry/parallel_check.hpp\"\n\nnamespace BanetteGin {\n\
    \ntemplate <class T>\nbool parallel_check(const line<T>& l, const line<T>& m)\
    \ {\n    return equal(l.a * m.b - l.b * m.a, 0);\n}\n\n}  // namespace BanetteGin\n\
    \n\n#line 1 \"src/geometry/projection.hpp\"\n\n\n\n#line 6 \"src/geometry/projection.hpp\"\
    \n\nnamespace BanetteGin {\n\ntemplate <class T>\npoint<T> projection(const point<T>\
    \ p, const line<T>& l) {\n}\n\n}  // namespace BanetteGin\n\n\n#line 1 \"src/geometry/radian_to_degree.hpp\"\
    \n\n\n\n#line 5 \"src/geometry/radian_to_degree.hpp\"\n\nnamespace BanetteGin\
    \ {\n\ntemplate <class T>\nT radian_to_degree(T theta) {\n    return theta / PI\
    \ * 180;\n}\n\n}  // namespace BanetteGin\n\n\n#line 1 \"src/geometry/rotate.hpp\"\
    \n\n\n\n#line 5 \"src/geometry/rotate.hpp\"\n\nnamespace BanetteGin {\n\ntemplate\
    \ <class T>\npoint<T> rotate(const point<T>& p, const T& theta) {\n    return\
    \ point<T>(cos(theta) * p.x - sin(theta) * p.y, sin(theta) * p.x + cos(theta)\
    \ * p.y);\n}\n\n}  // namespace BanetteGin\n\n\n#line 1 \"src/geometry/unit_vector.hpp\"\
    \n\n\n\n#line 5 \"src/geometry/unit_vector.hpp\"\n\nnamespace BanetteGin {\n\n\
    template <class T>\npoint<T> unit_vector(const point<T>& p) {\n    return p /\
    \ norm(p);\n}\n\n}  // namespace BanetteGin\n\n\n#line 25 \"src/geometry/geometry.hpp\"\
    \n\n\n"
  code: '#ifndef BANETTEGIN_GEOMETRY_HPP_INCLUDED

    #define BANETTEGIN_GEOMETRY_HPP_INCLUDED


    #include "centroid.hpp"

    #include "circle.hpp"

    #include "circumcircle.hpp"

    #include "concyclic.hpp"

    #include "degree_to_radian.hpp"

    #include "distance.hpp"

    #include "excircle.hpp"

    #include "incircle.hpp"

    #include "intersect.hpp"

    #include "line.hpp"

    #include "normal_vector.hpp"

    #include "orthocenter.hpp"

    #include "orthogonal_check.hpp"

    #include "parallel_check.hpp"

    #include "point.hpp"

    #include "projection.hpp"

    #include "radian_to_degree.hpp"

    #include "rotate.hpp"

    #include "segment.hpp"

    #include "triangle.hpp"

    #include "unit_vector.hpp"


    #endif'
  dependsOn:
  - src/geometry/centroid.hpp
  - src/geometry/triangle.hpp
  - src/basic/equal.hpp
  - src/basic/sign.hpp
  - src/basic/constant.hpp
  - src/geometry/distance.hpp
  - src/geometry/line.hpp
  - src/basic/comparison.hpp
  - src/basic/equal.hpp
  - src/basic/greater_equal.hpp
  - src/basic/greater_than.hpp
  - src/basic/less_equal.hpp
  - src/basic/less_than.hpp
  - src/geometry/point.hpp
  - src/geometry/segment.hpp
  - src/geometry/circle.hpp
  - src/geometry/circumcircle.hpp
  - src/geometry/concyclic.hpp
  - src/geometry/degree_to_radian.hpp
  - src/basic/constant.hpp
  - src/geometry/excircle.hpp
  - src/geometry/incircle.hpp
  - src/geometry/intersect.hpp
  - src/geometry/normal_vector.hpp
  - src/geometry/orthocenter.hpp
  - src/geometry/orthogonal_check.hpp
  - src/geometry/parallel_check.hpp
  - src/geometry/projection.hpp
  - src/geometry/radian_to_degree.hpp
  - src/geometry/rotate.hpp
  - src/geometry/unit_vector.hpp
  isVerificationFile: false
  path: src/geometry/geometry.hpp
  requiredBy: []
  timestamp: '2023-09-23 20:16:43+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/geometry/geometry.hpp
layout: document
redirect_from:
- /library/src/geometry/geometry.hpp
- /library/src/geometry/geometry.hpp.html
title: src/geometry/geometry.hpp
---

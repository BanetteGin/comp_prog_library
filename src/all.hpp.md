---
data:
  _extendedDependsOn:
  - icon: ':warning:'
    path: src/basic/chmax.hpp
    title: src/basic/chmax.hpp
  - icon: ':warning:'
    path: src/basic/chmin.hpp
    title: src/basic/chmin.hpp
  - icon: ':warning:'
    path: src/basic/constant.hpp
    title: src/basic/constant.hpp
  - icon: ':warning:'
    path: src/basic/constant.hpp
    title: src/basic/constant.hpp
  - icon: ':warning:'
    path: src/basic/constant.hpp
    title: src/basic/constant.hpp
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
    path: src/basic/sign.hpp
    title: src/basic/sign.hpp
  - icon: ':warning:'
    path: src/combinatorics/combination.hpp
    title: src/combinatorics/combination.hpp
  - icon: ':warning:'
    path: src/combinatorics/homogenous_product.hpp
    title: src/combinatorics/homogenous_product.hpp
  - icon: ':warning:'
    path: src/combinatorics/permutation.hpp
    title: src/combinatorics/permutation.hpp
  - icon: ':warning:'
    path: src/data_structure/binary_indexed_tree.hpp
    title: src/data_structure/binary_indexed_tree.hpp
  - icon: ':warning:'
    path: src/data_structure/hold_ends.hpp
    title: src/data_structure/hold_ends.hpp
  - icon: ':warning:'
    path: src/data_structure/segment_tree.hpp
    title: src/data_structure/segment_tree.hpp
  - icon: ':heavy_check_mark:'
    path: src/data_structure/union_find.hpp
    title: src/data_structure/union_find.hpp
  - icon: ':warning:'
    path: src/geometry/circle.hpp
    title: src/geometry/circle.hpp
  - icon: ':warning:'
    path: src/geometry/distance_point_and_point.hpp
    title: src/geometry/distance_point_and_point.hpp
  - icon: ':warning:'
    path: src/geometry/line.hpp
    title: src/geometry/line.hpp
  - icon: ':warning:'
    path: src/geometry/line.hpp
    title: src/geometry/line.hpp
  - icon: ':warning:'
    path: src/geometry/parallel_check.hpp
    title: src/geometry/parallel_check.hpp
  - icon: ':warning:'
    path: src/geometry/point.hpp
    title: src/geometry/point.hpp
  - icon: ':warning:'
    path: src/geometry/point.hpp
    title: src/geometry/point.hpp
  - icon: ':warning:'
    path: src/geometry/rotate.hpp
    title: src/geometry/rotate.hpp
  - icon: ':warning:'
    path: src/geometry/segment.hpp
    title: src/geometry/segment.hpp
  - icon: ':warning:'
    path: src/geometry/segment.hpp
    title: src/geometry/segment.hpp
  - icon: ':warning:'
    path: src/geometry/triangle.hpp
    title: src/geometry/triangle.hpp
  - icon: ':warning:'
    path: src/geometry/triangle.hpp
    title: src/geometry/triangle.hpp
  - icon: ':warning:'
    path: src/graph/edge.hpp
    title: src/graph/edge.hpp
  - icon: ':warning:'
    path: src/graph/find_cycle_by_dfs.hpp
    title: src/graph/find_cycle_by_dfs.hpp
  - icon: ':warning:'
    path: src/graph/topological_sort.hpp
    title: src/graph/topological_sort.hpp
  - icon: ':warning:'
    path: src/matrix/matrix_product.hpp
    title: src/matrix/matrix_product.hpp
  - icon: ':warning:'
    path: src/number_theory/base_change.hpp
    title: src/number_theory/base_change.hpp
  - icon: ':warning:'
    path: src/number_theory/divisors.hpp
    title: src/number_theory/divisors.hpp
  - icon: ':warning:'
    path: src/number_theory/eratosthenes_sieve.hpp
    title: src/number_theory/eratosthenes_sieve.hpp
  - icon: ':warning:'
    path: src/number_theory/greatest_common_divisor.hpp
    title: src/number_theory/greatest_common_divisor.hpp
  - icon: ':warning:'
    path: src/number_theory/linear_sieve.hpp
    title: src/number_theory/linear_sieve.hpp
  - icon: ':warning:'
    path: src/number_theory/modint.hpp
    title: src/number_theory/modint.hpp
  - icon: ':warning:'
    path: src/number_theory/naive_sieve.hpp
    title: src/number_theory/naive_sieve.hpp
  - icon: ':warning:'
    path: src/number_theory/prime_check.hpp
    title: src/number_theory/prime_check.hpp
  - icon: ':warning:'
    path: src/number_theory/prime_check.hpp
    title: src/number_theory/prime_check.hpp
  - icon: ':warning:'
    path: src/number_theory/prime_factorization.hpp
    title: src/number_theory/prime_factorization.hpp
  - icon: ':warning:'
    path: src/number_theory/sundaram_sieve.hpp
    title: src/number_theory/sundaram_sieve.hpp
  - icon: ':warning:'
    path: src/string/clip_string.hpp
    title: src/string/clip_string.hpp
  - icon: ':warning:'
    path: src/string/rotate_string.hpp
    title: src/string/rotate_string.hpp
  - icon: ':warning:'
    path: src/string/run_length_encording.hpp
    title: src/string/run_length_encording.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/all.hpp\"\n\n\n\n#line 1 \"src/basic/chmax.hpp\"\n\n\
    \n\nnamespace BanetteGin {\n\ntemplate <class T>\nbool chmax(T& a, const T& b)\
    \ {\n    if (a < b) {\n        a = b;\n        return 1;\n    }\n    return 0;\n\
    }\n\n}  // namespace BanetteGin\n\n\n#line 1 \"src/basic/chmin.hpp\"\n\n\n\nnamespace\
    \ BanetteGin {\n\ntemplate <class T>\nbool chmin(T& a, const T& b) {\n    if (b\
    \ < a) {\n        a = b;\n        return 1;\n    }\n    return 0;\n}\n\n}  //\
    \ namespace BanetteGin\n\n\n#line 1 \"src/basic/constant.hpp\"\n\n\n\nnamespace\
    \ BanetteGin {\n\nconst long double EPS = 10e-12;\nconst long long int LINF =\
    \ 1001001001001001001LL;\nconst long double PI = acos(-1);\nconst long double\
    \ GOLDEN_RATIO = 2 * cos(PI / 5);\n\n}  // namespace BanetteGin\n\n\n#line 1 \"\
    src/basic/equal.hpp\"\n\n\n\n#line 1 \"src/basic/sign.hpp\"\n\n\n\n#line 5 \"\
    src/basic/sign.hpp\"\n\nnamespace BanetteGin {\n\ntemplate <class T>\nint sign(const\
    \ T& x) {\n    return (x < -EPS ? -1 : (x < EPS ? 0 : 1));\n}\n\n}  // namespace\
    \ BanetteGin\n\n\n#line 5 \"src/basic/equal.hpp\"\n\nnamespace BanetteGin {\n\n\
    template <class T>\nbool equal(const T &a, const T &b) {\n    return (sign(a -\
    \ b) == 0);\n}\n\n}  // namespace BanetteGin\n\n\n#line 1 \"src/combinatorics/combination.hpp\"\
    \n\n\n\nnamespace BanetteGin {\n\ntemplate <class T>\nT combination(T m, T n)\
    \ {\n    T ret = 1;\n    for (T i = m; i >= m - n + 1; --i) {\n        ret = ret\
    \ * i;\n    }\n    for (T i = m - n; i >= 1; --i) {\n        ret = ret / i;\n\
    \    }\n    return ret;\n}\n\n}  // namespace BanetteGin\n\n\n#line 1 \"src/combinatorics/homogenous_product.hpp\"\
    \n\n\n\nnamespace BanetteGin {\n\ntemplate <class T>\nT HomogenousProduct(T m,\
    \ T n) {\n    T ret = 1;\n    for (long long int i = m + n - 1; i >= m; --i) {\n\
    \        ret = ret * i;\n    }\n    for (long long int i = m - 1; i >= 1; --i)\
    \ {\n        ret = ret / i;\n    }\n    return ret;\n}\n\n}  // namespace BanetteGin\n\
    \n\n#line 1 \"src/combinatorics/permutation.hpp\"\n\n\n\nnamespace BanetteGin\
    \ {\n\ntemplate <class T>\nT permutation(T m, T n) {\n    T ret = 1;\n    for\
    \ (long long int i = m; i >= m - n + 1; --i) {\n        ret = ret * i;\n    }\n\
    \    return ret;\n}\n\n}  // namespace BanetteGin\n\n\n#line 1 \"src/data_structure/binary_indexed_tree.hpp\"\
    \n\n\n\n#include <vector>\n\nnamespace BanetteGin {\n\ntemplate <class T>\nstruct\
    \ binary_indexed_tree {\n    T n;\n    std::vector<T> tree;\n    const T ide =\
    \ 0;\n\n    binary_indexed_tree(T n_)\n        : n(n_) {\n        tree.resize(n,\
    \ ide);\n    }\n\n    T abel_operation(T& x, T& y) const noexcept {\n        return\
    \ x + y;\n    }\n\n    T sum(T& l, T& r) const noexcept {\n        return sum_sub(r)\
    \ - sum_sub(l - 1);\n    }\n\n    T sum_sub(T& a) const noexcept {\n        T\
    \ ret = 0;\n        for (; a >= 0; a = (a & (a + 1)) - 1) ret = abel_operation(ret,\
    \ tree[a]);\n        return ret;\n    }\n\n    void add(T& a, T& x) const noexcept\
    \ {\n        for (; a < n; a |= a + 1) tree[a] = abel_operation(tree[a], x);\n\
    \        return;\n    }\n};\n\n}  // namespace BanetteGin\n\n\n#line 1 \"src/data_structure/hold_ends.hpp\"\
    \n\n\n\n#line 5 \"src/data_structure/hold_ends.hpp\"\n\nnamespace BanetteGin {\n\
    \ntemplate <class T>\nstruct hold_ends {\n    T k;\n    std::multiset<T> high_end,\
    \ high_other;\n    std::multiset<T> low_end, low_other;\n    T all_sum = 0, high_sum\
    \ = 0, low_sum = 0;\n\n    hold_ends(T k_)\n        : k(k_) {\n    }\n    void\
    \ normalize() {\n        while (high_end.size() < k && !high_other.empty()) {\n\
    \            high_sum += *high_other.rbegin();\n            high_end.insert(*high_other.rbegin());\n\
    \            high_other.erase(high_other.find(*high_other.rbegin()));\n      \
    \  }\n        while (high_end.size() > k) {\n            high_sum -= *high_end.begin();\n\
    \            high_other.insert(*high_end.begin());\n            high_end.erase(high_end.begin());\n\
    \        }\n        while (low_end.size() < k && !low_other.empty()) {\n     \
    \       low_sum += *low_other.begin();\n            low_end.insert(*low_other.begin());\n\
    \            low_other.erase(low_other.begin());\n        }\n        while (low_end.size()\
    \ > k) {\n            low_sum -= *low_end.rbegin();\n            low_other.insert(*low_end.rbegin());\n\
    \            low_end.erase(low_end.find(*low_end.rbegin()));\n        }\n    \
    \    return;\n    }\n    void insert(T x) {\n        all_sum += x;\n        high_sum\
    \ += x;\n        low_sum += x;\n        high_end.insert(x);\n        low_end.insert(x);\n\
    \        normalize();\n    }\n    void erase(T x) {\n        all_sum -= x;\n \
    \       if (high_end.find(x) != high_end.end()) {\n            high_sum -= x;\n\
    \            high_end.erase(high_end.find(x));\n        } else if (high_other.find(x)\
    \ != high_other.end()) {\n            high_other.erase(high_other.find(x));\n\
    \        }\n        if (low_end.find(x) != low_end.end()) {\n            low_sum\
    \ -= x;\n            low_end.erase(low_end.find(x));\n        } else if (low_other.find(x)\
    \ != low_other.end()) {\n            low_other.erase(low_other.find(x));\n   \
    \     }\n        normalize();\n    }\n    std::vector<T> high_array() {\n    \
    \    std::vector<T> ret;\n        for (auto itr = high_end.begin(); itr != high_end.end();\
    \ itr++)\n            ret.emplace_back(*itr);\n        return ret;\n    }\n  \
    \  std::vector<T> low_array() {\n        std::vector<T> ret;\n        for (auto\
    \ itr = low_end.begin(); itr != low_end.end(); itr++)\n            ret.emplace_back(*itr);\n\
    \        return ret;\n    }\n};\n\n}  // namespace BanetteGin\n\n\n#line 1 \"\
    src/data_structure/segment_tree.hpp\"\n\n\n\n#line 5 \"src/data_structure/segment_tree.hpp\"\
    \n\n#line 7 \"src/data_structure/segment_tree.hpp\"\n\nnamespace BanetteGin {\n\
    \ntemplate <class T>\nstruct segment_tree {\n    T n;\n    std::vector<T> node;\n\
    \    T ide = LINF;\n\n    segment_tree(std::vector<T> a) {\n        n = 1;\n \
    \       while (n < a.size()) n *= 2;\n        node.resize(2 * n - 1, ide);\n \
    \       for (T i = 0; i < a.size(); i++) node[(n - 1) + i] = a[i];\n        for\
    \ (T i = n - 2; i >= 0; i--) {\n            node[i] = monoid_operation(node[i\
    \ * 2 + 1], node[i * 2 + 2]);\n        }\n    }\n\n    T monoid_operation(T& a,\
    \ T& b) {\n        return min(a, b);\n    }\n\n    void update(T& p, T& x) {\n\
    \        p += n - 1;\n        node[p] = x;\n        while (p > 0) {\n        \
    \    p = (p - 1) / 2;\n            node[p] = monoid_operation(node[2 * p + 1],\
    \ node[2 * p + 2]);\n        }\n    }\n\n    T find(T& l, T& r) {\n        return\
    \ find_sub(l, r, 0, 0, n);\n    }\n\n    T find_sub(T& a, T& b, T& now, T& l,\
    \ T& r) {\n        if (b <= l || r <= a) return ide;\n        if (a <= l && r\
    \ <= b) return node[now];\n        T nl = find_sub(a, b, 2 * now + 1, l, (l +\
    \ r) / 2);\n        T nr = find_sub(a, b, 2 * now + 2, (l + r) / 2, r);\n    \
    \    return monoid_operation(nl, nr);\n    }\n};\n\n}  // namespace BanetteGin\n\
    \n\n#line 1 \"src/data_structure/union_find.hpp\"\n\n\n\n#line 5 \"src/data_structure/union_find.hpp\"\
    \n\nnamespace BanetteGin {\n\ntemplate <class T>\nstruct union_find {\n    std::vector<T>\
    \ par, rk, sz;\n    union_find(T n)\n        : par(n, -1), rk(n, 0), sz(n, 1)\
    \ {\n    }\n    T root(T& v) {\n        if (par[v] == -1)\n            return\
    \ v;\n        else\n            return par[v] = root(par[v]);\n    }\n    bool\
    \ same(T& u, T& v) {\n        return root(u) == root(v);\n    }\n    bool unite(T&\
    \ u, T& v) {\n        T urt = root(u);\n        T vrt = root(v);\n        if (urt\
    \ == vrt) return false;\n        if (rk[urt] < rk[vrt]) swap(urt, vrt);\n    \
    \    par[vrt] = urt;\n        if (rk[urt] == rk[vrt]) rk[urt]++;\n        sz[urt]\
    \ += sz[vrt];\n        return true;\n    }\n    T size(T& v) {\n        return\
    \ sz[root(v)];\n    }\n};\n\n}  // namespace BanetteGin\n\n\n#line 1 \"src/geometry/circle.hpp\"\
    \n\n\n\n#line 1 \"src/geometry/distance_point_and_point.hpp\"\n\n\n\n#line 1 \"\
    src/geometry/point.hpp\"\n\n\n\n#include <complex>\n\n#line 7 \"src/geometry/point.hpp\"\
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
    \n}  // namespace BanetteGin\n\n\n#line 5 \"src/geometry/distance_point_and_point.hpp\"\
    \n\nnamespace BanetteGin {\n\ntemplate <class T>\nT distance_point_and_point(point<T>\
    \ p, point<T> q) {\n    return sqrt(pow(p.x - q.x, 2) + pow(p.y - q.y, 2));\n\
    }\n\n}  // namespace BanetteGin\n\n\n#line 1 \"src/geometry/segment.hpp\"\n\n\n\
    \n#line 6 \"src/geometry/segment.hpp\"\n\nnamespace BanetteGin {\n\ntemplate <class\
    \ T>\nstruct segment {\n    point<T> p, q;\n    T length;\n    segment(point<T>\
    \ p_, point<T> q_)\n        : p(p_), q(q_), length(distance_between_point_and_point(p,\
    \ q)) {\n    }\n};\n\n}  // namespace BanetteGin\n\n\n#line 1 \"src/geometry/triangle.hpp\"\
    \n\n\n\n#line 8 \"src/geometry/triangle.hpp\"\n\nnamespace BanetteGin {\n\ntemplate\
    \ <class T>\nstruct triangle {\n    point<T> point_a, point_b, point_c;\n    T\
    \ length_a, length_b, length_c;\n    T angle_a, angle_b, angle_c;\n    T area;\n\
    \    triangle(point<T> point_a_, point<T> point_b_, point<T> point_c_)\n     \
    \   : point_a(point_a_), point_b(point_b_), point_c(point_c_) {\n        length_a\
    \ = distance_point_and_point(point_b, point_c);\n        length_b = distance_point_and_point(point_c,\
    \ point_a);\n        length_c = distance_point_and_point(point_a, point_b);\n\
    \        angle_a = acos((pow(length_b, 2) + pow(length_c, 2) - pow(length_a, 2))\
    \ / (2 * length_b * length_c));\n        angle_b = acos((pow(length_c, 2) + pow(length_a,\
    \ 2) - pow(length_b, 2)) / (2 * length_c * length_a));\n        angle_c = acos((pow(length_a,\
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
    \ BanetteGin\n\n\n#line 1 \"src/geometry/line.hpp\"\n\n\n\n#line 6 \"src/geometry/line.hpp\"\
    \n\nnamespace BanetteGin {\n\ntemplate <class T>\nstruct line {\n    T a, b, c;\n\
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
    };\n\n}  // namespace BanetteGin\n\n\n#line 1 \"src/geometry/parallel_check.hpp\"\
    \n\n\n\n#line 6 \"src/geometry/parallel_check.hpp\"\n\nnamespace BanetteGin {\n\
    \ntemplate <class T>\nbool parallel_check(const line<T>& l, const line<T>& m)\
    \ {\n}\n\n}  // namespace BanetteGin\n\n\n#line 1 \"src/geometry/rotate.hpp\"\n\
    \n\n\n#line 5 \"src/geometry/rotate.hpp\"\n\nnamespace BanetteGin {\n\ntemplate\
    \ <class T>\npoint<T> rotate(const point<T>& p, const T& theta) {\n    return\
    \ point<T>(cos(theta) * p.x - sin(theta) * p.y, sin(theta) * p.x + cos(theta)\
    \ * p.y);\n}\n\n}  // namespace BanetteGin\n\n\n#line 1 \"src/graph/edge.hpp\"\
    \n\n\n\nnamespace BanetteGin {\n\ntemplate <class T>\nstruct edge {\n    T u,\
    \ v, c;\n    edge(T u_, T v_, T c_)\n        : u(u_), v(v_), c(c_) {\n    }\n\
    };\n\n}  // namespace BanetteGin\n\n\n#line 1 \"src/graph/find_cycle_by_dfs.hpp\"\
    \n\n\n\n#line 5 \"src/graph/find_cycle_by_dfs.hpp\"\n\nnamespace BanetteGin {\n\
    \ntemplate <class T>\nbool find_cycle_by_dfs(T v, const std::vector<std::vector<T>>\
    \ &g, std::vector<bool> &visited, std::vector<bool> &finished) {\n    visited[v]\
    \ = true;\n    for (T nv : g[v]) {\n        if (visited[nv]) continue;\n     \
    \   if (finished[nv]) continue;\n        if (visited[nv] && !finished[nv]) return\
    \ true;\n        if (find_cycle_by_dfs(nv, g, visited, finished)) return true;\n\
    \    }\n    finished[v] = true;\n    return false;\n}\n\n}  // namespace BanetteGin\n\
    \n\n#line 1 \"src/graph/topological_sort.hpp\"\n\n\n\n#line 5 \"src/graph/topological_sort.hpp\"\
    \n\nnamespace BanetteGin {\n\ntemplate <class T>\nstd::vector<T> topological_sort(const\
    \ std::vector<std::vector<T> >& g) {\n    std::vector<T> ret;\n    std::vector<T>\
    \ ind(g.size(), 0);\n    for (T i = 0; i < ind.size(); ++i) {\n        for (T\
    \ e : g[i]) ind[e]++;\n    }\n    std::queue<T> q;\n    for (T i = 0; i < ind.size();\
    \ ++i) {\n        if (ind[i] == 0) q.push(i);\n    }\n    while (!q.empty()) {\n\
    \        T nv = q.front();\n        ret.push_back(nv);\n        q.pop();\n   \
    \     for (T e : g[nv]) {\n            ind[e]--;\n            if (ind[e] == 0)\
    \ q.push(e);\n        }\n    }\n    return ret;\n}\n\n}  // namespace BanetteGin\n\
    \n\n#line 1 \"src/matrix/matrix_product.hpp\"\n\n\n\n#line 5 \"src/matrix/matrix_product.hpp\"\
    \n\nnamespace BanetteGin {\n\ntemplate <class T>\nstruct matrix_product {\n  \
    \  const T addide = 0;\n    const T mulide = 1;\n    std::vector<std::vector<T>\
    \ > a, b;\n    matrix_product(std::vector<std::vector<T> > a_, std::vector<std::vector<T>\
    \ > b_)\n        : a(a_), b(b_) {\n    }\n    T addition(T& x, T& y) const noexcept\
    \ {\n        return x + y;\n    }\n    T multiplication(T& x, T& y) const noexcept\
    \ {\n        return x * y;\n    }\n    std::vector<std::vector<T> > product()\
    \ const noexcept {\n        std::vector<std::vector<T> > c(a.size(), std::vector<T>(b[0].size(),\
    \ adide));\n        for (T i = 0; i < a.size(); ++i) {\n            for (T j =\
    \ 0; j < b[0].size(); ++j) {\n                for (T k = 0; k < b.size(); ++k)\
    \ {\n                    c[i][j] = addition(c[i][j], multiplication(a[i][k], b[k][j]));\n\
    \                }\n            }\n        }\n        return c;\n    }\n};\n\n\
    }  // namespace BanetteGin\n\n\n#line 1 \"src/number_theory/base_change.hpp\"\n\
    \n\n\n#include <string>\n\nnamespace BanetteGin {\n\ntemplate <class T>\nstd::string\
    \ base_change(std::string& num, T& m, T& n) {\n    reverse(num.begin(), num.end());\n\
    \    T p = 1;\n    T covnum = 0;\n    for (T i = 0; i < num.size(); ++i) {\n \
    \       covnum += (T)(num[i] - '0') * p;\n        p = p * m;\n    }\n    T max_np\
    \ = 1;\n    while (max_np <= covnum) {\n        max_np *= n;\n    }\n    string\
    \ ret = \"\";\n    while (max_np != 0) {\n        ret.push_back((covnum / max_np)\
    \ + '0');\n        covnum %= max_np;\n        max_np /= n;\n    }\n    return\
    \ ret;\n}\n\n}  // namespace BanetteGin\n\n\n#line 1 \"src/number_theory/divisors.hpp\"\
    \n\n\n\n#line 5 \"src/number_theory/divisors.hpp\"\n\nnamespace BanetteGin {\n\
    \ntemplate <class T>\nstd::vector<T> divisors(T& n) {\n    std::vector<T> ret;\n\
    \    for (T i = 1; i * i <= n; ++i) {\n        if (n % i == 0) {\n           \
    \ if (i == n / i) {\n                ret.emplace_back(i);\n            } else\
    \ {\n                ret.emplace_back(i);\n                ret.emplace_back(n\
    \ / i);\n            }\n        }\n    }\n    sort(ret.begin(), ret.end());\n\
    \    return ret;\n}\n\n}  // namespace BanetteGin\n\n\n#line 1 \"src/number_theory/eratosthenes_sieve.hpp\"\
    \n\n\n\n#line 5 \"src/number_theory/eratosthenes_sieve.hpp\"\n\nnamespace BanetteGin\
    \ {\n\ntemplate <class T>\nstd::vector<T> eratosthenes_sieve(T n) {\n    std::vector<bool>\
    \ ret(n + 1, true);\n    std::vector<T> prime_list;\n    ret[0] = ret[1] = false;\n\
    \    for (T i = 2; i * i <= n; ++i) {\n        if (!ret[i]) continue;\n      \
    \  for (T j = i * 2; j <= n; j += i) {\n            ret[j] = false;\n        }\n\
    \    }\n    for (T i = 2; i <= n; ++i) {\n        if (ret[i]) prime_list.emplace_back(i);\n\
    \    }\n    return prime_list;\n}\n\n}  // namespace BanetteGin\n\n\n#line 1 \"\
    src/number_theory/greatest_common_divisor.hpp\"\n\n\n\nnamespace BanetteGin {\n\
    \ntemplate <class T>\nT greatest_common_divisor(T a, T b) {\n    return b == 0\
    \ ? a : greatest_common_divisor(b, a % b);\n}\n\n}  // namespace BanetteGin\n\n\
    \n#line 1 \"src/number_theory/linear_sieve.hpp\"\n\n\n\n#line 5 \"src/number_theory/linear_sieve.hpp\"\
    \n\nnamespace BanetteGin {\n\ntemplate <class T>\nstd::vector<T> linear_sieve(T\
    \ n) {\n    std::vector<T> prime_list;\n    std::vector<T> lpf(n + 1, n + 1);\n\
    \    lpf[0] = 1;\n    lpf[1] = 1;\n    for (T i = 2; i <= n; ++i) {\n        if\
    \ (lpf[i] == n + 1) {\n            lpf[i] = i;\n            prime_list.emplace_back(i);\n\
    \        }\n        for (T j = 0; j < prime_list.size(); ++j) {\n            T\
    \ p = prime_list[j];\n            if (p * i > n || p > lpf[i]) break;\n      \
    \      lpf[p * i] = p;\n        }\n    }\n    return prime_list;\n}\n\n}  // namespace\
    \ BanetteGin\n\n\n#line 1 \"src/number_theory/modint.hpp\"\n\n\n\nnamespace BanetteGin\
    \ {\n\ntemplate <long long int MOD>\nstruct modint {\n    long long int val;\n\
    \    constexpr modint(long long int v = 0) noexcept\n        : val(v % MOD) {\n\
    \        if (val < 0) val += MOD;\n    }\n    constexpr long long int getmod()\
    \ {\n        return MOD;\n    }\n\n    constexpr modint operator-() const noexcept\
    \ {\n        return val ? MOD - val : 0;\n    }\n\n    constexpr modint operator+(const\
    \ modint& r) const noexcept {\n        return modint(*this) += r;\n    }\n   \
    \ constexpr modint operator-(const modint& r) const noexcept {\n        return\
    \ modint(*this) -= r;\n    }\n    constexpr modint operator*(const modint& r)\
    \ const noexcept {\n        return modint(*this) *= r;\n    }\n    constexpr modint\
    \ operator/(const modint& r) const noexcept {\n        return modint(*this) /=\
    \ r;\n    }\n\n    constexpr modint& operator+=(const modint& r) noexcept {\n\
    \        val += r.val;\n        if (val >= MOD) val -= MOD;\n        return *this;\n\
    \    }\n    constexpr modint& operator-=(const modint& r) noexcept {\n       \
    \ val -= r.val;\n        if (val < 0) val += MOD;\n        return *this;\n   \
    \ }\n    constexpr modint& operator*=(const modint& r) noexcept {\n        val\
    \ = val * r.val % MOD;\n        return *this;\n    }\n\n    constexpr modint&\
    \ operator++() noexcept {\n        val += 1;\n        if (val >= MOD) val -= MOD;\n\
    \        return *this;\n    }\n    constexpr modint& operator--() noexcept {\n\
    \        val -= 1;\n        if (val < 0) val += MOD;\n        return *this;\n\
    \    }\n\n    constexpr modint& operator/=(const modint& r) noexcept {\n     \
    \   long long int a = r.val, b = MOD, u = 1, v = 0;\n        while (b) {\n   \
    \         long long int t = a / b;\n            a -= t * b;\n            swap(a,\
    \ b);\n            u -= t * v;\n            swap(u, v);\n        }\n        val\
    \ = val * u % MOD;\n        if (val < 0) val += MOD;\n        return *this;\n\
    \    }\n\n    constexpr bool operator==(const modint& r) const noexcept {\n  \
    \      return this->val == r.val;\n    }\n    constexpr bool operator!=(const\
    \ modint& r) const noexcept {\n        return this->val != r.val;\n    }\n\n \
    \   friend constexpr ostream& operator<<(ostream& os, const modint<MOD>& x) noexcept\
    \ {\n        return os << x.val;\n    }\n\n    friend constexpr modint<MOD> modpow(const\
    \ modint<MOD>& a, long long int n) noexcept {\n        modint ret = 1;\n     \
    \   modint tmpa = a;\n        while (n > 0) {\n            if (n & 1) ret *= a;\n\
    \            tmpa = tmpa * tmpa;\n            n >>= 1;\n        }\n        return\
    \ ret;\n    }\n};\n\n}  // namespace BanetteGin\n\n\n#line 1 \"src/number_theory/naive_sieve.hpp\"\
    \n\n\n\n#line 5 \"src/number_theory/naive_sieve.hpp\"\n\n#line 1 \"src/number_theory/prime_check.hpp\"\
    \n\n\n\nnamespace BanetteGin {\n\ntemplate <class T>\nbool prime_check(T n) {\n\
    \    if (n < 2) return false;\n    if (n != 2 && n % 2 == 0) return false;\n \
    \   for (T i = 3; i * i <= n; i += 2)\n        if (n % i == 0) return false;\n\
    \    return true;\n}\n\n}  // namespace BanetteGin\n\n\n#line 7 \"src/number_theory/naive_sieve.hpp\"\
    \n\nnamespace BanetteGin {\n\ntemplate <class T>\nstd::vector<T> naive_sieve(T&\
    \ n) {\n    std::vector<T> prime_list;\n    for (T i = 2; i <= n; ++i) {\n   \
    \     if (prime_check(i)) prime_list.emplace_back(i);\n    }\n    return prime_list;\n\
    }\n\n}  // namespace BanetteGin\n\n\n#line 1 \"src/number_theory/prime_factorization.hpp\"\
    \n\n\n\n#line 5 \"src/number_theory/prime_factorization.hpp\"\n\nnamespace BanetteGin\
    \ {\n\ntemplate <class T>\nstd::vector<std::pair<T, T> > prime_factorization(T\
    \ n) {\n    std::vector<std::pair<T, T> > prime_list;\n    for (T i = 2; i * i\
    \ <= n; ++i) {\n        if (n % i == 0) {\n            ll e = 0;\n           \
    \ while (n % i == 0) {\n                n /= i;\n                e++;\n      \
    \      }\n            prime_list.emplace_back(make_pair(i, e));\n        }\n \
    \   }\n    if (n != 1) {\n        prime_list.emplace_back(make_pair(n, 1));\n\
    \    }\n    return prime_list;\n}\n\n}  // namespace BanetteGin\n\n\n#line 1 \"\
    src/number_theory/sundaram_sieve.hpp\"\n\n\n\n#line 5 \"src/number_theory/sundaram_sieve.hpp\"\
    \n\nnamespace BanetteGin {\n\ntemplate <class T>\nstd::vector<T> sundaram_sieve(T&\
    \ n) {\n    std::vector<bool> ret((n + 1) / 2, true);\n    std::vector<T> prime_list\
    \ = {2};\n    ret[0] = false;\n    T m = ((n + 1) / 2 - 2) / 3;\n    for (T a\
    \ = 1; a <= m; ++a) {\n        for (T b = 1; b <= a && a + b + 2 * a * b <= (n\
    \ + 1) / 2 - 1; ++b) {\n            ret[a + b + 2 * a * b] = false;\n        }\n\
    \    }\n    for (T i = 0; i < ret.size(); ++i) {\n        if (ret[i]) prime_list.emplace_back(i\
    \ * 2 + 1);\n    }\n    return prime_list;\n}\n\n}  // namespace BanetteGin\n\n\
    \n#line 1 \"src/string/clip_string.hpp\"\n\n\n\n#line 6 \"src/string/clip_string.hpp\"\
    \n\n#line 8 \"src/string/clip_string.hpp\"\n\nnamespace BanetteGin {\n\nstd::vector<std::string>\
    \ clip_string(std::vector<std::string>& s, char target) {\n    long long int lefx,\
    \ rigx, lefy, rigy;\n    lefx = lefy = LINF;\n    rigx = rigy = -LINF;\n    std::vector<std::string>\
    \ ret;\n    for (long long int i = 0; i < s.size(); ++i) {\n        for (long\
    \ long int j = 0; j < s[i].size(); ++j) {\n            if (s[i][j] == target)\
    \ {\n                lefx = std::min(lefx, i);\n                rigx = std::max(rigx,\
    \ i);\n            }\n        }\n    }\n    for (long long int i = 0; i < s[0].size();\
    \ ++i) {\n        for (long long int j = 0; j < s.size(); ++j) {\n           \
    \ if (s[j][i] == target) {\n                lefy = std::min(lefy, i);\n      \
    \          rigy = std::max(rigy, i);\n            }\n        }\n    }\n    for\
    \ (long long int i = lefx; i <= rigx; ++i) {\n        std::string t = \"\";\n\
    \        for (long long int j = lefy; j <= rigy; ++j) {\n            t.push_back(s[i][j]);\n\
    \        }\n        ret.emplace_back(t);\n    }\n    return ret;\n}\n\n}  // namespace\
    \ BanetteGin\n\n\n#line 1 \"src/string/rotate_string.hpp\"\n\n\n\n#line 6 \"src/string/rotate_string.hpp\"\
    \n\nnamespace BanetteGin {\n\nstd::vector<std::string> rotate_string(std::vector<std::string>\
    \ s) {\n    std::vector<std::string> ret;\n    for (long long int i = 0; i < s[0].size();\
    \ ++i) {\n        std::string t = \"\";\n        for (long long int j = 0; j <\
    \ s.size(); ++j) {\n            t.push_back(s[j][s[0].size() - 1 - i]);\n    \
    \    }\n        ret.emplace_back(t);\n    }\n    return ret;\n}\n\n}  // namespace\
    \ BanetteGin\n\n\n#line 1 \"src/string/run_length_encording.hpp\"\n\n\n\n#line\
    \ 6 \"src/string/run_length_encording.hpp\"\n\nnamespace BanetteGin {\n\nstd::vector<std::pair<char,\
    \ long long int> > run_length_encording(std::string s) {\n    std::vector<std::pair<char,\
    \ long long int> > ret;\n    for (long long int i = 0; i < s.size();) {\n    \
    \    long long int j = i + 1;\n        for (; j < s.size() && s[i] == s[j]; j++)\
    \ {\n        }\n        ret.emplace_back(std::make_pair(s[i], j - i));\n     \
    \   i = j;\n    }\n    return ret;\n}\n\n}  // namespace BanetteGin\n\n\n#line\
    \ 39 \"src/all.hpp\"\n\n\n"
  code: '#ifndef BANETTEGIN_ALL_HPP_INCLUDED

    #define BANETTEGIN_ALL_HPP_INCLUDED


    #include "basic/chmax.hpp"

    #include "basic/chmin.hpp"

    #include "basic/constant.hpp"

    #include "basic/equal.hpp"

    #include "combinatorics/combination.hpp"

    #include "combinatorics/homogenous_product.hpp"

    #include "combinatorics/permutation.hpp"

    #include "data_structure/binary_indexed_tree.hpp"

    #include "data_structure/hold_ends.hpp"

    #include "data_structure/segment_tree.hpp"

    #include "data_structure/union_find.hpp"

    #include "geometry/circle.hpp"

    #include "geometry/line.hpp"

    #include "geometry/parallel_check.hpp"

    #include "geometry/point.hpp"

    #include "geometry/rotate.hpp"

    #include "geometry/segment.hpp"

    #include "geometry/triangle.hpp"

    #include "graph/edge.hpp"

    #include "graph/find_cycle_by_dfs.hpp"

    #include "graph/topological_sort.hpp"

    #include "matrix/matrix_product.hpp"

    #include "number_theory/base_change.hpp"

    #include "number_theory/divisors.hpp"

    #include "number_theory/eratosthenes_sieve.hpp"

    #include "number_theory/greatest_common_divisor.hpp"

    #include "number_theory/linear_sieve.hpp"

    #include "number_theory/modint.hpp"

    #include "number_theory/naive_sieve.hpp"

    #include "number_theory/prime_check.hpp"

    #include "number_theory/prime_factorization.hpp"

    #include "number_theory/sundaram_sieve.hpp"

    #include "string/clip_string.hpp"

    #include "string/rotate_string.hpp"

    #include "string/run_length_encording.hpp"


    #endif'
  dependsOn:
  - src/basic/chmax.hpp
  - src/basic/chmin.hpp
  - src/basic/constant.hpp
  - src/basic/equal.hpp
  - src/basic/sign.hpp
  - src/basic/constant.hpp
  - src/combinatorics/combination.hpp
  - src/combinatorics/homogenous_product.hpp
  - src/combinatorics/permutation.hpp
  - src/data_structure/binary_indexed_tree.hpp
  - src/data_structure/hold_ends.hpp
  - src/data_structure/segment_tree.hpp
  - src/basic/constant.hpp
  - src/data_structure/union_find.hpp
  - src/geometry/circle.hpp
  - src/basic/equal.hpp
  - src/geometry/distance_point_and_point.hpp
  - src/geometry/point.hpp
  - src/geometry/segment.hpp
  - src/geometry/triangle.hpp
  - src/geometry/line.hpp
  - src/geometry/parallel_check.hpp
  - src/geometry/line.hpp
  - src/geometry/point.hpp
  - src/geometry/rotate.hpp
  - src/geometry/segment.hpp
  - src/geometry/triangle.hpp
  - src/graph/edge.hpp
  - src/graph/find_cycle_by_dfs.hpp
  - src/graph/topological_sort.hpp
  - src/matrix/matrix_product.hpp
  - src/number_theory/base_change.hpp
  - src/number_theory/divisors.hpp
  - src/number_theory/eratosthenes_sieve.hpp
  - src/number_theory/greatest_common_divisor.hpp
  - src/number_theory/linear_sieve.hpp
  - src/number_theory/modint.hpp
  - src/number_theory/naive_sieve.hpp
  - src/number_theory/prime_check.hpp
  - src/number_theory/prime_check.hpp
  - src/number_theory/prime_factorization.hpp
  - src/number_theory/sundaram_sieve.hpp
  - src/string/clip_string.hpp
  - src/basic/constant.hpp
  - src/string/rotate_string.hpp
  - src/string/run_length_encording.hpp
  isVerificationFile: false
  path: src/all.hpp
  requiredBy: []
  timestamp: '2023-08-22 02:24:08+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/all.hpp
layout: document
redirect_from:
- /library/src/all.hpp
- /library/src/all.hpp.html
title: src/all.hpp
---

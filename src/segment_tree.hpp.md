---
data:
  _extendedDependsOn:
  - icon: ':warning:'
    path: src/constant.hpp
    title: src/constant.hpp
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
  bundledCode: "#line 1 \"src/segment_tree.hpp\"\n\n\n\n#include <vector>\n\n#line\
    \ 1 \"src/constant.hpp\"\n\n\n\nnamespace BanetteGin {\n\nconst long double EPS\
    \ = 10e-12;\nconst long long int LINF = 1001001001001001001LL;\nconst long double\
    \ PI = acos(-1);\n\n}  // namespace BanetteGin\n\n\n#line 7 \"src/segment_tree.hpp\"\
    \n\nnamespace BanetteGin {\n\ntemplate <class T>\nstruct segment_tree {\n    T\
    \ n;\n    std::vector<T> node;\n    T ide = LINF;\n\n    segment_tree(std::vector<T>\
    \ a) {\n        n = 1;\n        while (n < a.size()) n *= 2;\n        node.resize(2\
    \ * n - 1, ide);\n        for (T i = 0; i < a.size(); i++) node[(n - 1) + i] =\
    \ a[i];\n        for (T i = n - 2; i >= 0; i--) {\n            node[i] = monoid_operation(node[i\
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
    \n\n"
  code: "#ifndef BANETTEGIN_SEGMENT_TREE_HPP_INCLUDED\n#define BANETTEGIN_SEGMENT_TREE_HPP_INCLUDED\n\
    \n#include <vector>\n\n#include \"constant.hpp\"\n\nnamespace BanetteGin {\n\n\
    template <class T>\nstruct segment_tree {\n    T n;\n    std::vector<T> node;\n\
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
    \n#endif"
  dependsOn:
  - src/constant.hpp
  isVerificationFile: false
  path: src/segment_tree.hpp
  requiredBy:
  - src/all.hpp
  timestamp: '2023-08-07 22:07:44+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/segment_tree.hpp
layout: document
redirect_from:
- /library/src/segment_tree.hpp
- /library/src/segment_tree.hpp.html
title: src/segment_tree.hpp
---

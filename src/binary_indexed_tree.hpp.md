---
data:
  _extendedDependsOn: []
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
  bundledCode: "#line 1 \"src/binary_indexed_tree.hpp\"\n\n\n\n#include <vector>\n\
    \nnamespace BanetteGin {\n\ntemplate <class T>\nstruct binary_indexed_tree {\n\
    \    T n;\n    std::vector<T> tree;\n    const T ide = 0;\n\n    binary_indexed_tree(T\
    \ n_)\n        : n(n_) {\n        tree.resize(n, ide);\n    }\n\n    T abel_operation(T&\
    \ x, T& y) const noexcept {\n        return x + y;\n    }\n\n    T sum(T& l, T&\
    \ r) const noexcept {\n        return sum_sub(r) - sum_sub(l - 1);\n    }\n\n\
    \    T sum_sub(T& a) const noexcept {\n        T ret = 0;\n        for (; a >=\
    \ 0; a = (a & (a + 1)) - 1) ret = abel_operation(ret, tree[a]);\n        return\
    \ ret;\n    }\n\n    void add(T& a, T& x) const noexcept {\n        for (; a <\
    \ n; a |= a + 1) tree[a] = abel_operation(tree[a], x);\n        return;\n    }\n\
    };\n\n}  // namespace BanetteGin\n\n\n"
  code: "#ifndef BANETTEGIN_BINARY_INDEXED_TREE_HPP_INCLUDED\n#define BANETTEGIN_BINARY_INDEXED_TREE_HPP_INCLUDED\n\
    \n#include <vector>\n\nnamespace BanetteGin {\n\ntemplate <class T>\nstruct binary_indexed_tree\
    \ {\n    T n;\n    std::vector<T> tree;\n    const T ide = 0;\n\n    binary_indexed_tree(T\
    \ n_)\n        : n(n_) {\n        tree.resize(n, ide);\n    }\n\n    T abel_operation(T&\
    \ x, T& y) const noexcept {\n        return x + y;\n    }\n\n    T sum(T& l, T&\
    \ r) const noexcept {\n        return sum_sub(r) - sum_sub(l - 1);\n    }\n\n\
    \    T sum_sub(T& a) const noexcept {\n        T ret = 0;\n        for (; a >=\
    \ 0; a = (a & (a + 1)) - 1) ret = abel_operation(ret, tree[a]);\n        return\
    \ ret;\n    }\n\n    void add(T& a, T& x) const noexcept {\n        for (; a <\
    \ n; a |= a + 1) tree[a] = abel_operation(tree[a], x);\n        return;\n    }\n\
    };\n\n}  // namespace BanetteGin\n\n#endif"
  dependsOn: []
  isVerificationFile: false
  path: src/binary_indexed_tree.hpp
  requiredBy:
  - src/all.hpp
  timestamp: '2023-08-07 22:07:44+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/binary_indexed_tree.hpp
layout: document
redirect_from:
- /library/src/binary_indexed_tree.hpp
- /library/src/binary_indexed_tree.hpp.html
title: src/binary_indexed_tree.hpp
---
---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':warning:'
    path: src/all.hpp
    title: src/all.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/library_checker/union_find.test.cpp
    title: test/library_checker/union_find.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/data_structure/union_find.hpp\"\n\n\n\n#include <vector>\n\
    \nnamespace BanetteGin {\n\ntemplate <class T>\nstruct union_find {\n    std::vector<T>\
    \ par, rk, sz;\n    union_find(T n)\n        : par(n, -1), rk(n, 0), sz(n, 1)\
    \ {\n    }\n    T root(const T& v) noexcept {\n        if (par[v] == -1)\n   \
    \         return v;\n        else\n            return par[v] = root(par[v]);\n\
    \    }\n    bool same(const T& u, const T& v) noexcept {\n        return root(u)\
    \ == root(v);\n    }\n    bool unite(const T& u, const T& v) noexcept {\n    \
    \    T urt = root(u);\n        T vrt = root(v);\n        if (urt == vrt) return\
    \ false;\n        if (rk[urt] < rk[vrt]) swap(urt, vrt);\n        par[vrt] = urt;\n\
    \        if (rk[urt] == rk[vrt]) rk[urt]++;\n        sz[urt] += sz[vrt];\n   \
    \     return true;\n    }\n    T size(const T& v) const noexcept {\n        return\
    \ sz[root(v)];\n    }\n};\n\n}  // namespace BanetteGin\n\n\n"
  code: "#ifndef BANETTEGIN_UNION_FIND_HPP_INCLUDED\n#define BANETTEGIN_UNION_FIND_HPP_INCLUDED\n\
    \n#include <vector>\n\nnamespace BanetteGin {\n\ntemplate <class T>\nstruct union_find\
    \ {\n    std::vector<T> par, rk, sz;\n    union_find(T n)\n        : par(n, -1),\
    \ rk(n, 0), sz(n, 1) {\n    }\n    T root(const T& v) noexcept {\n        if (par[v]\
    \ == -1)\n            return v;\n        else\n            return par[v] = root(par[v]);\n\
    \    }\n    bool same(const T& u, const T& v) noexcept {\n        return root(u)\
    \ == root(v);\n    }\n    bool unite(const T& u, const T& v) noexcept {\n    \
    \    T urt = root(u);\n        T vrt = root(v);\n        if (urt == vrt) return\
    \ false;\n        if (rk[urt] < rk[vrt]) swap(urt, vrt);\n        par[vrt] = urt;\n\
    \        if (rk[urt] == rk[vrt]) rk[urt]++;\n        sz[urt] += sz[vrt];\n   \
    \     return true;\n    }\n    T size(const T& v) const noexcept {\n        return\
    \ sz[root(v)];\n    }\n};\n\n}  // namespace BanetteGin\n\n#endif"
  dependsOn: []
  isVerificationFile: false
  path: src/data_structure/union_find.hpp
  requiredBy:
  - src/all.hpp
  timestamp: '2023-08-23 17:08:47+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/library_checker/union_find.test.cpp
documentation_of: src/data_structure/union_find.hpp
layout: document
redirect_from:
- /library/src/data_structure/union_find.hpp
- /library/src/data_structure/union_find.hpp.html
title: src/data_structure/union_find.hpp
---
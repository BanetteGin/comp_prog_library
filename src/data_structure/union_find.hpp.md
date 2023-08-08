---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/data_structure/union_find.hpp\"\n\n\n\n#include <vector>\n\
    \nnamespace BanetteGin {\n\ntemplate <class T>\nstruct union_find {\n    std::vector<T>\
    \ par, rk, sz;\n    union_find(T n)\n        : par(n, -1), rk(n, 0), sz(n, 1)\
    \ {\n    }\n    T root(T& v) {\n        if (par[v] == -1)\n            return\
    \ v;\n        else\n            return par[v] = root(par[v]);\n    }\n    bool\
    \ same(T& u, T& v) {\n        return root(u) == root(v);\n    }\n    bool unite(T&\
    \ u, T& v) {\n        T urt = root(u);\n        T vrt = root(v);\n        if (urt\
    \ == vrt) return false;\n        if (rk[urt] < rk[vrt]) swap(urt, vrt);\n    \
    \    par[vrt] = urt;\n        if (rk[urt] == rk[vrt]) rk[urt]++;\n        sz[urt]\
    \ += sz[vrt];\n        return true;\n    }\n    T size(T& v) {\n        return\
    \ sz[root(v)];\n    }\n};\n\n}  // namespace BanetteGin\n\n\n"
  code: "#ifndef BANETTEGIN_UNION_FIND_HPP_INCLUDED\n#define BANETTEGIN_UNION_FIND_HPP_INCLUDED\n\
    \n#include <vector>\n\nnamespace BanetteGin {\n\ntemplate <class T>\nstruct union_find\
    \ {\n    std::vector<T> par, rk, sz;\n    union_find(T n)\n        : par(n, -1),\
    \ rk(n, 0), sz(n, 1) {\n    }\n    T root(T& v) {\n        if (par[v] == -1)\n\
    \            return v;\n        else\n            return par[v] = root(par[v]);\n\
    \    }\n    bool same(T& u, T& v) {\n        return root(u) == root(v);\n    }\n\
    \    bool unite(T& u, T& v) {\n        T urt = root(u);\n        T vrt = root(v);\n\
    \        if (urt == vrt) return false;\n        if (rk[urt] < rk[vrt]) swap(urt,\
    \ vrt);\n        par[vrt] = urt;\n        if (rk[urt] == rk[vrt]) rk[urt]++;\n\
    \        sz[urt] += sz[vrt];\n        return true;\n    }\n    T size(T& v) {\n\
    \        return sz[root(v)];\n    }\n};\n\n}  // namespace BanetteGin\n\n#endif"
  dependsOn: []
  isVerificationFile: false
  path: src/data_structure/union_find.hpp
  requiredBy: []
  timestamp: '2023-08-08 12:20:54+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/data_structure/union_find.hpp
layout: document
redirect_from:
- /library/src/data_structure/union_find.hpp
- /library/src/data_structure/union_find.hpp.html
title: src/data_structure/union_find.hpp
---

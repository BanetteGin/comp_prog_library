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
  bundledCode: "#line 1 \"src/find_cycle_by_dfs.hpp\"\n\n\n\n#include <vector>\n\n\
    namespace BanetteGin {\n\ntemplate <class T>\nbool find_cycle_by_dfs(T v, const\
    \ std::vector<std::vector<T>> &g, std::vector<bool> &visited, std::vector<bool>\
    \ &finished) {\n    visited[v] = true;\n    for (T nv : g[v]) {\n        if (visited[nv])\
    \ continue;\n        if (finished[nv]) continue;\n        if (visited[nv] && !finished[nv])\
    \ return true;\n        if (find_cycle_by_dfs(nv, g, visited, finished)) return\
    \ true;\n    }\n    finished[v] = true;\n    return false;\n}\n\n}  // namespace\
    \ BanetteGin\n\n\n"
  code: "#ifndef BANETTEGIN_FIND_CYCLE_BY_DFS_HPP_INCLUDED\n#define BANETTEGIN_FIND_CYCLE_BY_DFS_HPP_INCLUDED\n\
    \n#include <vector>\n\nnamespace BanetteGin {\n\ntemplate <class T>\nbool find_cycle_by_dfs(T\
    \ v, const std::vector<std::vector<T>> &g, std::vector<bool> &visited, std::vector<bool>\
    \ &finished) {\n    visited[v] = true;\n    for (T nv : g[v]) {\n        if (visited[nv])\
    \ continue;\n        if (finished[nv]) continue;\n        if (visited[nv] && !finished[nv])\
    \ return true;\n        if (find_cycle_by_dfs(nv, g, visited, finished)) return\
    \ true;\n    }\n    finished[v] = true;\n    return false;\n}\n\n}  // namespace\
    \ BanetteGin\n\n#endif"
  dependsOn: []
  isVerificationFile: false
  path: src/find_cycle_by_dfs.hpp
  requiredBy:
  - src/all.hpp
  timestamp: '2023-08-07 22:07:44+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/find_cycle_by_dfs.hpp
layout: document
redirect_from:
- /library/src/find_cycle_by_dfs.hpp
- /library/src/find_cycle_by_dfs.hpp.html
title: src/find_cycle_by_dfs.hpp
---

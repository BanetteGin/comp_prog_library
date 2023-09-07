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
  bundledCode: "#line 1 \"src/graph/find_cycle_by_dfs.hpp\"\n\n\n\n#include <vector>\n\
    \nnamespace BanetteGin {\n\ntemplate <class T>\nbool find_cycle_by_dfs(T v, std::vector<bool>\
    \ &visited, std::vector<bool> &finished, const std::vector<std::vector<T>> &g)\
    \ {\n    visited[v] = true;\n    for (T nv : g[v]) {\n        if (visited[nv])\
    \ continue;\n        if (finished[nv]) continue;\n        if (visited[nv] && !finished[nv])\
    \ return true;\n        if (find_cycle_by_dfs(nv, visited, finished, g)) return\
    \ true;\n    }\n    finished[v] = true;\n    return false;\n}\n\n}  // namespace\
    \ BanetteGin\n\n\n"
  code: "#ifndef BANETTEGIN_FIND_CYCLE_BY_DFS_HPP_INCLUDED\n#define BANETTEGIN_FIND_CYCLE_BY_DFS_HPP_INCLUDED\n\
    \n#include <vector>\n\nnamespace BanetteGin {\n\ntemplate <class T>\nbool find_cycle_by_dfs(T\
    \ v, std::vector<bool> &visited, std::vector<bool> &finished, const std::vector<std::vector<T>>\
    \ &g) {\n    visited[v] = true;\n    for (T nv : g[v]) {\n        if (visited[nv])\
    \ continue;\n        if (finished[nv]) continue;\n        if (visited[nv] && !finished[nv])\
    \ return true;\n        if (find_cycle_by_dfs(nv, visited, finished, g)) return\
    \ true;\n    }\n    finished[v] = true;\n    return false;\n}\n\n}  // namespace\
    \ BanetteGin\n\n#endif"
  dependsOn: []
  isVerificationFile: false
  path: src/graph/find_cycle_by_dfs.hpp
  requiredBy: []
  timestamp: '2023-09-07 19:24:46+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/graph/find_cycle_by_dfs.hpp
layout: document
redirect_from:
- /library/src/graph/find_cycle_by_dfs.hpp
- /library/src/graph/find_cycle_by_dfs.hpp.html
title: src/graph/find_cycle_by_dfs.hpp
---

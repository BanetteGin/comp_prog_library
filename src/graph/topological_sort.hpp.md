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
  bundledCode: "#line 1 \"src/graph/topological_sort.hpp\"\n\n\n\n#include <vector>\n\
    \nnamespace BanetteGin {\n\ntemplate <class T>\nstd::vector<T> TopologicalSort(const\
    \ std::vector<std::vector<T> >& g) {\n    std::vector<T> ret;\n    std::vector<T>\
    \ ind(g.size(), 0);\n    for (T i = 0; i < ind.size(); ++i) {\n        for (T\
    \ e : g[i]) ind[e]++;\n    }\n    std::queue<T> q;\n    for (T i = 0; i < ind.size();\
    \ ++i) {\n        if (ind[i] == 0) q.push(i);\n    }\n    while (!q.empty()) {\n\
    \        T nv = q.front();\n        ret.push_back(nv);\n        q.pop();\n   \
    \     for (T e : g[nv]) {\n            ind[e]--;\n            if (ind[e] == 0)\
    \ q.push(e);\n        }\n    }\n    return ret;\n}\n\n}  // namespace BanetteGin\n\
    \n\n"
  code: "#ifndef BANETTEGIN_TOPOLOGICAL_SORT_HPP_INCLUDED\n#define BANETTEGIN_TOPOLOGICAL_SORT_HPP_INCLUDED\n\
    \n#include <vector>\n\nnamespace BanetteGin {\n\ntemplate <class T>\nstd::vector<T>\
    \ TopologicalSort(const std::vector<std::vector<T> >& g) {\n    std::vector<T>\
    \ ret;\n    std::vector<T> ind(g.size(), 0);\n    for (T i = 0; i < ind.size();\
    \ ++i) {\n        for (T e : g[i]) ind[e]++;\n    }\n    std::queue<T> q;\n  \
    \  for (T i = 0; i < ind.size(); ++i) {\n        if (ind[i] == 0) q.push(i);\n\
    \    }\n    while (!q.empty()) {\n        T nv = q.front();\n        ret.push_back(nv);\n\
    \        q.pop();\n        for (T e : g[nv]) {\n            ind[e]--;\n      \
    \      if (ind[e] == 0) q.push(e);\n        }\n    }\n    return ret;\n}\n\n}\
    \  // namespace BanetteGin\n\n#endif"
  dependsOn: []
  isVerificationFile: false
  path: src/graph/topological_sort.hpp
  requiredBy:
  - src/all.hpp
  timestamp: '2023-08-08 12:20:54+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/graph/topological_sort.hpp
layout: document
redirect_from:
- /library/src/graph/topological_sort.hpp
- /library/src/graph/topological_sort.hpp.html
title: src/graph/topological_sort.hpp
---

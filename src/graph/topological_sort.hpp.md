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
  bundledCode: "#line 1 \"src/graph/topological_sort.hpp\"\n\n\n\n#include <vector>\n\
    \nnamespace BanetteGin {\n\ntemplate <class T>\nstd::vector<T> topological_sort(const\
    \ std::vector<std::vector<T> >& g) {\n    std::vector<T> ret;\n    std::vector<T>\
    \ ind(g.size(), 0);\n    for (long long int i = 0; i < ind.size(); ++i) {\n  \
    \      for (T e : g[i]) ind[e]++;\n    }\n    std::queue<T> q;\n    for (long\
    \ long int i = 0; i < ind.size(); ++i) {\n        if (ind[i] == 0) q.push(i);\n\
    \    }\n    while (!q.empty()) {\n        T nv = q.front();\n        ret.push_back(nv);\n\
    \        q.pop();\n        for (T e : g[nv]) {\n            ind[e]--;\n      \
    \      if (ind[e] == 0) q.push(e);\n        }\n    }\n    return ret;\n}\n\n}\
    \  // namespace BanetteGin\n\n\n"
  code: "#ifndef BANETTEGIN_TOPOLOGICAL_SORT_HPP_INCLUDED\n#define BANETTEGIN_TOPOLOGICAL_SORT_HPP_INCLUDED\n\
    \n#include <vector>\n\nnamespace BanetteGin {\n\ntemplate <class T>\nstd::vector<T>\
    \ topological_sort(const std::vector<std::vector<T> >& g) {\n    std::vector<T>\
    \ ret;\n    std::vector<T> ind(g.size(), 0);\n    for (long long int i = 0; i\
    \ < ind.size(); ++i) {\n        for (T e : g[i]) ind[e]++;\n    }\n    std::queue<T>\
    \ q;\n    for (long long int i = 0; i < ind.size(); ++i) {\n        if (ind[i]\
    \ == 0) q.push(i);\n    }\n    while (!q.empty()) {\n        T nv = q.front();\n\
    \        ret.push_back(nv);\n        q.pop();\n        for (T e : g[nv]) {\n \
    \           ind[e]--;\n            if (ind[e] == 0) q.push(e);\n        }\n  \
    \  }\n    return ret;\n}\n\n}  // namespace BanetteGin\n\n#endif"
  dependsOn: []
  isVerificationFile: false
  path: src/graph/topological_sort.hpp
  requiredBy: []
  timestamp: '2023-09-07 19:30:09+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/graph/topological_sort.hpp
layout: document
redirect_from:
- /library/src/graph/topological_sort.hpp
- /library/src/graph/topological_sort.hpp.html
title: src/graph/topological_sort.hpp
---

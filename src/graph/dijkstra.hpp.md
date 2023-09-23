---
data:
  _extendedDependsOn:
  - icon: ':question:'
    path: src/basic/constant.hpp
    title: src/basic/constant.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/graph/dijkstra.hpp\"\n\n\n\n#include <vector>\n\n#line\
    \ 1 \"src/basic/constant.hpp\"\n\n\n\nnamespace BanetteGin {\n\nconst long double\
    \ EPS = 1e-14L;\nconst long long int LINF = 1001001001001001001LL;\nconst long\
    \ double PI = acos(-1.0L);\nconst long double GOLDEN_RATIO = (1 + sqrt(5)) / 2;\n\
    \n}  // namespace BanetteGin\n\n\n#line 7 \"src/graph/dijkstra.hpp\"\nnamespace\
    \ BanetteGin {\n\ntemplate <class T>\nstd::vector<T> dijkstra(std::vector<std::vector<std::pair<T,\
    \ T>>> g, T bgn = 0) {\n    vector<T> dist(g.size(), LINF);\n    dist[bgn] = 0;\n\
    \    std::priority_queue<std::pair<T, T>> pq;\n    pq.push(0, bgn);\n    while\
    \ (!pq.empty()) {\n        T cstv = pq.top().first;\n        T v = pq.top().second;\n\
    \        pq.pop();\n        if (cstv > dist[v]) continue;\n        for (std::pair<T,\
    \ T> p : g) {\n            T c = p.first;\n            T u = p.second;\n     \
    \       if (dist[u] <= cstv + c) continue;\n            dist[u] = dist[v] + c;\n\
    \            pq.push(dist[v] + c, u);\n        }\n    }\n    return dist;\n}\n\
    \n}  // namespace BanetteGin\n\n\n"
  code: "#ifndef BANETTEGIN_DIJKSTRA_HPP_INCLUDED\n#define BANETTEGIN_DIJKSTRA_HPP_INCLUDED\n\
    \n#include <vector>\n\n#include \"../basic/constant.hpp\"\nnamespace BanetteGin\
    \ {\n\ntemplate <class T>\nstd::vector<T> dijkstra(std::vector<std::vector<std::pair<T,\
    \ T>>> g, T bgn = 0) {\n    vector<T> dist(g.size(), LINF);\n    dist[bgn] = 0;\n\
    \    std::priority_queue<std::pair<T, T>> pq;\n    pq.push(0, bgn);\n    while\
    \ (!pq.empty()) {\n        T cstv = pq.top().first;\n        T v = pq.top().second;\n\
    \        pq.pop();\n        if (cstv > dist[v]) continue;\n        for (std::pair<T,\
    \ T> p : g) {\n            T c = p.first;\n            T u = p.second;\n     \
    \       if (dist[u] <= cstv + c) continue;\n            dist[u] = dist[v] + c;\n\
    \            pq.push(dist[v] + c, u);\n        }\n    }\n    return dist;\n}\n\
    \n}  // namespace BanetteGin\n\n#endif"
  dependsOn:
  - src/basic/constant.hpp
  isVerificationFile: false
  path: src/graph/dijkstra.hpp
  requiredBy: []
  timestamp: '2023-09-23 20:08:59+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/graph/dijkstra.hpp
layout: document
redirect_from:
- /library/src/graph/dijkstra.hpp
- /library/src/graph/dijkstra.hpp.html
title: src/graph/dijkstra.hpp
---

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
  bundledCode: "#line 1 \"src/edge.hpp\"\n\n\n\nnamespace BanetteGin {\n\ntemplate\
    \ <class T>\nstruct edge {\n    T u, v, c;\n    edge(T u_, T v_, T c_)\n     \
    \   : u(u_), v(v_), c(c_) {\n    }\n};\n\n}  // namespace BanetteGin\n\n\n"
  code: "#ifndef BANETTEGIN_EDGE_HPP_INCLUDED\n#define BANETTEGIN_EDGE_HPP_INCLUDED\n\
    \nnamespace BanetteGin {\n\ntemplate <class T>\nstruct edge {\n    T u, v, c;\n\
    \    edge(T u_, T v_, T c_)\n        : u(u_), v(v_), c(c_) {\n    }\n};\n\n} \
    \ // namespace BanetteGin\n\n#endif"
  dependsOn: []
  isVerificationFile: false
  path: src/edge.hpp
  requiredBy:
  - src/all.hpp
  timestamp: '2023-08-07 22:07:44+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/edge.hpp
layout: document
redirect_from:
- /library/src/edge.hpp
- /library/src/edge.hpp.html
title: src/edge.hpp
---

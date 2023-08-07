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
  bundledCode: "#line 1 \"src/permutation.hpp\"\n\n\n\nnamespace BanetteGin {\n\n\
    template <class T>\nT permutation(T m, T n) {\n    T ret = 1;\n    for (long long\
    \ int i = m; i >= m - n + 1; --i) {\n        ret = ret * i;\n    }\n    return\
    \ ret;\n}\n\n}  // namespace BanetteGin\n\n\n"
  code: "#ifndef BANETTEGIN_PERMUTATION_HPP_INCLUDED\n#define BANETTEGIN_PERMUTATION_HPP_INCLUDED\n\
    \nnamespace BanetteGin {\n\ntemplate <class T>\nT permutation(T m, T n) {\n  \
    \  T ret = 1;\n    for (long long int i = m; i >= m - n + 1; --i) {\n        ret\
    \ = ret * i;\n    }\n    return ret;\n}\n\n}  // namespace BanetteGin\n\n#endif"
  dependsOn: []
  isVerificationFile: false
  path: src/permutation.hpp
  requiredBy:
  - src/all.hpp
  timestamp: '2023-08-07 22:07:44+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/permutation.hpp
layout: document
redirect_from:
- /library/src/permutation.hpp
- /library/src/permutation.hpp.html
title: src/permutation.hpp
---

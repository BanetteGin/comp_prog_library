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
  bundledCode: "#line 1 \"src/combinatorics/combination.hpp\"\n\n\n\nnamespace BanetteGin\
    \ {\n\ntemplate <class T>\nT combination(const T& m, const T& n) {\n    T ret\
    \ = 1;\n    for (long long int i = m; i >= m - n + 1; --i) {\n        ret = ret\
    \ * i;\n    }\n    for (long long int i = m - n; i >= 1; --i) {\n        ret =\
    \ ret / i;\n    }\n    return ret;\n}\n\n}  // namespace BanetteGin\n\n\n"
  code: "#ifndef BANETTEGIN_COMBINATION_HPP_INCLUDED\n#define BANETTEGIN_COMBINATION_HPP_INCLUDED\n\
    \nnamespace BanetteGin {\n\ntemplate <class T>\nT combination(const T& m, const\
    \ T& n) {\n    T ret = 1;\n    for (long long int i = m; i >= m - n + 1; --i)\
    \ {\n        ret = ret * i;\n    }\n    for (long long int i = m - n; i >= 1;\
    \ --i) {\n        ret = ret / i;\n    }\n    return ret;\n}\n\n}  // namespace\
    \ BanetteGin\n\n#endif"
  dependsOn: []
  isVerificationFile: false
  path: src/combinatorics/combination.hpp
  requiredBy:
  - src/all.hpp
  timestamp: '2023-09-07 19:30:09+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/combinatorics/combination.hpp
layout: document
redirect_from:
- /library/src/combinatorics/combination.hpp
- /library/src/combinatorics/combination.hpp.html
title: src/combinatorics/combination.hpp
---

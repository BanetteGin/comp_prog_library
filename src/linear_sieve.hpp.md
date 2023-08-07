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
  bundledCode: "#line 1 \"src/linear_sieve.hpp\"\n\n\n\n#include <vector>\n\nnamespace\
    \ BanetteGin {\n\ntemplate <class T>\nstd::vector<T> linear_sieve(T n) {\n   \
    \ std::vector<T> prime_list;\n    std::vector<T> lpf(n + 1, n + 1);\n    lpf[0]\
    \ = 1;\n    lpf[1] = 1;\n    for (T i = 2; i <= n; ++i) {\n        if (lpf[i]\
    \ == n + 1) {\n            lpf[i] = i;\n            prime_list.emplace_back(i);\n\
    \        }\n        for (T j = 0; j < prime_list.size(); ++j) {\n            T\
    \ p = prime_list[j];\n            if (p * i > n || p > lpf[i]) break;\n      \
    \      lpf[p * i] = p;\n        }\n    }\n    return prime_list;\n}\n\n}  // namespace\
    \ BanetteGin\n\n\n"
  code: "#ifndef BANETTEGIN_LINEAR_SIEVE_HPP_INCLUDED\n#define BANETTEGIN_LINEAR_SIEVE_HPP_INCLUDED\n\
    \n#include <vector>\n\nnamespace BanetteGin {\n\ntemplate <class T>\nstd::vector<T>\
    \ linear_sieve(T n) {\n    std::vector<T> prime_list;\n    std::vector<T> lpf(n\
    \ + 1, n + 1);\n    lpf[0] = 1;\n    lpf[1] = 1;\n    for (T i = 2; i <= n; ++i)\
    \ {\n        if (lpf[i] == n + 1) {\n            lpf[i] = i;\n            prime_list.emplace_back(i);\n\
    \        }\n        for (T j = 0; j < prime_list.size(); ++j) {\n            T\
    \ p = prime_list[j];\n            if (p * i > n || p > lpf[i]) break;\n      \
    \      lpf[p * i] = p;\n        }\n    }\n    return prime_list;\n}\n\n}  // namespace\
    \ BanetteGin\n\n#endif"
  dependsOn: []
  isVerificationFile: false
  path: src/linear_sieve.hpp
  requiredBy:
  - src/all.hpp
  timestamp: '2023-08-07 22:07:44+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/linear_sieve.hpp
layout: document
redirect_from:
- /library/src/linear_sieve.hpp
- /library/src/linear_sieve.hpp.html
title: src/linear_sieve.hpp
---

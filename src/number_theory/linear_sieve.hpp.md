---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':warning:'
    path: src/all.hpp
    title: src/all.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/yukicoder/843-3.test.cpp
    title: test/yukicoder/843-3.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/number_theory/linear_sieve.hpp\"\n\n\n\n#include <vector>\n\
    \nnamespace BanetteGin {\n\ntemplate <class T>\nstd::vector<T> linear_sieve(T\
    \ n) {\n    std::vector<T> prime_list;\n    std::vector<T> lpf(n + 1, n + 1);\n\
    \    lpf[0] = 1;\n    lpf[1] = 1;\n    for (long long int i = 2; i <= n; ++i)\
    \ {\n        if (lpf[i] == n + 1) {\n            lpf[i] = i;\n            prime_list.emplace_back(i);\n\
    \        }\n        for (long long int j = 0; j < prime_list.size(); ++j) {\n\
    \            T p = prime_list[j];\n            if (p * i > n || p > lpf[i]) break;\n\
    \            lpf[p * i] = p;\n        }\n    }\n    return prime_list;\n}\n\n\
    }  // namespace BanetteGin\n\n\n"
  code: "#ifndef BANETTEGIN_LINEAR_SIEVE_HPP_INCLUDED\n#define BANETTEGIN_LINEAR_SIEVE_HPP_INCLUDED\n\
    \n#include <vector>\n\nnamespace BanetteGin {\n\ntemplate <class T>\nstd::vector<T>\
    \ linear_sieve(T n) {\n    std::vector<T> prime_list;\n    std::vector<T> lpf(n\
    \ + 1, n + 1);\n    lpf[0] = 1;\n    lpf[1] = 1;\n    for (long long int i = 2;\
    \ i <= n; ++i) {\n        if (lpf[i] == n + 1) {\n            lpf[i] = i;\n  \
    \          prime_list.emplace_back(i);\n        }\n        for (long long int\
    \ j = 0; j < prime_list.size(); ++j) {\n            T p = prime_list[j];\n   \
    \         if (p * i > n || p > lpf[i]) break;\n            lpf[p * i] = p;\n \
    \       }\n    }\n    return prime_list;\n}\n\n}  // namespace BanetteGin\n\n\
    #endif"
  dependsOn: []
  isVerificationFile: false
  path: src/number_theory/linear_sieve.hpp
  requiredBy:
  - src/all.hpp
  timestamp: '2023-09-07 19:30:09+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yukicoder/843-3.test.cpp
documentation_of: src/number_theory/linear_sieve.hpp
layout: document
redirect_from:
- /library/src/number_theory/linear_sieve.hpp
- /library/src/number_theory/linear_sieve.hpp.html
title: src/number_theory/linear_sieve.hpp
---

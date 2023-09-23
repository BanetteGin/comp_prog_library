---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':warning:'
    path: src/all.hpp
    title: src/all.hpp
  - icon: ':warning:'
    path: src/number_theory/number_theory.hpp
    title: src/number_theory/number_theory.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/yukicoder/843-1.test.cpp
    title: test/yukicoder/843-1.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/number_theory/eratosthenes_sieve.hpp\"\n\n\n\n#include\
    \ <vector>\n\nnamespace BanetteGin {\n\ntemplate <class T>\nstd::vector<T> eratosthenes_sieve(T\
    \ n) {\n    std::vector<bool> ret(n + 1, true);\n    std::vector<T> prime_list;\n\
    \    ret[0] = ret[1] = false;\n    for (long long int i = 2; i * i <= n; ++i)\
    \ {\n        if (!ret[i]) continue;\n        for (long long int j = i * 2; j <=\
    \ n; j += i) {\n            ret[j] = false;\n        }\n    }\n    for (long long\
    \ int i = 2; i <= n; ++i) {\n        if (ret[i]) prime_list.emplace_back(i);\n\
    \    }\n    return prime_list;\n}\n\n}  // namespace BanetteGin\n\n\n"
  code: "#ifndef BANETTEGIN_ERATOSTHENES_SIEVE_HPP_INCLUDED\n#define BANETTEGIN_ERATOSTHENES_SIEVE_HPP_INCLUDED\n\
    \n#include <vector>\n\nnamespace BanetteGin {\n\ntemplate <class T>\nstd::vector<T>\
    \ eratosthenes_sieve(T n) {\n    std::vector<bool> ret(n + 1, true);\n    std::vector<T>\
    \ prime_list;\n    ret[0] = ret[1] = false;\n    for (long long int i = 2; i *\
    \ i <= n; ++i) {\n        if (!ret[i]) continue;\n        for (long long int j\
    \ = i * 2; j <= n; j += i) {\n            ret[j] = false;\n        }\n    }\n\
    \    for (long long int i = 2; i <= n; ++i) {\n        if (ret[i]) prime_list.emplace_back(i);\n\
    \    }\n    return prime_list;\n}\n\n}  // namespace BanetteGin\n\n#endif"
  dependsOn: []
  isVerificationFile: false
  path: src/number_theory/eratosthenes_sieve.hpp
  requiredBy:
  - src/number_theory/number_theory.hpp
  - src/all.hpp
  timestamp: '2023-09-07 19:30:09+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yukicoder/843-1.test.cpp
documentation_of: src/number_theory/eratosthenes_sieve.hpp
layout: document
redirect_from:
- /library/src/number_theory/eratosthenes_sieve.hpp
- /library/src/number_theory/eratosthenes_sieve.hpp.html
title: src/number_theory/eratosthenes_sieve.hpp
---

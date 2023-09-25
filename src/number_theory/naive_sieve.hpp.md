---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/number_theory/prime_check.hpp
    title: src/number_theory/prime_check.hpp
  _extendedRequiredBy:
  - icon: ':warning:'
    path: src/all.hpp
    title: src/all.hpp
  - icon: ':warning:'
    path: src/number_theory/number_theory.hpp
    title: src/number_theory/number_theory.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/yukicoder/713.test.cpp
    title: test/yukicoder/713.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/number_theory/naive_sieve.hpp\"\n\n\n\n#include <vector>\n\
    \n#line 1 \"src/number_theory/prime_check.hpp\"\n\n\n\nnamespace BanetteGin {\n\
    \ntemplate <class T>\nbool prime_check(T n) {\n    if (n < 2) return false;\n\
    \    if (n != 2 && n % 2 == 0) return false;\n    for (int i = 3; i * i <= n;\
    \ i += 2)\n        if (n % i == 0) return false;\n    return true;\n}\n\n}  //\
    \ namespace BanetteGin\n\n\n#line 7 \"src/number_theory/naive_sieve.hpp\"\n\n\
    namespace BanetteGin {\n\ntemplate <class T>\nstd::vector<T> naive_sieve(T n)\
    \ {\n    std::vector<T> prime_list;\n    if (n < 2) return prime_list;\n    prime_list.emplace_back(2);\n\
    \    for (int i = 3; i <= n; i += 2) {\n        if (prime_check(i)) prime_list.emplace_back(i);\n\
    \    }\n    return prime_list;\n}\n\n}  // namespace BanetteGin\n\n\n"
  code: "#ifndef BANETTEGIN_NAIVE_SIEVE_HPP_INCLUDED\n#define BANETTEGIN_NAIVE_SIEVE_HPP_INCLUDED\n\
    \n#include <vector>\n\n#include \"prime_check.hpp\"\n\nnamespace BanetteGin {\n\
    \ntemplate <class T>\nstd::vector<T> naive_sieve(T n) {\n    std::vector<T> prime_list;\n\
    \    if (n < 2) return prime_list;\n    prime_list.emplace_back(2);\n    for (int\
    \ i = 3; i <= n; i += 2) {\n        if (prime_check(i)) prime_list.emplace_back(i);\n\
    \    }\n    return prime_list;\n}\n\n}  // namespace BanetteGin\n\n#endif"
  dependsOn:
  - src/number_theory/prime_check.hpp
  isVerificationFile: false
  path: src/number_theory/naive_sieve.hpp
  requiredBy:
  - src/number_theory/number_theory.hpp
  - src/all.hpp
  timestamp: '2023-09-25 19:49:37+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yukicoder/713.test.cpp
documentation_of: src/number_theory/naive_sieve.hpp
layout: document
redirect_from:
- /library/src/number_theory/naive_sieve.hpp
- /library/src/number_theory/naive_sieve.hpp.html
title: src/number_theory/naive_sieve.hpp
---

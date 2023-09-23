---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':warning:'
    path: src/all.hpp
    title: src/all.hpp
  - icon: ':warning:'
    path: src/all.hpp
    title: src/all.hpp
  - icon: ':heavy_check_mark:'
    path: src/number_theory/naive_sieve.hpp
    title: src/number_theory/naive_sieve.hpp
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
  bundledCode: "#line 1 \"src/number_theory/prime_check.hpp\"\n\n\n\nnamespace BanetteGin\
    \ {\n\ntemplate <class T>\nbool prime_check(T n) {\n    if (n < 2) return false;\n\
    \    if (n != 2 && n % 2 == 0) return false;\n    for (long long int i = 3; i\
    \ * i <= n; i += 2)\n        if (n % i == 0) return false;\n    return true;\n\
    }\n\n}  // namespace BanetteGin\n\n\n"
  code: "#ifndef BANETTEGIN_PRIME_CHECK_HPP_INCLUDED\n#define BANETTEGIN_PRIME_CHECK_HPP_INCLUDED\n\
    \nnamespace BanetteGin {\n\ntemplate <class T>\nbool prime_check(T n) {\n    if\
    \ (n < 2) return false;\n    if (n != 2 && n % 2 == 0) return false;\n    for\
    \ (long long int i = 3; i * i <= n; i += 2)\n        if (n % i == 0) return false;\n\
    \    return true;\n}\n\n}  // namespace BanetteGin\n\n#endif"
  dependsOn: []
  isVerificationFile: false
  path: src/number_theory/prime_check.hpp
  requiredBy:
  - src/number_theory/naive_sieve.hpp
  - src/number_theory/number_theory.hpp
  - src/all.hpp
  - src/all.hpp
  timestamp: '2023-09-07 19:30:09+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yukicoder/713.test.cpp
documentation_of: src/number_theory/prime_check.hpp
layout: document
redirect_from:
- /library/src/number_theory/prime_check.hpp
- /library/src/number_theory/prime_check.hpp.html
title: src/number_theory/prime_check.hpp
---

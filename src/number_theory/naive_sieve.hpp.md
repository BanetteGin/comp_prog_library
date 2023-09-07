---
data:
  _extendedDependsOn:
  - icon: ':warning:'
    path: src/number_theory/prime_check.hpp
    title: src/number_theory/prime_check.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/number_theory/naive_sieve.hpp\"\n\n\n\n#include <vector>\n\
    \n#line 1 \"src/number_theory/prime_check.hpp\"\n\n\n\nnamespace BanetteGin {\n\
    \ntemplate <class T>\nbool prime_check(T n) {\n    if (n < 2) return false;\n\
    \    if (n != 2 && n % 2 == 0) return false;\n    for (T i = 3; i * i <= n; i\
    \ += 2)\n        if (n % i == 0) return false;\n    return true;\n}\n\n}  // namespace\
    \ BanetteGin\n\n\n#line 7 \"src/number_theory/naive_sieve.hpp\"\n\nnamespace BanetteGin\
    \ {\n\ntemplate <class T>\nstd::vector<T> naive_sieve(T n) {\n    std::vector<T>\
    \ prime_list;\n    for (T i = 2; i <= n; ++i) {\n        if (prime_check(i)) prime_list.emplace_back(i);\n\
    \    }\n    return prime_list;\n}\n\n}  // namespace BanetteGin\n\n\n"
  code: "#ifndef BANETTEGIN_NAIVE_SIEVE_HPP_INCLUDED\n#define BANETTEGIN_NAIVE_SIEVE_HPP_INCLUDED\n\
    \n#include <vector>\n\n#include \"prime_check.hpp\"\n\nnamespace BanetteGin {\n\
    \ntemplate <class T>\nstd::vector<T> naive_sieve(T n) {\n    std::vector<T> prime_list;\n\
    \    for (T i = 2; i <= n; ++i) {\n        if (prime_check(i)) prime_list.emplace_back(i);\n\
    \    }\n    return prime_list;\n}\n\n}  // namespace BanetteGin\n\n#endif"
  dependsOn:
  - src/number_theory/prime_check.hpp
  isVerificationFile: false
  path: src/number_theory/naive_sieve.hpp
  requiredBy: []
  timestamp: '2023-09-07 19:24:46+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/number_theory/naive_sieve.hpp
layout: document
redirect_from:
- /library/src/number_theory/naive_sieve.hpp
- /library/src/number_theory/naive_sieve.hpp.html
title: src/number_theory/naive_sieve.hpp
---

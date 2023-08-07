---
data:
  _extendedDependsOn:
  - icon: ':warning:'
    path: src/prime_check.hpp
    title: src/prime_check.hpp
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
  bundledCode: "#line 1 \"src/naive_sieve.hpp\"\n\n\n\n#include <vector>\n\n#line\
    \ 1 \"src/prime_check.hpp\"\n\n\n\nnamespace BanetteGin {\n\ntemplate <class T>\n\
    bool prime_check(T n) {\n    if (n < 2) return false;\n    if (n != 2 && n % 2\
    \ == 0) return false;\n    for (T i = 3; i * i <= n; i += 2)\n        if (n %\
    \ i == 0) return false;\n    return true;\n}\n\n}  // namespace BanetteGin\n\n\
    \n#line 7 \"src/naive_sieve.hpp\"\n\nnamespace BanetteGin {\n\ntemplate <class\
    \ T>\nstd::vector<T> naive_sieve(T& n) {\n    std::vector<T> prime_list;\n   \
    \ for (T i = 2; i <= n; ++i) {\n        if (prime_check(i)) prime_list.emplace_back(i);\n\
    \    }\n    return prime_list;\n}\n\n}  // namespace BanetteGin\n\n\n"
  code: "#ifndef BANETTEGIN_NAIVE_SIEVE_HPP_INCLUDED\n#define BANETTEGIN_NAIVE_SIEVE_HPP_INCLUDED\n\
    \n#include <vector>\n\n#include \"prime_check.hpp\"\n\nnamespace BanetteGin {\n\
    \ntemplate <class T>\nstd::vector<T> naive_sieve(T& n) {\n    std::vector<T> prime_list;\n\
    \    for (T i = 2; i <= n; ++i) {\n        if (prime_check(i)) prime_list.emplace_back(i);\n\
    \    }\n    return prime_list;\n}\n\n}  // namespace BanetteGin\n\n#endif"
  dependsOn:
  - src/prime_check.hpp
  isVerificationFile: false
  path: src/naive_sieve.hpp
  requiredBy:
  - src/all.hpp
  timestamp: '2023-08-07 22:07:44+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/naive_sieve.hpp
layout: document
redirect_from:
- /library/src/naive_sieve.hpp
- /library/src/naive_sieve.hpp.html
title: src/naive_sieve.hpp
---

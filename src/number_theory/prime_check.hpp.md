---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':warning:'
    path: src/number_theory/naive_sieve.hpp
    title: src/number_theory/naive_sieve.hpp
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/number_theory/prime_check.hpp\"\n\n\n\nnamespace BanetteGin\
    \ {\n\ntemplate <class T>\nbool prime_check(T n) {\n    if (n < 2) return false;\n\
    \    if (n != 2 && n % 2 == 0) return false;\n    for (T i = 3; i * i <= n; i\
    \ += 2)\n        if (n % i == 0) return false;\n    return true;\n}\n\n}  // namespace\
    \ BanetteGin\n\n\n"
  code: "#ifndef BANETTEGIN_PRIME_CHECK_HPP_INCLUDED\n#define BANETTEGIN_PRIME_CHECK_HPP_INCLUDED\n\
    \nnamespace BanetteGin {\n\ntemplate <class T>\nbool prime_check(T n) {\n    if\
    \ (n < 2) return false;\n    if (n != 2 && n % 2 == 0) return false;\n    for\
    \ (T i = 3; i * i <= n; i += 2)\n        if (n % i == 0) return false;\n    return\
    \ true;\n}\n\n}  // namespace BanetteGin\n\n#endif"
  dependsOn: []
  isVerificationFile: false
  path: src/number_theory/prime_check.hpp
  requiredBy:
  - src/number_theory/naive_sieve.hpp
  timestamp: '2023-08-08 12:20:54+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/number_theory/prime_check.hpp
layout: document
redirect_from:
- /library/src/number_theory/prime_check.hpp
- /library/src/number_theory/prime_check.hpp.html
title: src/number_theory/prime_check.hpp
---

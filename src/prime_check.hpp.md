---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':warning:'
    path: src/all.hpp
    title: src/all.hpp
  - icon: ':warning:'
    path: src/naive_sieve.hpp
    title: src/naive_sieve.hpp
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/prime_check.hpp\"\n\n\n\nnamespace BanetteGin {\n\n\
    template <class T>\nbool prime_check(T n) {\n    if (n < 2) return false;\n  \
    \  if (n != 2 && n % 2 == 0) return false;\n    for (T i = 3; i * i <= n; i +=\
    \ 2)\n        if (n % i == 0) return false;\n    return true;\n}\n\n}  // namespace\
    \ BanetteGin\n\n\n"
  code: "#ifndef BANETTEGIN_PRIME_CHECK_HPP_INCLUDED\n#define BANETTEGIN_PRIME_CHECK_HPP_INCLUDED\n\
    \nnamespace BanetteGin {\n\ntemplate <class T>\nbool prime_check(T n) {\n    if\
    \ (n < 2) return false;\n    if (n != 2 && n % 2 == 0) return false;\n    for\
    \ (T i = 3; i * i <= n; i += 2)\n        if (n % i == 0) return false;\n    return\
    \ true;\n}\n\n}  // namespace BanetteGin\n\n#endif"
  dependsOn: []
  isVerificationFile: false
  path: src/prime_check.hpp
  requiredBy:
  - src/all.hpp
  - src/naive_sieve.hpp
  timestamp: '2023-08-07 22:07:44+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/prime_check.hpp
layout: document
redirect_from:
- /library/src/prime_check.hpp
- /library/src/prime_check.hpp.html
title: src/prime_check.hpp
---

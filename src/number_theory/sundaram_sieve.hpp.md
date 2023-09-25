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
    path: test/yukicoder/843-2.test.cpp
    title: test/yukicoder/843-2.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/number_theory/sundaram_sieve.hpp\"\n\n\n\n#include <vector>\n\
    \nnamespace BanetteGin {\n\ntemplate <class T>\nstd::vector<T> sundaram_sieve(T\
    \ n) {\n    std::vector<bool> ret((n + 1) / 2, true);\n    std::vector<T> prime_list;\n\
    \    if (n < 2) return prime_list;\n    prime_list.emplace_back(2);\n    ret[0]\
    \ = false;\n    T m = ((n + 1) / 2 - 2) / 3;\n    for (int a = 1; a <= m; ++a)\
    \ {\n        for (int b = 1; b <= a && a + b + 2 * a * b <= (n + 1) / 2 - 1; ++b)\
    \ {\n            ret[a + b + 2 * a * b] = false;\n        }\n    }\n    for (T\
    \ i = 0; i < ret.size(); ++i) {\n        if (ret[i]) prime_list.emplace_back(i\
    \ * 2 + 1);\n    }\n    return prime_list;\n}\n\n}  // namespace BanetteGin\n\n\
    \n"
  code: "#ifndef BANETTEGIN_SUNDARAM_SIEVE_HPP_INCLUDED\n#define BANETTEGIN_SUNDARAM_SIEVE_HPP_INCLUDED\n\
    \n#include <vector>\n\nnamespace BanetteGin {\n\ntemplate <class T>\nstd::vector<T>\
    \ sundaram_sieve(T n) {\n    std::vector<bool> ret((n + 1) / 2, true);\n    std::vector<T>\
    \ prime_list;\n    if (n < 2) return prime_list;\n    prime_list.emplace_back(2);\n\
    \    ret[0] = false;\n    T m = ((n + 1) / 2 - 2) / 3;\n    for (int a = 1; a\
    \ <= m; ++a) {\n        for (int b = 1; b <= a && a + b + 2 * a * b <= (n + 1)\
    \ / 2 - 1; ++b) {\n            ret[a + b + 2 * a * b] = false;\n        }\n  \
    \  }\n    for (T i = 0; i < ret.size(); ++i) {\n        if (ret[i]) prime_list.emplace_back(i\
    \ * 2 + 1);\n    }\n    return prime_list;\n}\n\n}  // namespace BanetteGin\n\n\
    #endif"
  dependsOn: []
  isVerificationFile: false
  path: src/number_theory/sundaram_sieve.hpp
  requiredBy:
  - src/number_theory/number_theory.hpp
  - src/all.hpp
  timestamp: '2023-09-25 19:49:37+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yukicoder/843-2.test.cpp
documentation_of: src/number_theory/sundaram_sieve.hpp
layout: document
redirect_from:
- /library/src/number_theory/sundaram_sieve.hpp
- /library/src/number_theory/sundaram_sieve.hpp.html
title: src/number_theory/sundaram_sieve.hpp
---

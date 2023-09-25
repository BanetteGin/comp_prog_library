---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':warning:'
    path: src/all.hpp
    title: src/all.hpp
  - icon: ':heavy_check_mark:'
    path: src/number_theory/euler_phi.hpp
    title: src/number_theory/euler_phi.hpp
  - icon: ':warning:'
    path: src/number_theory/number_theory.hpp
    title: src/number_theory/number_theory.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aizu_online_judge/Library/NTL/A_1.test.cpp
    title: test/aizu_online_judge/Library/NTL/A_1.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aizu_online_judge/Library/NTL/A_4.test.cpp
    title: test/aizu_online_judge/Library/NTL/A_4.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/number_theory/prime_factorization.hpp\"\n\n\n\n#include\
    \ <vector>\n\nnamespace BanetteGin {\n\ntemplate <class T>\nstd::vector<std::pair<T,\
    \ T> > prime_factorization(T n) {\n    std::vector<std::pair<T, T> > prime_list;\n\
    \    for (int i = 2; i * i <= n; ++i) {\n        if (n % i == 0) {\n         \
    \   long long int e = 0;\n            while (n % i == 0) {\n                n\
    \ /= i;\n                e++;\n            }\n            prime_list.emplace_back(std::make_pair(i,\
    \ e));\n        }\n    }\n    if (n != 1) {\n        prime_list.emplace_back(std::make_pair(n,\
    \ 1));\n    }\n    return prime_list;\n}\n\n}  // namespace BanetteGin\n\n\n"
  code: "#ifndef BANETTEGIN_PRIME_FACTORIZATION_HPP_INCLUDED\n#define BANETTEGIN_PRIME_FACTORIZATION_HPP_INCLUDED\n\
    \n#include <vector>\n\nnamespace BanetteGin {\n\ntemplate <class T>\nstd::vector<std::pair<T,\
    \ T> > prime_factorization(T n) {\n    std::vector<std::pair<T, T> > prime_list;\n\
    \    for (int i = 2; i * i <= n; ++i) {\n        if (n % i == 0) {\n         \
    \   long long int e = 0;\n            while (n % i == 0) {\n                n\
    \ /= i;\n                e++;\n            }\n            prime_list.emplace_back(std::make_pair(i,\
    \ e));\n        }\n    }\n    if (n != 1) {\n        prime_list.emplace_back(std::make_pair(n,\
    \ 1));\n    }\n    return prime_list;\n}\n\n}  // namespace BanetteGin\n\n#endif"
  dependsOn: []
  isVerificationFile: false
  path: src/number_theory/prime_factorization.hpp
  requiredBy:
  - src/number_theory/euler_phi.hpp
  - src/number_theory/number_theory.hpp
  - src/all.hpp
  timestamp: '2023-09-25 19:49:37+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aizu_online_judge/Library/NTL/A_1.test.cpp
  - test/aizu_online_judge/Library/NTL/A_4.test.cpp
documentation_of: src/number_theory/prime_factorization.hpp
layout: document
redirect_from:
- /library/src/number_theory/prime_factorization.hpp
- /library/src/number_theory/prime_factorization.hpp.html
title: src/number_theory/prime_factorization.hpp
---

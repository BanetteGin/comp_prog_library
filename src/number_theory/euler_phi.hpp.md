---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/number_theory/prime_factorization.hpp
    title: src/number_theory/prime_factorization.hpp
  _extendedRequiredBy:
  - icon: ':warning:'
    path: src/number_theory/number_theory.hpp
    title: src/number_theory/number_theory.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aizu_online_judge/Library/NTL/A_4.test.cpp
    title: test/aizu_online_judge/Library/NTL/A_4.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/number_theory/euler_phi.hpp\"\n\n\n\n#line 1 \"src/number_theory/prime_factorization.hpp\"\
    \n\n\n\n#include <vector>\n\nnamespace BanetteGin {\n\ntemplate <class T>\nstd::vector<std::pair<T,\
    \ T> > prime_factorization(T n) {\n    std::vector<std::pair<T, T> > prime_list;\n\
    \    for (long long int i = 2; i * i <= n; ++i) {\n        if (n % i == 0) {\n\
    \            long long int e = 0;\n            while (n % i == 0) {\n        \
    \        n /= i;\n                e++;\n            }\n            prime_list.emplace_back(std::make_pair(i,\
    \ e));\n        }\n    }\n    if (n != 1) {\n        prime_list.emplace_back(std::make_pair(n,\
    \ 1));\n    }\n    return prime_list;\n}\n\n}  // namespace BanetteGin\n\n\n#line\
    \ 5 \"src/number_theory/euler_phi.hpp\"\n\nnamespace BanetteGin {\n\ntemplate\
    \ <class T>\nT euler_phi(const T& n) {\n    auto a = prime_factorization(n);\n\
    \    T ret = n;\n    for (long long int i = 0; i < a.size(); ++i) {\n        ret\
    \ /= a[i].first;\n        ret *= (a[i].first - 1);\n    }\n    return ret;\n}\n\
    \n}  // namespace BanetteGin\n\n\n"
  code: "#ifndef BANETTEGIN_EULER_PHI_HPP_INCLUDED\n#define BANETTEGIN_EULER_PHI_HPP_INCLUDED\n\
    \n#include \"prime_factorization.hpp\"\n\nnamespace BanetteGin {\n\ntemplate <class\
    \ T>\nT euler_phi(const T& n) {\n    auto a = prime_factorization(n);\n    T ret\
    \ = n;\n    for (long long int i = 0; i < a.size(); ++i) {\n        ret /= a[i].first;\n\
    \        ret *= (a[i].first - 1);\n    }\n    return ret;\n}\n\n}  // namespace\
    \ BanetteGin\n\n#endif"
  dependsOn:
  - src/number_theory/prime_factorization.hpp
  isVerificationFile: false
  path: src/number_theory/euler_phi.hpp
  requiredBy:
  - src/number_theory/number_theory.hpp
  timestamp: '2023-09-08 15:46:26+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aizu_online_judge/Library/NTL/A_4.test.cpp
documentation_of: src/number_theory/euler_phi.hpp
layout: document
redirect_from:
- /library/src/number_theory/euler_phi.hpp
- /library/src/number_theory/euler_phi.hpp.html
title: src/number_theory/euler_phi.hpp
---

---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/number_theory/prime_factorization.hpp\"\n\n\n\n#include\
    \ <vector>\n\nnamespace BanetteGin {\n\ntemplate <class T>\nstd::vector<std::pair<T,\
    \ T> > prime_factorization(T n) {\n    std::vector<std::pair<T, T> > prime_list;\n\
    \    for (long long int i = 2; i * i <= n; ++i) {\n        if (n % i == 0) {\n\
    \            long long int e = 0;\n            while (n % i == 0) {\n        \
    \        n /= i;\n                e++;\n            }\n            prime_list.emplace_back(std::make_pair(i,\
    \ e));\n        }\n    }\n    if (n != 1) {\n        prime_list.emplace_back(std::make_pair(n,\
    \ 1));\n    }\n    return prime_list;\n}\n\n}  // namespace BanetteGin\n\n\n"
  code: "#ifndef BANETTEGIN_PRIME_FACTORIZATION_HPP_INCLUDED\n#define BANETTEGIN_PRIME_FACTORIZATION_HPP_INCLUDED\n\
    \n#include <vector>\n\nnamespace BanetteGin {\n\ntemplate <class T>\nstd::vector<std::pair<T,\
    \ T> > prime_factorization(T n) {\n    std::vector<std::pair<T, T> > prime_list;\n\
    \    for (long long int i = 2; i * i <= n; ++i) {\n        if (n % i == 0) {\n\
    \            long long int e = 0;\n            while (n % i == 0) {\n        \
    \        n /= i;\n                e++;\n            }\n            prime_list.emplace_back(std::make_pair(i,\
    \ e));\n        }\n    }\n    if (n != 1) {\n        prime_list.emplace_back(std::make_pair(n,\
    \ 1));\n    }\n    return prime_list;\n}\n\n}  // namespace BanetteGin\n\n#endif"
  dependsOn: []
  isVerificationFile: false
  path: src/number_theory/prime_factorization.hpp
  requiredBy: []
  timestamp: '2023-09-08 09:32:39+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/number_theory/prime_factorization.hpp
layout: document
redirect_from:
- /library/src/number_theory/prime_factorization.hpp
- /library/src/number_theory/prime_factorization.hpp.html
title: src/number_theory/prime_factorization.hpp
---

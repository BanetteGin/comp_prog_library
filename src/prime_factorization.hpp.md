---
data:
  _extendedDependsOn: []
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
  bundledCode: "#line 1 \"src/prime_factorization.hpp\"\n\n\n\n#include <vector>\n\
    \nnamespace BanetteGin {\n\ntemplate <class T>\nstd::vector<std::pair<T, T> >\
    \ prime_factorization(T n) {\n    std::vector<std::pair<T, T> > prime_list;\n\
    \    for (T i = 2; i * i <= n; ++i) {\n        if (n % i == 0) {\n           \
    \ ll e = 0;\n            while (n % i == 0) {\n                n /= i;\n     \
    \           e++;\n            }\n            prime_list.emplace_back(make_pair(i,\
    \ e));\n        }\n    }\n    if (n != 1) {\n        prime_list.emplace_back(make_pair(n,\
    \ 1));\n    }\n    return prime_list;\n}\n\n}  // namespace BanetteGin\n\n\n"
  code: "#ifndef BANETTEGIN_PRIME_FACTORIZATION_HPP_INCLUDED\n#define BANETTEGIN_PRIME_FACTORIZATION_HPP_INCLUDED\n\
    \n#include <vector>\n\nnamespace BanetteGin {\n\ntemplate <class T>\nstd::vector<std::pair<T,\
    \ T> > prime_factorization(T n) {\n    std::vector<std::pair<T, T> > prime_list;\n\
    \    for (T i = 2; i * i <= n; ++i) {\n        if (n % i == 0) {\n           \
    \ ll e = 0;\n            while (n % i == 0) {\n                n /= i;\n     \
    \           e++;\n            }\n            prime_list.emplace_back(make_pair(i,\
    \ e));\n        }\n    }\n    if (n != 1) {\n        prime_list.emplace_back(make_pair(n,\
    \ 1));\n    }\n    return prime_list;\n}\n\n}  // namespace BanetteGin\n\n#endif"
  dependsOn: []
  isVerificationFile: false
  path: src/prime_factorization.hpp
  requiredBy:
  - src/all.hpp
  timestamp: '2023-08-07 22:07:44+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/prime_factorization.hpp
layout: document
redirect_from:
- /library/src/prime_factorization.hpp
- /library/src/prime_factorization.hpp.html
title: src/prime_factorization.hpp
---

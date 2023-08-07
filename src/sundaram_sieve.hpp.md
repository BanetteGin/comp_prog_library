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
  bundledCode: "#line 1 \"src/sundaram_sieve.hpp\"\n\n\n\n#include <vector>\n\nnamespace\
    \ BanetteGin {\n\ntemplate <class T>\nstd::vector<T> sundaram_sieve(T& n) {\n\
    \    std::vector<bool> ret((n + 1) / 2, true);\n    std::vector<T> prime_list\
    \ = {2};\n    ret[0] = false;\n    T m = ((n + 1) / 2 - 2) / 3;\n    for (T a\
    \ = 1; a <= m; ++a) {\n        for (T b = 1; b <= a && a + b + 2 * a * b <= (n\
    \ + 1) / 2 - 1; ++b) {\n            ret[a + b + 2 * a * b] = false;\n        }\n\
    \    }\n    for (T i = 0; i < ret.size(); ++i) {\n        if (ret[i]) prime_list.emplace_back(i\
    \ * 2 + 1);\n    }\n    return prime_list;\n}\n\n}  // namespace BanetteGin\n\n\
    \n"
  code: "#ifndef BANETTEGIN_SUNDARAM_SIEVE_HPP_INCLUDED\n#define BANETTEGIN_SUNDARAM_SIEVE_HPP_INCLUDED\n\
    \n#include <vector>\n\nnamespace BanetteGin {\n\ntemplate <class T>\nstd::vector<T>\
    \ sundaram_sieve(T& n) {\n    std::vector<bool> ret((n + 1) / 2, true);\n    std::vector<T>\
    \ prime_list = {2};\n    ret[0] = false;\n    T m = ((n + 1) / 2 - 2) / 3;\n \
    \   for (T a = 1; a <= m; ++a) {\n        for (T b = 1; b <= a && a + b + 2 *\
    \ a * b <= (n + 1) / 2 - 1; ++b) {\n            ret[a + b + 2 * a * b] = false;\n\
    \        }\n    }\n    for (T i = 0; i < ret.size(); ++i) {\n        if (ret[i])\
    \ prime_list.emplace_back(i * 2 + 1);\n    }\n    return prime_list;\n}\n\n} \
    \ // namespace BanetteGin\n\n#endif"
  dependsOn: []
  isVerificationFile: false
  path: src/sundaram_sieve.hpp
  requiredBy:
  - src/all.hpp
  timestamp: '2023-08-07 22:07:44+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/sundaram_sieve.hpp
layout: document
redirect_from:
- /library/src/sundaram_sieve.hpp
- /library/src/sundaram_sieve.hpp.html
title: src/sundaram_sieve.hpp
---

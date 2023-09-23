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
    path: test/yukicoder/888.test.cpp
    title: test/yukicoder/888.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/number_theory/divisors.hpp\"\n\n\n\n#include <vector>\n\
    \nnamespace BanetteGin {\n\ntemplate <class T>\nstd::vector<T> divisors(T n) {\n\
    \    std::vector<T> ret;\n    for (long long int i = 1; i * i <= n; ++i) {\n \
    \       if (n % i == 0) {\n            if (i == n / i) {\n                ret.emplace_back(i);\n\
    \            } else {\n                ret.emplace_back(i);\n                ret.emplace_back(n\
    \ / i);\n            }\n        }\n    }\n    sort(ret.begin(), ret.end());\n\
    \    return ret;\n}\n\n}  // namespace BanetteGin\n\n\n"
  code: "#ifndef BANETTEGIN_DIVISORS_HPP_INCLUDED\n#define BANETTEGIN_DIVISORS_HPP_INCLUDED\n\
    \n#include <vector>\n\nnamespace BanetteGin {\n\ntemplate <class T>\nstd::vector<T>\
    \ divisors(T n) {\n    std::vector<T> ret;\n    for (long long int i = 1; i *\
    \ i <= n; ++i) {\n        if (n % i == 0) {\n            if (i == n / i) {\n \
    \               ret.emplace_back(i);\n            } else {\n                ret.emplace_back(i);\n\
    \                ret.emplace_back(n / i);\n            }\n        }\n    }\n \
    \   sort(ret.begin(), ret.end());\n    return ret;\n}\n\n}  // namespace BanetteGin\n\
    \n#endif"
  dependsOn: []
  isVerificationFile: false
  path: src/number_theory/divisors.hpp
  requiredBy:
  - src/number_theory/number_theory.hpp
  - src/all.hpp
  timestamp: '2023-09-07 19:32:18+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yukicoder/888.test.cpp
documentation_of: src/number_theory/divisors.hpp
layout: document
redirect_from:
- /library/src/number_theory/divisors.hpp
- /library/src/number_theory/divisors.hpp.html
title: src/number_theory/divisors.hpp
---

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
  bundledCode: "#line 1 \"src/divisors.hpp\"\n\n\n\n#include <vector>\n\nnamespace\
    \ BanetteGin {\n\ntemplate <class T>\nstd::vector<T> divisors(T& n) {\n    std::vector<T>\
    \ ret;\n    for (T i = 1; i * i <= n; ++i) {\n        if (n % i == 0) {\n    \
    \        if (i == n / i) {\n                ret.emplace_back(i);\n           \
    \ } else {\n                ret.emplace_back(i);\n                ret.emplace_back(n\
    \ / i);\n            }\n        }\n    }\n    sort(ret.begin(), ret.end());\n\
    \    return ret;\n}\n\n}  // namespace BanetteGin\n\n\n"
  code: "#ifndef BANETTEGIN_DIVISORS_HPP_INCLUDED\n#define BANETTEGIN_DIVISORS_HPP_INCLUDED\n\
    \n#include <vector>\n\nnamespace BanetteGin {\n\ntemplate <class T>\nstd::vector<T>\
    \ divisors(T& n) {\n    std::vector<T> ret;\n    for (T i = 1; i * i <= n; ++i)\
    \ {\n        if (n % i == 0) {\n            if (i == n / i) {\n              \
    \  ret.emplace_back(i);\n            } else {\n                ret.emplace_back(i);\n\
    \                ret.emplace_back(n / i);\n            }\n        }\n    }\n \
    \   sort(ret.begin(), ret.end());\n    return ret;\n}\n\n}  // namespace BanetteGin\n\
    \n#endif"
  dependsOn: []
  isVerificationFile: false
  path: src/divisors.hpp
  requiredBy:
  - src/all.hpp
  timestamp: '2023-08-07 22:07:44+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/divisors.hpp
layout: document
redirect_from:
- /library/src/divisors.hpp
- /library/src/divisors.hpp.html
title: src/divisors.hpp
---
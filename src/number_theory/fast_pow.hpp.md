---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':warning:'
    path: src/number_theory/number_theory.hpp
    title: src/number_theory/number_theory.hpp
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/number_theory/fast_pow.hpp\"\n\n\n\nnamespace BanetteGin\
    \ {\n\ntemplate <class T>\nT fast_pow(T a, T e) {\n    T ret = 1;\n    while (e\
    \ > 0) {\n        if (e & 1) ret *= a;\n        a *= a;\n        e >>= 1;\n  \
    \  }\n    return ret;\n}\n\n}  // namespace BanetteGin\n\n\n"
  code: "#ifndef BANETTEGIN_FAST_POW_HPP_INCLUDED\n#define BANETTEGIN_FAST_POW_HPP_INCLUDED\n\
    \nnamespace BanetteGin {\n\ntemplate <class T>\nT fast_pow(T a, T e) {\n    T\
    \ ret = 1;\n    while (e > 0) {\n        if (e & 1) ret *= a;\n        a *= a;\n\
    \        e >>= 1;\n    }\n    return ret;\n}\n\n}  // namespace BanetteGin\n\n\
    #endif"
  dependsOn: []
  isVerificationFile: false
  path: src/number_theory/fast_pow.hpp
  requiredBy:
  - src/number_theory/number_theory.hpp
  timestamp: '2023-09-25 19:28:14+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/number_theory/fast_pow.hpp
layout: document
redirect_from:
- /library/src/number_theory/fast_pow.hpp
- /library/src/number_theory/fast_pow.hpp.html
title: src/number_theory/fast_pow.hpp
---

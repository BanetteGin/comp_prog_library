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
    path: test/aizu_online_judge/Library/NTL/A_3.test.cpp
    title: test/aizu_online_judge/Library/NTL/A_3.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/number_theory/greatest_common_divisor.hpp\"\n\n\n\n\
    namespace BanetteGin {\n\ntemplate <class T>\nT greatest_common_divisor(T a, T\
    \ b) {\n    return b == 0 ? a : greatest_common_divisor(b, a % b);\n}\n\n}  //\
    \ namespace BanetteGin\n\n\n"
  code: "#ifndef BANETTEGIN_GREATEST_COMMON_DIVISOR_HPP_INCLUDED\n#define BANETTEGIN_GREATEST_COMMON_DIVISOR_HPP_INCLUDED\n\
    \nnamespace BanetteGin {\n\ntemplate <class T>\nT greatest_common_divisor(T a,\
    \ T b) {\n    return b == 0 ? a : greatest_common_divisor(b, a % b);\n}\n\n} \
    \ // namespace BanetteGin\n\n#endif"
  dependsOn: []
  isVerificationFile: false
  path: src/number_theory/greatest_common_divisor.hpp
  requiredBy:
  - src/number_theory/number_theory.hpp
  - src/all.hpp
  timestamp: '2023-08-08 12:20:54+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aizu_online_judge/Library/NTL/A_3.test.cpp
documentation_of: src/number_theory/greatest_common_divisor.hpp
layout: document
redirect_from:
- /library/src/number_theory/greatest_common_divisor.hpp
- /library/src/number_theory/greatest_common_divisor.hpp.html
title: src/number_theory/greatest_common_divisor.hpp
---

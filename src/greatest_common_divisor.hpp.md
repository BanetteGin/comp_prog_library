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
  bundledCode: "#line 1 \"src/greatest_common_divisor.hpp\"\n\n\n\nnamespace BanetteGin\
    \ {\n\ntemplate <class T>\nT greatest_common_divisor(T a, T b) {\n    return b\
    \ == 0 ? a : greatest_common_divisor(b, a % b);\n}\n\n}  // namespace BanetteGin\n\
    \n\n"
  code: "#ifndef BANETTEGIN_GREATEST_COMMON_DIVISOR_HPP_INCLUDED\n#define BANETTEGIN_GREATEST_COMMON_DIVISOR_HPP_INCLUDED\n\
    \nnamespace BanetteGin {\n\ntemplate <class T>\nT greatest_common_divisor(T a,\
    \ T b) {\n    return b == 0 ? a : greatest_common_divisor(b, a % b);\n}\n\n} \
    \ // namespace BanetteGin\n\n#endif"
  dependsOn: []
  isVerificationFile: false
  path: src/greatest_common_divisor.hpp
  requiredBy:
  - src/all.hpp
  timestamp: '2023-08-07 22:07:44+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/greatest_common_divisor.hpp
layout: document
redirect_from:
- /library/src/greatest_common_divisor.hpp
- /library/src/greatest_common_divisor.hpp.html
title: src/greatest_common_divisor.hpp
---

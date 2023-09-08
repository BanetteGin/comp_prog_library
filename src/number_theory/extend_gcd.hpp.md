---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aizu_online_judge/Library/NTL/A_5.test.cpp
    title: test/aizu_online_judge/Library/NTL/A_5.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/number_theory/extend_gcd.hpp\"\n\n\n\nnamespace BanetteGin\
    \ {\n\ntemplate <class T>\nT extend_gcd(const T& a, const T& b, T& x, T& y) {\n\
    \    if (b == 0) {\n        x = 1;\n        y = 0;\n        return a;\n    } else\
    \ {\n        T d = extend_gcd(b, a % b, y, x);\n        y -= a / b * x;\n    \
    \    return d;\n    }\n}\n\n}  // namespace BanetteGin\n\n\n"
  code: "#ifndef BANETTEGIN_EXTEND_GCD_HPP_INCLUDED\n#define BANETTEGIN_EXTEND_GCD_HPP_INCLUDED\n\
    \nnamespace BanetteGin {\n\ntemplate <class T>\nT extend_gcd(const T& a, const\
    \ T& b, T& x, T& y) {\n    if (b == 0) {\n        x = 1;\n        y = 0;\n   \
    \     return a;\n    } else {\n        T d = extend_gcd(b, a % b, y, x);\n   \
    \     y -= a / b * x;\n        return d;\n    }\n}\n\n}  // namespace BanetteGin\n\
    \n#endif"
  dependsOn: []
  isVerificationFile: false
  path: src/number_theory/extend_gcd.hpp
  requiredBy: []
  timestamp: '2023-09-08 16:00:29+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aizu_online_judge/Library/NTL/A_5.test.cpp
documentation_of: src/number_theory/extend_gcd.hpp
layout: document
redirect_from:
- /library/src/number_theory/extend_gcd.hpp
- /library/src/number_theory/extend_gcd.hpp.html
title: src/number_theory/extend_gcd.hpp
---

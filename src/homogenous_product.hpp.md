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
  bundledCode: "#line 1 \"src/homogenous_product.hpp\"\n\n\n\nnamespace BanetteGin\
    \ {\n\ntemplate <class T>\nT HomogenousProduct(T m, T n) {\n    T ret = 1;\n \
    \   for (long long int i = m + n - 1; i >= m; --i) {\n        ret = ret * i;\n\
    \    }\n    for (long long int i = m - 1; i >= 1; --i) {\n        ret = ret /\
    \ i;\n    }\n    return ret;\n}\n\n}  // namespace BanetteGin\n\n\n"
  code: "#ifndef BANETTEGIN_HOGE_HPP_INCLUDED\n#define BANETTEGIN_HOGE_HPP_INCLUDED\n\
    \nnamespace BanetteGin {\n\ntemplate <class T>\nT HomogenousProduct(T m, T n)\
    \ {\n    T ret = 1;\n    for (long long int i = m + n - 1; i >= m; --i) {\n  \
    \      ret = ret * i;\n    }\n    for (long long int i = m - 1; i >= 1; --i) {\n\
    \        ret = ret / i;\n    }\n    return ret;\n}\n\n}  // namespace BanetteGin\n\
    \n#endif"
  dependsOn: []
  isVerificationFile: false
  path: src/homogenous_product.hpp
  requiredBy:
  - src/all.hpp
  timestamp: '2023-08-07 22:07:44+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/homogenous_product.hpp
layout: document
redirect_from:
- /library/src/homogenous_product.hpp
- /library/src/homogenous_product.hpp.html
title: src/homogenous_product.hpp
---

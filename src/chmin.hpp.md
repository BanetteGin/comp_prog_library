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
  bundledCode: "#line 1 \"src/chmin.hpp\"\n\n\n\nnamespace BanetteGin {\n\ntemplate\
    \ <class T>\nbool chmin(T& a, const T& b) {\n    if (b < a) {\n        a = b;\n\
    \        return 1;\n    }\n    return 0;\n}\n\n}  // namespace BanetteGin\n\n\n"
  code: "#ifndef BANETTEGIN_CHMIN_HPP_INCLUDED\n#define BANETTEGIN_CHMIN_HPP_INCLUDED\n\
    \nnamespace BanetteGin {\n\ntemplate <class T>\nbool chmin(T& a, const T& b) {\n\
    \    if (b < a) {\n        a = b;\n        return 1;\n    }\n    return 0;\n}\n\
    \n}  // namespace BanetteGin\n\n#endif"
  dependsOn: []
  isVerificationFile: false
  path: src/chmin.hpp
  requiredBy:
  - src/all.hpp
  timestamp: '2023-08-07 22:07:44+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/chmin.hpp
layout: document
redirect_from:
- /library/src/chmin.hpp
- /library/src/chmin.hpp.html
title: src/chmin.hpp
---

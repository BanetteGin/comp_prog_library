---
data:
  _extendedDependsOn:
  - icon: ':warning:'
    path: src/basic/constant.hpp
    title: src/basic/constant.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/basic/equal.hpp\"\n\n\n\n#line 1 \"src/basic/constant.hpp\"\
    \n\n\n\nnamespace BanetteGin {\n\nconst long double EPS = 10e-12;\nconst long\
    \ long int LINF = 1001001001001001001LL;\nconst long double PI = acos(-1);\n\n\
    }  // namespace BanetteGin\n\n\n#line 5 \"src/basic/equal.hpp\"\n\nnamespace BanetteGin\
    \ {\n\ntemplate <class T>\nbool equal(const T &a, const T &b) {\n    const T dif\
    \ = a - b;\n    if (dif < 0) dif = -dif;\n    return dif < EPS;\n}\n\n}  // namespace\
    \ BanetteGin\n\n\n"
  code: "#ifndef BANETTEGIN_EQUAL_HPP_INCLUDED\n#define BANETTEGIN_EQUAL_HPP_INCLUDED\n\
    \n#include \"constant.hpp\"\n\nnamespace BanetteGin {\n\ntemplate <class T>\n\
    bool equal(const T &a, const T &b) {\n    const T dif = a - b;\n    if (dif <\
    \ 0) dif = -dif;\n    return dif < EPS;\n}\n\n}  // namespace BanetteGin\n\n#endif"
  dependsOn:
  - src/basic/constant.hpp
  isVerificationFile: false
  path: src/basic/equal.hpp
  requiredBy: []
  timestamp: '2023-08-08 12:20:54+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/basic/equal.hpp
layout: document
redirect_from:
- /library/src/basic/equal.hpp
- /library/src/basic/equal.hpp.html
title: src/basic/equal.hpp
---

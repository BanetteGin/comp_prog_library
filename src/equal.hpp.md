---
data:
  _extendedDependsOn:
  - icon: ':warning:'
    path: src/constant.hpp
    title: src/constant.hpp
  _extendedRequiredBy:
  - icon: ':warning:'
    path: src/all.hpp
    title: src/all.hpp
  - icon: ':warning:'
    path: src/circle.hpp
    title: src/circle.hpp
  - icon: ':warning:'
    path: src/line.hpp
    title: src/line.hpp
  - icon: ':warning:'
    path: src/point.hpp
    title: src/point.hpp
  - icon: ':warning:'
    path: src/rotate.hpp
    title: src/rotate.hpp
  - icon: ':warning:'
    path: src/segment.hpp
    title: src/segment.hpp
  - icon: ':warning:'
    path: src/triangle.hpp
    title: src/triangle.hpp
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/equal.hpp\"\n\n\n\n#line 1 \"src/constant.hpp\"\n\n\n\
    \nnamespace BanetteGin {\n\nconst long double EPS = 10e-12;\nconst long long int\
    \ LINF = 1001001001001001001LL;\nconst long double PI = acos(-1);\n\n}  // namespace\
    \ BanetteGin\n\n\n#line 5 \"src/equal.hpp\"\n\nnamespace BanetteGin {\n\ntemplate\
    \ <class T>\nbool equal(const T &a, const T &b) {\n    const T dif = a - b;\n\
    \    if (dif < 0) dif = -dif;\n    return dif < EPS;\n}\n\n}  // namespace BanetteGin\n\
    \n\n"
  code: "#ifndef BANETTEGIN_EQUAL_HPP_INCLUDED\n#define BANETTEGIN_EQUAL_HPP_INCLUDED\n\
    \n#include \"constant.hpp\"\n\nnamespace BanetteGin {\n\ntemplate <class T>\n\
    bool equal(const T &a, const T &b) {\n    const T dif = a - b;\n    if (dif <\
    \ 0) dif = -dif;\n    return dif < EPS;\n}\n\n}  // namespace BanetteGin\n\n#endif"
  dependsOn:
  - src/constant.hpp
  isVerificationFile: false
  path: src/equal.hpp
  requiredBy:
  - src/triangle.hpp
  - src/point.hpp
  - src/all.hpp
  - src/circle.hpp
  - src/rotate.hpp
  - src/segment.hpp
  - src/line.hpp
  timestamp: '2023-08-07 22:07:44+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/equal.hpp
layout: document
redirect_from:
- /library/src/equal.hpp
- /library/src/equal.hpp.html
title: src/equal.hpp
---

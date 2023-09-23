---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/basic/constant.hpp
    title: src/basic/constant.hpp
  _extendedRequiredBy:
  - icon: ':warning:'
    path: src/all.hpp
    title: src/all.hpp
  - icon: ':warning:'
    path: src/geometry/geometry.hpp
    title: src/geometry/geometry.hpp
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/geometry/degree_to_radian.hpp\"\n\n\n\n#line 1 \"src/basic/constant.hpp\"\
    \n\n\n\nnamespace BanetteGin {\n\nconst long double EPS = 1e-15L;\nconst long\
    \ long int LINF = 1001001001001001001LL;\nconst long double PI = acos(-1.0L);\n\
    const long double GOLDEN_RATIO = (1 + sqrt(5)) / 2;\n\n}  // namespace BanetteGin\n\
    \n\n#line 5 \"src/geometry/degree_to_radian.hpp\"\n\nnamespace BanetteGin {\n\n\
    template <class T>\nT degree_to_radian(T theta) {\n    return theta / 180 * PI;\n\
    }\n\n}  // namespace BanetteGin\n\n\n"
  code: "#ifndef BANETTEGIN_DEGREE_TO_RADIAN_HPP_INCLUDED\n#define BANETTEGIN_DEGREE_TO_RADIAN_HPP_INCLUDED\n\
    \n#include \"../basic/constant.hpp\"\n\nnamespace BanetteGin {\n\ntemplate <class\
    \ T>\nT degree_to_radian(T theta) {\n    return theta / 180 * PI;\n}\n\n}  //\
    \ namespace BanetteGin\n\n#endif"
  dependsOn:
  - src/basic/constant.hpp
  isVerificationFile: false
  path: src/geometry/degree_to_radian.hpp
  requiredBy:
  - src/all.hpp
  - src/geometry/geometry.hpp
  timestamp: '2023-09-23 20:16:43+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/geometry/degree_to_radian.hpp
layout: document
redirect_from:
- /library/src/geometry/degree_to_radian.hpp
- /library/src/geometry/degree_to_radian.hpp.html
title: src/geometry/degree_to_radian.hpp
---

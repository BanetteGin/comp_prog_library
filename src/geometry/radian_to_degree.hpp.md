---
data:
  _extendedDependsOn:
  - icon: ':question:'
    path: src/basic/constant.hpp
    title: src/basic/constant.hpp
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
  bundledCode: "#line 1 \"src/geometry/radian_to_degree.hpp\"\n\n\n\n#line 1 \"src/basic/constant.hpp\"\
    \n\n\n\nnamespace BanetteGin {\n\nconst long double EPS = 10e-12;\nconst long\
    \ long int LINF = 1001001001001001001LL;\nconst long double PI = acos(-1);\nconst\
    \ long double GOLDEN_RATIO = 2 * cos(PI / 5);\n\n}  // namespace BanetteGin\n\n\
    \n#line 5 \"src/geometry/radian_to_degree.hpp\"\n\nnamespace BanetteGin {\n\n\
    template <class T>\nT radian_to_degree(T theta) {\n    return theta / PI * 180;\n\
    }\n\n}  // namespace BanetteGin\n\n\n"
  code: "#ifndef BANETTEGIN_RADIAN_TO_DEGREE_HPP_INCLUDED\n#define BANETTEGIN_RADIAN_TO_DEGREE_HPP_INCLUDED\n\
    \n#include \"../basic/constant.hpp\"\n\nnamespace BanetteGin {\n\ntemplate <class\
    \ T>\nT radian_to_degree(T theta) {\n    return theta / PI * 180;\n}\n\n}  //\
    \ namespace BanetteGin\n\n#endif"
  dependsOn:
  - src/basic/constant.hpp
  isVerificationFile: false
  path: src/geometry/radian_to_degree.hpp
  requiredBy:
  - src/all.hpp
  timestamp: '2023-08-22 02:10:12+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/geometry/radian_to_degree.hpp
layout: document
redirect_from:
- /library/src/geometry/radian_to_degree.hpp
- /library/src/geometry/radian_to_degree.hpp.html
title: src/geometry/radian_to_degree.hpp
---

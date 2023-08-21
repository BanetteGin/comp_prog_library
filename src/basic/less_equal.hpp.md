---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':warning:'
    path: src/analysis/golden_ratio_search.hpp
    title: src/analysis/golden_ratio_search.hpp
  - icon: ':warning:'
    path: src/analysis/ternary_search.hpp
    title: src/analysis/ternary_search.hpp
  - icon: ':warning:'
    path: src/basic/comparison.hpp
    title: src/basic/comparison.hpp
  - icon: ':warning:'
    path: src/geometry/intersect_circle_and_circle.hpp
    title: src/geometry/intersect_circle_and_circle.hpp
  - icon: ':warning:'
    path: src/geometry/intersect_line_and_circle.hpp
    title: src/geometry/intersect_line_and_circle.hpp
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/basic/less_equal.hpp\"\n\n\n\nnamespace BanetteGin {\n\
    \ntemplate <class T>\nbool less_equal(const T &a, const T &b) {\n    return (sign(a\
    \ - b) <= 0);\n}\n\n}  // namespace BanetteGin\n\n\n"
  code: "#ifndef BANETTEGIN_LESS_EQUAL_HPP_INCLUDED\n#define BANETTEGIN_LESS_EQUAL_HPP_INCLUDED\n\
    \nnamespace BanetteGin {\n\ntemplate <class T>\nbool less_equal(const T &a, const\
    \ T &b) {\n    return (sign(a - b) <= 0);\n}\n\n}  // namespace BanetteGin\n\n\
    #endif"
  dependsOn: []
  isVerificationFile: false
  path: src/basic/less_equal.hpp
  requiredBy:
  - src/basic/comparison.hpp
  - src/analysis/golden_ratio_search.hpp
  - src/analysis/ternary_search.hpp
  - src/geometry/intersect_line_and_circle.hpp
  - src/geometry/intersect_circle_and_circle.hpp
  timestamp: '2023-08-08 21:28:17+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/basic/less_equal.hpp
layout: document
redirect_from:
- /library/src/basic/less_equal.hpp
- /library/src/basic/less_equal.hpp.html
title: src/basic/less_equal.hpp
---

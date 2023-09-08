---
data:
  _extendedDependsOn:
  - icon: ':question:'
    path: src/basic/constant.hpp
    title: src/basic/constant.hpp
  - icon: ':question:'
    path: src/basic/equal.hpp
    title: src/basic/equal.hpp
  - icon: ':question:'
    path: src/basic/greater_equal.hpp
    title: src/basic/greater_equal.hpp
  - icon: ':question:'
    path: src/basic/greater_than.hpp
    title: src/basic/greater_than.hpp
  - icon: ':question:'
    path: src/basic/less_equal.hpp
    title: src/basic/less_equal.hpp
  - icon: ':question:'
    path: src/basic/less_than.hpp
    title: src/basic/less_than.hpp
  - icon: ':question:'
    path: src/basic/sign.hpp
    title: src/basic/sign.hpp
  _extendedRequiredBy:
  - icon: ':warning:'
    path: src/all.hpp
    title: src/all.hpp
  - icon: ':warning:'
    path: src/all.hpp
    title: src/all.hpp
  - icon: ':warning:'
    path: src/all.hpp
    title: src/all.hpp
  - icon: ':x:'
    path: src/analysis/golden_ratio_search.hpp
    title: src/analysis/golden_ratio_search.hpp
  - icon: ':x:'
    path: src/analysis/ternary_search.hpp
    title: src/analysis/ternary_search.hpp
  - icon: ':warning:'
    path: src/geometry/centroid.hpp
    title: src/geometry/centroid.hpp
  - icon: ':heavy_check_mark:'
    path: src/geometry/circle.hpp
    title: src/geometry/circle.hpp
  - icon: ':heavy_check_mark:'
    path: src/geometry/circumcircle.hpp
    title: src/geometry/circumcircle.hpp
  - icon: ':warning:'
    path: src/geometry/concyclic.hpp
    title: src/geometry/concyclic.hpp
  - icon: ':question:'
    path: src/geometry/distance.hpp
    title: src/geometry/distance.hpp
  - icon: ':warning:'
    path: src/geometry/excircle.hpp
    title: src/geometry/excircle.hpp
  - icon: ':heavy_check_mark:'
    path: src/geometry/incircle.hpp
    title: src/geometry/incircle.hpp
  - icon: ':warning:'
    path: src/geometry/intersect.hpp
    title: src/geometry/intersect.hpp
  - icon: ':question:'
    path: src/geometry/line.hpp
    title: src/geometry/line.hpp
  - icon: ':warning:'
    path: src/geometry/normal_vector.hpp
    title: src/geometry/normal_vector.hpp
  - icon: ':warning:'
    path: src/geometry/orthocenter.hpp
    title: src/geometry/orthocenter.hpp
  - icon: ':warning:'
    path: src/geometry/orthogonal_check.hpp
    title: src/geometry/orthogonal_check.hpp
  - icon: ':warning:'
    path: src/geometry/parallel_check.hpp
    title: src/geometry/parallel_check.hpp
  - icon: ':question:'
    path: src/geometry/point.hpp
    title: src/geometry/point.hpp
  - icon: ':warning:'
    path: src/geometry/projection.hpp
    title: src/geometry/projection.hpp
  - icon: ':warning:'
    path: src/geometry/rotate.hpp
    title: src/geometry/rotate.hpp
  - icon: ':question:'
    path: src/geometry/segment.hpp
    title: src/geometry/segment.hpp
  - icon: ':heavy_check_mark:'
    path: src/geometry/triangle.hpp
    title: src/geometry/triangle.hpp
  - icon: ':warning:'
    path: src/geometry/unit_vector.hpp
    title: src/geometry/unit_vector.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aizu_online_judge/Library/CGL/7_B.test.cpp
    title: test/aizu_online_judge/Library/CGL/7_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aizu_online_judge/Library/CGL/7_C.test.cpp
    title: test/aizu_online_judge/Library/CGL/7_C.test.cpp
  - icon: ':x:'
    path: test/yukicoder/306-1.test.cpp
    title: test/yukicoder/306-1.test.cpp
  - icon: ':x:'
    path: test/yukicoder/306-1.test.cpp
    title: test/yukicoder/306-1.test.cpp
  - icon: ':x:'
    path: test/yukicoder/306-2.test.cpp
    title: test/yukicoder/306-2.test.cpp
  - icon: ':x:'
    path: test/yukicoder/306-2.test.cpp
    title: test/yukicoder/306-2.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':question:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/basic/comparison.hpp\"\n\n\n\n#line 1 \"src/basic/equal.hpp\"\
    \n\n\n\n#line 1 \"src/basic/sign.hpp\"\n\n\n\n#line 1 \"src/basic/constant.hpp\"\
    \n\n\n\nnamespace BanetteGin {\n\nconst long double EPS = 10e-12L;\nconst long\
    \ long int LINF = 1001001001001001001LL;\nconst long double PI = acos(-1.0L);\n\
    const long double GOLDEN_RATIO = 2.0L * cos(PI / 5.0L);\n\n}  // namespace BanetteGin\n\
    \n\n#line 5 \"src/basic/sign.hpp\"\n\nnamespace BanetteGin {\n\ntemplate <class\
    \ T>\nint sign(const T& x) {\n    return (x < -EPS ? -1 : (x < EPS ? 0 : 1));\n\
    }\n\n}  // namespace BanetteGin\n\n\n#line 5 \"src/basic/equal.hpp\"\n\nnamespace\
    \ BanetteGin {\n\ntemplate <class T>\nbool equal(const T &a, const T &b) {\n \
    \   return (sign(a - b) == 0);\n}\n\n}  // namespace BanetteGin\n\n\n#line 1 \"\
    src/basic/greater_equal.hpp\"\n\n\n\nnamespace BanetteGin {\n\ntemplate <class\
    \ T>\nbool greater_equal(const T &a, const T &b) {\n    return (sign(a - b) >=\
    \ 0);\n}\n\n}  // namespace BanetteGin\n\n\n#line 1 \"src/basic/greater_than.hpp\"\
    \n\n\n\nnamespace BanetteGin {\n\ntemplate <class T>\nbool greater_than(const\
    \ T &a, const T &b) {\n    return (sign(a - b) > 0);\n}\n\n}  // namespace BanetteGin\n\
    \n\n#line 1 \"src/basic/less_equal.hpp\"\n\n\n\nnamespace BanetteGin {\n\ntemplate\
    \ <class T>\nbool less_equal(const T &a, const T &b) {\n    return (sign(a - b)\
    \ <= 0);\n}\n\n}  // namespace BanetteGin\n\n\n#line 1 \"src/basic/less_than.hpp\"\
    \n\n\n\nnamespace BanetteGin {\n\ntemplate <class T>\nbool less_than(const T &a,\
    \ const T &b) {\n    return (sign(a - b) < 0);\n}\n\n}  // namespace BanetteGin\n\
    \n\n#line 9 \"src/basic/comparison.hpp\"\n\n\n"
  code: '#ifndef BANETTEGIN_COMPARISON_HPP_INCLUDED

    #define BANETTEGIN_COMPARISON_HPP_INCLUDED


    #include "equal.hpp"

    #include "greater_equal.hpp"

    #include "greater_than.hpp"

    #include "less_equal.hpp"

    #include "less_than.hpp"


    #endif'
  dependsOn:
  - src/basic/equal.hpp
  - src/basic/sign.hpp
  - src/basic/constant.hpp
  - src/basic/greater_equal.hpp
  - src/basic/greater_than.hpp
  - src/basic/less_equal.hpp
  - src/basic/less_than.hpp
  isVerificationFile: false
  path: src/basic/comparison.hpp
  requiredBy:
  - src/all.hpp
  - src/all.hpp
  - src/all.hpp
  - src/analysis/golden_ratio_search.hpp
  - src/analysis/ternary_search.hpp
  - src/geometry/normal_vector.hpp
  - src/geometry/circle.hpp
  - src/geometry/parallel_check.hpp
  - src/geometry/rotate.hpp
  - src/geometry/projection.hpp
  - src/geometry/distance.hpp
  - src/geometry/point.hpp
  - src/geometry/concyclic.hpp
  - src/geometry/orthogonal_check.hpp
  - src/geometry/circumcircle.hpp
  - src/geometry/orthocenter.hpp
  - src/geometry/unit_vector.hpp
  - src/geometry/line.hpp
  - src/geometry/excircle.hpp
  - src/geometry/incircle.hpp
  - src/geometry/triangle.hpp
  - src/geometry/centroid.hpp
  - src/geometry/segment.hpp
  - src/geometry/intersect.hpp
  timestamp: '2023-09-08 21:12:14+09:00'
  verificationStatus: LIBRARY_SOME_WA
  verifiedWith:
  - test/aizu_online_judge/Library/CGL/7_C.test.cpp
  - test/aizu_online_judge/Library/CGL/7_B.test.cpp
  - test/yukicoder/306-2.test.cpp
  - test/yukicoder/306-2.test.cpp
  - test/yukicoder/306-1.test.cpp
  - test/yukicoder/306-1.test.cpp
documentation_of: src/basic/comparison.hpp
layout: document
redirect_from:
- /library/src/basic/comparison.hpp
- /library/src/basic/comparison.hpp.html
title: src/basic/comparison.hpp
---

---
data:
  _extendedDependsOn:
  - icon: ':warning:'
    path: src/basic/constant.hpp
    title: src/basic/constant.hpp
  - icon: ':warning:'
    path: src/basic/equal.hpp
    title: src/basic/equal.hpp
  - icon: ':warning:'
    path: src/basic/greater_equal.hpp
    title: src/basic/greater_equal.hpp
  - icon: ':warning:'
    path: src/basic/greater_than.hpp
    title: src/basic/greater_than.hpp
  - icon: ':warning:'
    path: src/basic/less_equal.hpp
    title: src/basic/less_equal.hpp
  - icon: ':warning:'
    path: src/basic/less_than.hpp
    title: src/basic/less_than.hpp
  - icon: ':warning:'
    path: src/basic/sign.hpp
    title: src/basic/sign.hpp
  _extendedRequiredBy:
  - icon: ':warning:'
    path: src/analysis/golden_ratio_search.hpp
    title: src/analysis/golden_ratio_search.hpp
  - icon: ':warning:'
    path: src/analysis/ternary_search.hpp
    title: src/analysis/ternary_search.hpp
  - icon: ':warning:'
    path: src/geometry/centroid.hpp
    title: src/geometry/centroid.hpp
  - icon: ':warning:'
    path: src/geometry/circle.hpp
    title: src/geometry/circle.hpp
  - icon: ':warning:'
    path: src/geometry/circumcenter.hpp
    title: src/geometry/circumcenter.hpp
  - icon: ':warning:'
    path: src/geometry/circumradius.hpp
    title: src/geometry/circumradius.hpp
  - icon: ':warning:'
    path: src/geometry/concyclic.hpp
    title: src/geometry/concyclic.hpp
  - icon: ':warning:'
    path: src/geometry/distance_point_and_line.hpp
    title: src/geometry/distance_point_and_line.hpp
  - icon: ':warning:'
    path: src/geometry/distance_point_and_point.hpp
    title: src/geometry/distance_point_and_point.hpp
  - icon: ':warning:'
    path: src/geometry/distance_point_and_segment.hpp
    title: src/geometry/distance_point_and_segment.hpp
  - icon: ':warning:'
    path: src/geometry/distance_segment_and_segment.hpp
    title: src/geometry/distance_segment_and_segment.hpp
  - icon: ':warning:'
    path: src/geometry/excenter.hpp
    title: src/geometry/excenter.hpp
  - icon: ':warning:'
    path: src/geometry/incenter.hpp
    title: src/geometry/incenter.hpp
  - icon: ':warning:'
    path: src/geometry/inradius.hpp
    title: src/geometry/inradius.hpp
  - icon: ':warning:'
    path: src/geometry/intersect_circle_and_circle.hpp
    title: src/geometry/intersect_circle_and_circle.hpp
  - icon: ':warning:'
    path: src/geometry/intersect_line_and_circle.hpp
    title: src/geometry/intersect_line_and_circle.hpp
  - icon: ':warning:'
    path: src/geometry/line.hpp
    title: src/geometry/line.hpp
  - icon: ':warning:'
    path: src/geometry/orthocenter.hpp
    title: src/geometry/orthocenter.hpp
  - icon: ':warning:'
    path: src/geometry/orthogonal_check.hpp
    title: src/geometry/orthogonal_check.hpp
  - icon: ':warning:'
    path: src/geometry/parallel_check.hpp
    title: src/geometry/parallel_check.hpp
  - icon: ':warning:'
    path: src/geometry/point.hpp
    title: src/geometry/point.hpp
  - icon: ':warning:'
    path: src/geometry/rotate.hpp
    title: src/geometry/rotate.hpp
  - icon: ':warning:'
    path: src/geometry/segment.hpp
    title: src/geometry/segment.hpp
  - icon: ':warning:'
    path: src/geometry/triangle.hpp
    title: src/geometry/triangle.hpp
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/basic/comparison.hpp\"\n\n\n\n#line 1 \"src/basic/equal.hpp\"\
    \n\n\n\n#line 1 \"src/basic/sign.hpp\"\n\n\n\n#line 1 \"src/basic/constant.hpp\"\
    \n\n\n\nnamespace BanetteGin {\n\nconst long double EPS = 10e-12;\nconst long\
    \ long int LINF = 1001001001001001001LL;\nconst long double PI = acos(-1);\nconst\
    \ long double GOLDEN_RATIO = 2 * cos(PI / 5);\n\n}  // namespace BanetteGin\n\n\
    \n#line 5 \"src/basic/sign.hpp\"\n\nnamespace BanetteGin {\n\ntemplate <class\
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
  - src/analysis/golden_ratio_search.hpp
  - src/analysis/ternary_search.hpp
  - src/geometry/distance_point_and_point.hpp
  - src/geometry/intersect_line_and_circle.hpp
  - src/geometry/circle.hpp
  - src/geometry/parallel_check.hpp
  - src/geometry/rotate.hpp
  - src/geometry/circumcenter.hpp
  - src/geometry/inradius.hpp
  - src/geometry/point.hpp
  - src/geometry/concyclic.hpp
  - src/geometry/orthogonal_check.hpp
  - src/geometry/excenter.hpp
  - src/geometry/circumradius.hpp
  - src/geometry/orthocenter.hpp
  - src/geometry/line.hpp
  - src/geometry/distance_point_and_segment.hpp
  - src/geometry/distance_segment_and_segment.hpp
  - src/geometry/incenter.hpp
  - src/geometry/triangle.hpp
  - src/geometry/distance_point_and_line.hpp
  - src/geometry/intersect_circle_and_circle.hpp
  - src/geometry/centroid.hpp
  - src/geometry/segment.hpp
  timestamp: '2023-08-22 02:10:12+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/basic/comparison.hpp
layout: document
redirect_from:
- /library/src/basic/comparison.hpp
- /library/src/basic/comparison.hpp.html
title: src/basic/comparison.hpp
---

---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: src/basic/constant.hpp
    title: src/basic/constant.hpp
  - icon: ':x:'
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
  - icon: ':warning:'
    path: src/analysis/golden_ratio_search.hpp
    title: src/analysis/golden_ratio_search.hpp
  - icon: ':warning:'
    path: src/analysis/ternary_search.hpp
    title: src/analysis/ternary_search.hpp
  - icon: ':x:'
    path: src/basic/comparison.hpp
    title: src/basic/comparison.hpp
  - icon: ':warning:'
    path: src/geometry/centroid.hpp
    title: src/geometry/centroid.hpp
  - icon: ':warning:'
    path: src/geometry/centroid.hpp
    title: src/geometry/centroid.hpp
  - icon: ':x:'
    path: src/geometry/circle.hpp
    title: src/geometry/circle.hpp
  - icon: ':x:'
    path: src/geometry/circle.hpp
    title: src/geometry/circle.hpp
  - icon: ':x:'
    path: src/geometry/circumcircle.hpp
    title: src/geometry/circumcircle.hpp
  - icon: ':x:'
    path: src/geometry/circumcircle.hpp
    title: src/geometry/circumcircle.hpp
  - icon: ':warning:'
    path: src/geometry/concyclic.hpp
    title: src/geometry/concyclic.hpp
  - icon: ':warning:'
    path: src/geometry/distance_point_and_line.hpp
    title: src/geometry/distance_point_and_line.hpp
  - icon: ':x:'
    path: src/geometry/distance_point_and_point.hpp
    title: src/geometry/distance_point_and_point.hpp
  - icon: ':warning:'
    path: src/geometry/distance_point_and_segment.hpp
    title: src/geometry/distance_point_and_segment.hpp
  - icon: ':warning:'
    path: src/geometry/distance_segment_and_segment.hpp
    title: src/geometry/distance_segment_and_segment.hpp
  - icon: ':warning:'
    path: src/geometry/excircle.hpp
    title: src/geometry/excircle.hpp
  - icon: ':warning:'
    path: src/geometry/excircle.hpp
    title: src/geometry/excircle.hpp
  - icon: ':x:'
    path: src/geometry/incircle.hpp
    title: src/geometry/incircle.hpp
  - icon: ':x:'
    path: src/geometry/incircle.hpp
    title: src/geometry/incircle.hpp
  - icon: ':warning:'
    path: src/geometry/intersect_circle_and_circle.hpp
    title: src/geometry/intersect_circle_and_circle.hpp
  - icon: ':warning:'
    path: src/geometry/intersect_circle_and_circle.hpp
    title: src/geometry/intersect_circle_and_circle.hpp
  - icon: ':warning:'
    path: src/geometry/intersect_line_and_circle.hpp
    title: src/geometry/intersect_line_and_circle.hpp
  - icon: ':warning:'
    path: src/geometry/intersect_line_and_circle.hpp
    title: src/geometry/intersect_line_and_circle.hpp
  - icon: ':warning:'
    path: src/geometry/line.hpp
    title: src/geometry/line.hpp
  - icon: ':warning:'
    path: src/geometry/normal_vector.hpp
    title: src/geometry/normal_vector.hpp
  - icon: ':warning:'
    path: src/geometry/orthocenter.hpp
    title: src/geometry/orthocenter.hpp
  - icon: ':warning:'
    path: src/geometry/orthocenter.hpp
    title: src/geometry/orthocenter.hpp
  - icon: ':warning:'
    path: src/geometry/orthogonal_check.hpp
    title: src/geometry/orthogonal_check.hpp
  - icon: ':warning:'
    path: src/geometry/orthogonal_check.hpp
    title: src/geometry/orthogonal_check.hpp
  - icon: ':warning:'
    path: src/geometry/parallel_check.hpp
    title: src/geometry/parallel_check.hpp
  - icon: ':x:'
    path: src/geometry/point.hpp
    title: src/geometry/point.hpp
  - icon: ':warning:'
    path: src/geometry/rotate.hpp
    title: src/geometry/rotate.hpp
  - icon: ':x:'
    path: src/geometry/segment.hpp
    title: src/geometry/segment.hpp
  - icon: ':x:'
    path: src/geometry/triangle.hpp
    title: src/geometry/triangle.hpp
  - icon: ':x:'
    path: src/geometry/triangle.hpp
    title: src/geometry/triangle.hpp
  - icon: ':warning:'
    path: src/geometry/unit_vector.hpp
    title: src/geometry/unit_vector.hpp
  _extendedVerifiedWith:
  - icon: ':x:'
    path: test/aizu_online_judge/Library/CGL/7_B.test.cpp
    title: test/aizu_online_judge/Library/CGL/7_B.test.cpp
  - icon: ':x:'
    path: test/aizu_online_judge/Library/CGL/7_B.test.cpp
    title: test/aizu_online_judge/Library/CGL/7_B.test.cpp
  - icon: ':x:'
    path: test/aizu_online_judge/Library/CGL/7_C.test.cpp
    title: test/aizu_online_judge/Library/CGL/7_C.test.cpp
  - icon: ':x:'
    path: test/aizu_online_judge/Library/CGL/7_C.test.cpp
    title: test/aizu_online_judge/Library/CGL/7_C.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':x:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/basic/equal.hpp\"\n\n\n\n#line 1 \"src/basic/sign.hpp\"\
    \n\n\n\n#line 1 \"src/basic/constant.hpp\"\n\n\n\nnamespace BanetteGin {\n\nconst\
    \ long double EPS = 10e-12;\nconst long long int LINF = 1001001001001001001LL;\n\
    const long double PI = acos(-1);\nconst long double GOLDEN_RATIO = 2 * cos(PI\
    \ / 5);\n\n}  // namespace BanetteGin\n\n\n#line 5 \"src/basic/sign.hpp\"\n\n\
    namespace BanetteGin {\n\ntemplate <class T>\nint sign(const T& x) {\n    return\
    \ (x < -EPS ? -1 : (x < EPS ? 0 : 1));\n}\n\n}  // namespace BanetteGin\n\n\n\
    #line 5 \"src/basic/equal.hpp\"\n\nnamespace BanetteGin {\n\ntemplate <class T>\n\
    bool equal(const T &a, const T &b) {\n    return (sign(a - b) == 0);\n}\n\n} \
    \ // namespace BanetteGin\n\n\n"
  code: "#ifndef BANETTEGIN_EQUAL_HPP_INCLUDED\n#define BANETTEGIN_EQUAL_HPP_INCLUDED\n\
    \n#include \"sign.hpp\"\n\nnamespace BanetteGin {\n\ntemplate <class T>\nbool\
    \ equal(const T &a, const T &b) {\n    return (sign(a - b) == 0);\n}\n\n}  //\
    \ namespace BanetteGin\n\n#endif"
  dependsOn:
  - src/basic/sign.hpp
  - src/basic/constant.hpp
  isVerificationFile: false
  path: src/basic/equal.hpp
  requiredBy:
  - src/all.hpp
  - src/all.hpp
  - src/all.hpp
  - src/basic/comparison.hpp
  - src/analysis/golden_ratio_search.hpp
  - src/analysis/ternary_search.hpp
  - src/geometry/normal_vector.hpp
  - src/geometry/distance_point_and_point.hpp
  - src/geometry/intersect_line_and_circle.hpp
  - src/geometry/intersect_line_and_circle.hpp
  - src/geometry/circle.hpp
  - src/geometry/circle.hpp
  - src/geometry/parallel_check.hpp
  - src/geometry/rotate.hpp
  - src/geometry/point.hpp
  - src/geometry/concyclic.hpp
  - src/geometry/orthogonal_check.hpp
  - src/geometry/orthogonal_check.hpp
  - src/geometry/circumcircle.hpp
  - src/geometry/circumcircle.hpp
  - src/geometry/orthocenter.hpp
  - src/geometry/orthocenter.hpp
  - src/geometry/unit_vector.hpp
  - src/geometry/line.hpp
  - src/geometry/excircle.hpp
  - src/geometry/excircle.hpp
  - src/geometry/distance_point_and_segment.hpp
  - src/geometry/distance_segment_and_segment.hpp
  - src/geometry/incircle.hpp
  - src/geometry/incircle.hpp
  - src/geometry/triangle.hpp
  - src/geometry/triangle.hpp
  - src/geometry/distance_point_and_line.hpp
  - src/geometry/intersect_circle_and_circle.hpp
  - src/geometry/intersect_circle_and_circle.hpp
  - src/geometry/centroid.hpp
  - src/geometry/centroid.hpp
  - src/geometry/segment.hpp
  timestamp: '2023-08-22 02:10:12+09:00'
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - test/aizu_online_judge/Library/CGL/7_C.test.cpp
  - test/aizu_online_judge/Library/CGL/7_C.test.cpp
  - test/aizu_online_judge/Library/CGL/7_B.test.cpp
  - test/aizu_online_judge/Library/CGL/7_B.test.cpp
documentation_of: src/basic/equal.hpp
layout: document
redirect_from:
- /library/src/basic/equal.hpp
- /library/src/basic/equal.hpp.html
title: src/basic/equal.hpp
---

---
data:
  _extendedDependsOn:
  - icon: ':warning:'
    path: src/basic/constant.hpp
    title: src/basic/constant.hpp
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
    path: src/basic/equal.hpp
    title: src/basic/equal.hpp
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
  bundledCode: "#line 1 \"src/basic/sign.hpp\"\n\n\n\n#line 1 \"src/basic/constant.hpp\"\
    \n\n\n\nnamespace BanetteGin {\n\nconst long double EPS = 10e-12;\nconst long\
    \ long int LINF = 1001001001001001001LL;\nconst long double PI = acos(-1);\nconst\
    \ long double GOLDEN_RATIO = 2 * cos(PI / 5);\n\n}  // namespace BanetteGin\n\n\
    \n#line 5 \"src/basic/sign.hpp\"\n\nnamespace BanetteGin {\n\ntemplate <class\
    \ T>\nint sign(const T& x) {\n    return (x < -EPS ? -1 : (x < EPS ? 0 : 1));\n\
    }\n\n}  // namespace BanetteGin\n\n\n"
  code: "#ifndef BANETTEGIN_SIGN_HPP_INCLUDED\n#define BANETTEGIN_SIGN_HPP_INCLUDED\n\
    \n#include \"constant.hpp\"\n\nnamespace BanetteGin {\n\ntemplate <class T>\n\
    int sign(const T& x) {\n    return (x < -EPS ? -1 : (x < EPS ? 0 : 1));\n}\n\n\
    }  // namespace BanetteGin\n\n#endif"
  dependsOn:
  - src/basic/constant.hpp
  isVerificationFile: false
  path: src/basic/sign.hpp
  requiredBy:
  - src/basic/equal.hpp
  - src/basic/comparison.hpp
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
  - src/geometry/orthogonal_check.hpp
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
documentation_of: src/basic/sign.hpp
layout: document
redirect_from:
- /library/src/basic/sign.hpp
- /library/src/basic/sign.hpp.html
title: src/basic/sign.hpp
---

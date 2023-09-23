---
data:
  _extendedDependsOn: []
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
    path: src/all.hpp
    title: src/all.hpp
  - icon: ':warning:'
    path: src/all.hpp
    title: src/all.hpp
  - icon: ':warning:'
    path: src/all.hpp
    title: src/all.hpp
  - icon: ':heavy_check_mark:'
    path: src/analysis/golden_ratio_search.hpp
    title: src/analysis/golden_ratio_search.hpp
  - icon: ':heavy_check_mark:'
    path: src/analysis/golden_ratio_search.hpp
    title: src/analysis/golden_ratio_search.hpp
  - icon: ':heavy_check_mark:'
    path: src/analysis/ternary_search.hpp
    title: src/analysis/ternary_search.hpp
  - icon: ':heavy_check_mark:'
    path: src/analysis/ternary_search.hpp
    title: src/analysis/ternary_search.hpp
  - icon: ':heavy_check_mark:'
    path: src/basic/comparison.hpp
    title: src/basic/comparison.hpp
  - icon: ':heavy_check_mark:'
    path: src/basic/equal.hpp
    title: src/basic/equal.hpp
  - icon: ':heavy_check_mark:'
    path: src/basic/sign.hpp
    title: src/basic/sign.hpp
  - icon: ':warning:'
    path: src/data_structure/segment_tree.hpp
    title: src/data_structure/segment_tree.hpp
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
  - icon: ':warning:'
    path: src/geometry/degree_to_radian.hpp
    title: src/geometry/degree_to_radian.hpp
  - icon: ':heavy_check_mark:'
    path: src/geometry/distance.hpp
    title: src/geometry/distance.hpp
  - icon: ':warning:'
    path: src/geometry/excircle.hpp
    title: src/geometry/excircle.hpp
  - icon: ':warning:'
    path: src/geometry/geometry.hpp
    title: src/geometry/geometry.hpp
  - icon: ':warning:'
    path: src/geometry/geometry.hpp
    title: src/geometry/geometry.hpp
  - icon: ':heavy_check_mark:'
    path: src/geometry/incircle.hpp
    title: src/geometry/incircle.hpp
  - icon: ':warning:'
    path: src/geometry/intersect.hpp
    title: src/geometry/intersect.hpp
  - icon: ':heavy_check_mark:'
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
  - icon: ':heavy_check_mark:'
    path: src/geometry/point.hpp
    title: src/geometry/point.hpp
  - icon: ':warning:'
    path: src/geometry/projection.hpp
    title: src/geometry/projection.hpp
  - icon: ':warning:'
    path: src/geometry/radian_to_degree.hpp
    title: src/geometry/radian_to_degree.hpp
  - icon: ':warning:'
    path: src/geometry/rotate.hpp
    title: src/geometry/rotate.hpp
  - icon: ':heavy_check_mark:'
    path: src/geometry/segment.hpp
    title: src/geometry/segment.hpp
  - icon: ':heavy_check_mark:'
    path: src/geometry/triangle.hpp
    title: src/geometry/triangle.hpp
  - icon: ':warning:'
    path: src/geometry/unit_vector.hpp
    title: src/geometry/unit_vector.hpp
  - icon: ':warning:'
    path: src/graph/dijkstra.hpp
    title: src/graph/dijkstra.hpp
  - icon: ':warning:'
    path: src/string/clip_string.hpp
    title: src/string/clip_string.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aizu_online_judge/Library/CGL/7_B.test.cpp
    title: test/aizu_online_judge/Library/CGL/7_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aizu_online_judge/Library/CGL/7_C.test.cpp
    title: test/aizu_online_judge/Library/CGL/7_C.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/yukicoder/306-1.test.cpp
    title: test/yukicoder/306-1.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/yukicoder/306-1.test.cpp
    title: test/yukicoder/306-1.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/yukicoder/306-2.test.cpp
    title: test/yukicoder/306-2.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/yukicoder/306-2.test.cpp
    title: test/yukicoder/306-2.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: '#line 1 "src/basic/constant.hpp"




    namespace BanetteGin {


    const long double EPS = 1e-16L;

    const long long int LINF = 1001001001001001001LL;

    const long double PI = acos(-1.0L);

    const long double GOLDEN_RATIO = (1 + sqrt(5)) / 2;


    }  // namespace BanetteGin



    '
  code: '#ifndef BANETTEGIN_CONSTANT_HPP_INCLUDED

    #define BANETTEGIN_CONSTANT_HPP_INCLUDED


    namespace BanetteGin {


    const long double EPS = 1e-16L;

    const long long int LINF = 1001001001001001001LL;

    const long double PI = acos(-1.0L);

    const long double GOLDEN_RATIO = (1 + sqrt(5)) / 2;


    }  // namespace BanetteGin


    #endif'
  dependsOn: []
  isVerificationFile: false
  path: src/basic/constant.hpp
  requiredBy:
  - src/basic/equal.hpp
  - src/basic/comparison.hpp
  - src/basic/sign.hpp
  - src/analysis/golden_ratio_search.hpp
  - src/analysis/golden_ratio_search.hpp
  - src/analysis/ternary_search.hpp
  - src/analysis/ternary_search.hpp
  - src/data_structure/segment_tree.hpp
  - src/all.hpp
  - src/all.hpp
  - src/all.hpp
  - src/all.hpp
  - src/all.hpp
  - src/all.hpp
  - src/graph/dijkstra.hpp
  - src/string/clip_string.hpp
  - src/geometry/radian_to_degree.hpp
  - src/geometry/orthogonal_check.hpp
  - src/geometry/circumcircle.hpp
  - src/geometry/intersect.hpp
  - src/geometry/degree_to_radian.hpp
  - src/geometry/segment.hpp
  - src/geometry/triangle.hpp
  - src/geometry/normal_vector.hpp
  - src/geometry/geometry.hpp
  - src/geometry/geometry.hpp
  - src/geometry/point.hpp
  - src/geometry/orthocenter.hpp
  - src/geometry/distance.hpp
  - src/geometry/excircle.hpp
  - src/geometry/centroid.hpp
  - src/geometry/concyclic.hpp
  - src/geometry/unit_vector.hpp
  - src/geometry/circle.hpp
  - src/geometry/projection.hpp
  - src/geometry/rotate.hpp
  - src/geometry/incircle.hpp
  - src/geometry/parallel_check.hpp
  - src/geometry/line.hpp
  timestamp: '2023-09-23 20:13:43+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yukicoder/306-1.test.cpp
  - test/yukicoder/306-1.test.cpp
  - test/yukicoder/306-2.test.cpp
  - test/yukicoder/306-2.test.cpp
  - test/aizu_online_judge/Library/CGL/7_C.test.cpp
  - test/aizu_online_judge/Library/CGL/7_B.test.cpp
documentation_of: src/basic/constant.hpp
layout: document
redirect_from:
- /library/src/basic/constant.hpp
- /library/src/basic/constant.hpp.html
title: src/basic/constant.hpp
---

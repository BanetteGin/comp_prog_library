---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.11.5/x64/lib/python3.11/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n          \
    \         ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\
    \  File \"/opt/hostedtoolcache/Python/3.11.5/x64/lib/python3.11/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.11.5/x64/lib/python3.11/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \                ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n \
    \ File \"/opt/hostedtoolcache/Python/3.11.5/x64/lib/python3.11/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 260, in _resolve\n    raise BundleErrorAt(path, -1, \"no such header\"\
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: analysis\\golden_ratio_search.hpp:\
    \ line -1: no such header\n"
  code: '#ifndef BANETTEGIN_ALL_HPP_INCLUDED

    #define BANETTEGIN_ALL_HPP_INCLUDED


    #include "analysis\golden_ratio_search.hpp"

    #include "analysis\ternary_search.hpp"

    #include "basic\chmax.hpp"

    #include "basic\chmin.hpp"

    #include "basic\comparison.hpp"

    #include "basic\constant.hpp"

    #include "basic\equal.hpp"

    #include "basic\greater_equal.hpp"

    #include "basic\greater_than.hpp"

    #include "basic\less_equal.hpp"

    #include "basic\less_than.hpp"

    #include "basic\sign.hpp"

    #include "combinatorics\combination.hpp"

    #include "combinatorics\homogenous_product.hpp"

    #include "combinatorics\permutation.hpp"

    #include "data_structure\binary_indexed_tree.hpp"

    #include "data_structure\hold_ends.hpp"

    #include "data_structure\segment_tree.hpp"

    #include "data_structure\union_find.hpp"

    #include "geometry\centroid.hpp"

    #include "geometry\circle.hpp"

    #include "geometry\circumcenter.hpp"

    #include "geometry\degree_to_radian.hpp"

    #include "geometry\distance_point_and_line.hpp"

    #include "geometry\distance_point_and_point.hpp"

    #include "geometry\distance_point_and_segment.hpp"

    #include "geometry\distance_segment_and_segment.hpp"

    #include "geometry\incenter.hpp"

    #include "geometry\intersect_circle_and_circle.hpp"

    #include "geometry\intersect_line_and_circle.hpp"

    #include "geometry\line.hpp"

    #include "geometry\orthocenter.hpp"

    #include "geometry\orthogonal_check.hpp"

    #include "geometry\parallel_check.hpp"

    #include "geometry\point.hpp"

    #include "geometry\radian_to_degree.hpp"

    #include "geometry\rotate.hpp"

    #include "geometry\segment.hpp"

    #include "geometry\triangle.hpp"

    #include "graph\edge.hpp"

    #include "graph\find_cycle_by_dfs.hpp"

    #include "graph\topological_sort.hpp"

    #include "matrix\matrix_operation.hpp"

    #include "matrix\matrix_rotate.hpp"

    #include "number_theory\base_change.hpp"

    #include "number_theory\divisors.hpp"

    #include "number_theory\dynamic_modint.hpp"

    #include "number_theory\eratosthenes_sieve.hpp"

    #include "number_theory\greatest_common_divisor.hpp"

    #include "number_theory\linear_sieve.hpp"

    #include "number_theory\modint.hpp"

    #include "number_theory\naive_sieve.hpp"

    #include "number_theory\prime_check.hpp"

    #include "number_theory\prime_factorization.hpp"

    #include "number_theory\sundaram_sieve.hpp"

    #include "string\clip_string.hpp"

    #include "string\rotate_string.hpp"

    #include "string\run_length_encording.hpp"


    #endif'
  dependsOn: []
  isVerificationFile: false
  path: src/all.hpp
  requiredBy: []
  timestamp: '1970-01-01 00:00:00+00:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/all.hpp
layout: document
redirect_from:
- /library/src/all.hpp
- /library/src/all.hpp.html
title: src/all.hpp
---

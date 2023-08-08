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
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.11.4/x64/lib/python3.11/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n          \
    \         ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\
    \  File \"/opt/hostedtoolcache/Python/3.11.4/x64/lib/python3.11/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.11.4/x64/lib/python3.11/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \                ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n \
    \ File \"/opt/hostedtoolcache/Python/3.11.4/x64/lib/python3.11/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 260, in _resolve\n    raise BundleErrorAt(path, -1, \"no such header\"\
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: base_change.hpp:\
    \ line -1: no such header\n"
  code: '#ifndef BANETTEGIN_ALL_HPP_INCLUDED

    #define BANETTEGIN_ALL_HPP_INCLUDED


    #include "base_change.hpp"

    #include "binary_indexed_tree.hpp"

    #include "chmax.hpp"

    #include "chmin.hpp"

    #include "circle.hpp"

    #include "clip_string.hpp"

    #include "combination.hpp"

    #include "constant.hpp"

    #include "divisors.hpp"

    #include "edge.hpp"

    #include "equal.hpp"

    #include "eratosthenes_sieve.hpp"

    #include "find_cycle_by_dfs.hpp"

    #include "greatest_common_divisor.hpp"

    #include "hold_ends.hpp"

    #include "homogenous_product.hpp"

    #include "line.hpp"

    #include "linear_sieve.hpp"

    #include "matrix_product.hpp"

    #include "modint.hpp"

    #include "naive_sieve.hpp"

    #include "permutation.hpp"

    #include "point.hpp"

    #include "prime_check.hpp"

    #include "prime_factorization.hpp"

    #include "rotate_string.hpp"

    #include "run_length_encording.hpp"

    #include "segment.hpp"

    #include "segment_tree.hpp"

    #include "sundaram_sieve.hpp"

    #include "topological_sort.hpp"

    #include "triangle.hpp"

    #include "union_find.hpp"


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

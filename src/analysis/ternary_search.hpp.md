---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/basic/comparison.hpp
    title: src/basic/comparison.hpp
  - icon: ':heavy_check_mark:'
    path: src/basic/constant.hpp
    title: src/basic/constant.hpp
  - icon: ':heavy_check_mark:'
    path: src/basic/constant.hpp
    title: src/basic/constant.hpp
  - icon: ':heavy_check_mark:'
    path: src/basic/equal.hpp
    title: src/basic/equal.hpp
  - icon: ':heavy_check_mark:'
    path: src/basic/greater_equal.hpp
    title: src/basic/greater_equal.hpp
  - icon: ':heavy_check_mark:'
    path: src/basic/greater_than.hpp
    title: src/basic/greater_than.hpp
  - icon: ':heavy_check_mark:'
    path: src/basic/less_equal.hpp
    title: src/basic/less_equal.hpp
  - icon: ':heavy_check_mark:'
    path: src/basic/less_than.hpp
    title: src/basic/less_than.hpp
  - icon: ':heavy_check_mark:'
    path: src/basic/sign.hpp
    title: src/basic/sign.hpp
  _extendedRequiredBy:
  - icon: ':warning:'
    path: src/all.hpp
    title: src/all.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/yukicoder/306-1.test.cpp
    title: test/yukicoder/306-1.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/analysis/ternary_search.hpp\"\n\n\n\n#include <cmath>\n\
    \n#line 1 \"src/basic/comparison.hpp\"\n\n\n\n#line 1 \"src/basic/equal.hpp\"\n\
    \n\n\n#line 1 \"src/basic/sign.hpp\"\n\n\n\n#line 1 \"src/basic/constant.hpp\"\
    \n\n\n\nnamespace BanetteGin {\n\nconst long double EPS = 1e-15L;\nconst long\
    \ long int LINF = 1001001001001001001LL;\nconst long double PI = acos(-1.0L);\n\
    const long double GOLDEN_RATIO = (1 + sqrt(5)) / 2;\n\n}  // namespace BanetteGin\n\
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
    \n\n#line 9 \"src/basic/comparison.hpp\"\n\n\n#line 8 \"src/analysis/ternary_search.hpp\"\
    \n\nnamespace BanetteGin {\n\ntemplate <class T, class Function>\nT ternary_search(T\
    \ left, T right, Function&& func, bool minimize = true) {\n    assert(greater_equal(right,\
    \ left));\n    long long int iter = (long long int)((std::log(right - left) -\
    \ std::log(EPS)) / std::log(T(3.0 / 2.0)) + 1);\n    while (iter--) {\n      \
    \  T mid1 = (left * T(2.0) + right) / T(3.0);\n        T mid2 = (left + right\
    \ * T(2.0)) / T(3.0);\n        T a = func(mid1);\n        T b = func(mid2);\n\
    \        if (minimize ^ less_equal(a, b)) {\n            left = mid1;\n      \
    \  } else {\n            right = mid2;\n        }\n    }\n    return left;\n}\n\
    \n}  // namespace BanetteGin\n\n\n"
  code: "#ifndef BANETTEGIN_TERNARY_SEARCH_HPP_INCLUDED\n#define BANETTEGIN_TERNARY_SEARCH_HPP_INCLUDED\n\
    \n#include <cmath>\n\n#include \"../basic/comparison.hpp\"\n#include \"../basic/constant.hpp\"\
    \n\nnamespace BanetteGin {\n\ntemplate <class T, class Function>\nT ternary_search(T\
    \ left, T right, Function&& func, bool minimize = true) {\n    assert(greater_equal(right,\
    \ left));\n    long long int iter = (long long int)((std::log(right - left) -\
    \ std::log(EPS)) / std::log(T(3.0 / 2.0)) + 1);\n    while (iter--) {\n      \
    \  T mid1 = (left * T(2.0) + right) / T(3.0);\n        T mid2 = (left + right\
    \ * T(2.0)) / T(3.0);\n        T a = func(mid1);\n        T b = func(mid2);\n\
    \        if (minimize ^ less_equal(a, b)) {\n            left = mid1;\n      \
    \  } else {\n            right = mid2;\n        }\n    }\n    return left;\n}\n\
    \n}  // namespace BanetteGin\n\n#endif"
  dependsOn:
  - src/basic/comparison.hpp
  - src/basic/equal.hpp
  - src/basic/sign.hpp
  - src/basic/constant.hpp
  - src/basic/greater_equal.hpp
  - src/basic/greater_than.hpp
  - src/basic/less_equal.hpp
  - src/basic/less_than.hpp
  - src/basic/constant.hpp
  isVerificationFile: false
  path: src/analysis/ternary_search.hpp
  requiredBy:
  - src/all.hpp
  timestamp: '2023-09-23 20:16:43+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yukicoder/306-1.test.cpp
documentation_of: src/analysis/ternary_search.hpp
layout: document
redirect_from:
- /library/src/analysis/ternary_search.hpp
- /library/src/analysis/ternary_search.hpp.html
title: src/analysis/ternary_search.hpp
---

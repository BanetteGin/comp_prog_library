---
data:
  _extendedDependsOn: []
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
  bundledCode: "#line 1 \"src/sorting/bubble_sort.hpp\"\n\n\n\n#include <vector>\n\
    \nnamespace BanetteGin {\n\ntemplate <class T>\nstd::vector<T> bubble_sort(const\
    \ std::vector<T>& a) {\n    for (int i = 0; i < a.size(); ++i) {\n        for\
    \ (int j = i + 1; j < a.size(); ++j) {\n            if (a[i] > a[j]) swap(a[i],\
    \ a[j]);\n        }\n    }\n    return a;\n}\n\n}  // namespace BanetteGin\n\n\
    \n"
  code: "#ifndef BANETTEGIN_BUBBLE_SORT_HPP_INCLUDED\n#define BANETTEGIN_BUBBLE_SORT_HPP_INCLUDED\n\
    \n#include <vector>\n\nnamespace BanetteGin {\n\ntemplate <class T>\nstd::vector<T>\
    \ bubble_sort(const std::vector<T>& a) {\n    for (int i = 0; i < a.size(); ++i)\
    \ {\n        for (int j = i + 1; j < a.size(); ++j) {\n            if (a[i] >\
    \ a[j]) swap(a[i], a[j]);\n        }\n    }\n    return a;\n}\n\n}  // namespace\
    \ BanetteGin\n\n#endif"
  dependsOn: []
  isVerificationFile: false
  path: src/sorting/bubble_sort.hpp
  requiredBy:
  - src/all.hpp
  timestamp: '2023-09-25 19:49:37+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/sorting/bubble_sort.hpp
layout: document
redirect_from:
- /library/src/sorting/bubble_sort.hpp
- /library/src/sorting/bubble_sort.hpp.html
title: src/sorting/bubble_sort.hpp
---

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
  bundledCode: "#line 1 \"src/sorting/insertion_sort.hpp\"\n\n\n\n#include <vector>\n\
    \nnamespace BanetteGin {\n\ntemplate <class T>\nstd::vector<T> insertion_sort(const\
    \ std::vector<T>& a) {\n    for (long long int i = 1; i < a.size(); ++i) {\n \
    \       long long int v = a[i];\n        long long int j = i;\n        for (;\
    \ j > 0; j--) {\n            if (a[j] > a[i - 1]) a[j] = a[j - 1];\n        }\n\
    \        for (long long int j = i + 1; j < a.size(); ++j) {\n            if (a[i]\
    \ > a[j]) swap(a[i], a[j]);\n        }\n    }\n    return a;\n}\n\n}  // namespace\
    \ BanetteGin\n\n\n"
  code: "#ifndef BANETTEGIN_INSERTION_SORT_HPP_INCLUDED\n#define BANETTEGIN_INSERTION_SORT_HPP_INCLUDED\n\
    \n#include <vector>\n\nnamespace BanetteGin {\n\ntemplate <class T>\nstd::vector<T>\
    \ insertion_sort(const std::vector<T>& a) {\n    for (long long int i = 1; i <\
    \ a.size(); ++i) {\n        long long int v = a[i];\n        long long int j =\
    \ i;\n        for (; j > 0; j--) {\n            if (a[j] > a[i - 1]) a[j] = a[j\
    \ - 1];\n        }\n        for (long long int j = i + 1; j < a.size(); ++j) {\n\
    \            if (a[i] > a[j]) swap(a[i], a[j]);\n        }\n    }\n    return\
    \ a;\n}\n\n}  // namespace BanetteGin\n\n#endif"
  dependsOn: []
  isVerificationFile: false
  path: src/sorting/insertion_sort.hpp
  requiredBy: []
  timestamp: '2023-09-08 09:32:39+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/sorting/insertion_sort.hpp
layout: document
redirect_from:
- /library/src/sorting/insertion_sort.hpp
- /library/src/sorting/insertion_sort.hpp.html
title: src/sorting/insertion_sort.hpp
---

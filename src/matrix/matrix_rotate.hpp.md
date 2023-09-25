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
  bundledCode: "#line 1 \"src/matrix/matrix_rotate.hpp\"\n\n\n\n#include <vector>\n\
    \nnamespace BanetteGin {\n\ntemplate <class T>\nstd::vector<std::vector<T>> matrix_rotate(std::vector<std::vector<T>>\
    \ a) {\n    std::vector<std::vector<T>> ret;\n    for (int i = 0; i < a[0].size();\
    \ ++i) {\n        std::vector<T> b;\n        for (int j = 0; j < a.size(); ++j)\
    \ {\n            b.emplace_back(a[j][a[0].size() - 1 - i]);\n        }\n     \
    \   ret.emplace_back(b);\n    }\n    return ret;\n}\n\n}  // namespace BanetteGin\n\
    \n\n"
  code: "#ifndef BANETTEGIN_MATRIX_ROTATE_HPP_INCLUDED\n#define BANETTEGIN_MATRIX_ROTATE_HPP_INCLUDED\n\
    \n#include <vector>\n\nnamespace BanetteGin {\n\ntemplate <class T>\nstd::vector<std::vector<T>>\
    \ matrix_rotate(std::vector<std::vector<T>> a) {\n    std::vector<std::vector<T>>\
    \ ret;\n    for (int i = 0; i < a[0].size(); ++i) {\n        std::vector<T> b;\n\
    \        for (int j = 0; j < a.size(); ++j) {\n            b.emplace_back(a[j][a[0].size()\
    \ - 1 - i]);\n        }\n        ret.emplace_back(b);\n    }\n    return ret;\n\
    }\n\n}  // namespace BanetteGin\n\n#endif"
  dependsOn: []
  isVerificationFile: false
  path: src/matrix/matrix_rotate.hpp
  requiredBy:
  - src/all.hpp
  timestamp: '2023-09-25 19:50:42+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/matrix/matrix_rotate.hpp
layout: document
redirect_from:
- /library/src/matrix/matrix_rotate.hpp
- /library/src/matrix/matrix_rotate.hpp.html
title: src/matrix/matrix_rotate.hpp
---

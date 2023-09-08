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
  bundledCode: "#line 1 \"src/matrix/matrix_operation.hpp\"\n\n\n\n#include <vector>\n\
    \nnamespace BanetteGin {\n\ntemplate <class T>\nstruct matrix_operation {\n  \
    \  const T addide = 0;\n    const T mulide = 1;\n    std::vector<std::vector<T>\
    \ > a, b;\n    matrix_operation(std::vector<std::vector<T> > a_, std::vector<std::vector<T>\
    \ > b_)\n        : a(a_), b(b_) {\n            assert(a.size()>0&&a[0].size>0);\n\
    \            assert(b.size()>0&&b[0].size>0);\n    }\n    T addition(T& x, T&\
    \ y) const noexcept {\n        return x + y;\n    }\n    T multiplication(T& x,\
    \ T& y) const noexcept {\n        return x * y;\n    }\n    std::vector<std::vector<T>\
    \ > addition() const noexcept {\n        assert(a.size() == b.size() && a[0].size()\
    \ == b[0].size());\n\n        std::vector<std::vector<T> > c(a.size(), std::vector<T>(a[0].size(),\
    \ addide));\n        for (long long int i = 0; i < a.size(); ++i) {\n        \
    \    for (long long int j = 0; j < a[i].size(); ++j) {\n                c[i][j]\
    \ = addition(a[i][j], b[i][j]);\n            }\n        }\n        return c;\n\
    \    }\n    std::vector<std::vector<T> > product() const noexcept {\n        assert(a.size()\
    \ == b[0].size() && a[0].size() == b.size());\n        std::vector<std::vector<T>\
    \ > c(a.size(), std::vector<T>(b[0].size(), addide));\n        for (long long\
    \ int i = 0; i < a.size(); ++i) {\n            for (long long int j = 0; j < b[0].size();\
    \ ++j) {\n                for (long long int k = 0; k < b.size(); ++k) {\n   \
    \                 c[i][j] = addition(c[i][j], multiplication(a[i][k], b[k][j]));\n\
    \                }\n            }\n        }\n        return c;\n    }\n};\n\n\
    }  // namespace BanetteGin\n\n\n"
  code: "#ifndef BANETTEGIN_MATRIX_OPERATION_HPP_INCLUDED\n#define BANETTEGIN_MATRIX_OPERATION_HPP_INCLUDED\n\
    \n#include <vector>\n\nnamespace BanetteGin {\n\ntemplate <class T>\nstruct matrix_operation\
    \ {\n    const T addide = 0;\n    const T mulide = 1;\n    std::vector<std::vector<T>\
    \ > a, b;\n    matrix_operation(std::vector<std::vector<T> > a_, std::vector<std::vector<T>\
    \ > b_)\n        : a(a_), b(b_) {\n            assert(a.size()>0&&a[0].size>0);\n\
    \            assert(b.size()>0&&b[0].size>0);\n    }\n    T addition(T& x, T&\
    \ y) const noexcept {\n        return x + y;\n    }\n    T multiplication(T& x,\
    \ T& y) const noexcept {\n        return x * y;\n    }\n    std::vector<std::vector<T>\
    \ > addition() const noexcept {\n        assert(a.size() == b.size() && a[0].size()\
    \ == b[0].size());\n\n        std::vector<std::vector<T> > c(a.size(), std::vector<T>(a[0].size(),\
    \ addide));\n        for (long long int i = 0; i < a.size(); ++i) {\n        \
    \    for (long long int j = 0; j < a[i].size(); ++j) {\n                c[i][j]\
    \ = addition(a[i][j], b[i][j]);\n            }\n        }\n        return c;\n\
    \    }\n    std::vector<std::vector<T> > product() const noexcept {\n        assert(a.size()\
    \ == b[0].size() && a[0].size() == b.size());\n        std::vector<std::vector<T>\
    \ > c(a.size(), std::vector<T>(b[0].size(), addide));\n        for (long long\
    \ int i = 0; i < a.size(); ++i) {\n            for (long long int j = 0; j < b[0].size();\
    \ ++j) {\n                for (long long int k = 0; k < b.size(); ++k) {\n   \
    \                 c[i][j] = addition(c[i][j], multiplication(a[i][k], b[k][j]));\n\
    \                }\n            }\n        }\n        return c;\n    }\n};\n\n\
    }  // namespace BanetteGin\n\n#endif"
  dependsOn: []
  isVerificationFile: false
  path: src/matrix/matrix_operation.hpp
  requiredBy:
  - src/all.hpp
  timestamp: '2023-09-07 19:30:09+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/matrix/matrix_operation.hpp
layout: document
redirect_from:
- /library/src/matrix/matrix_operation.hpp
- /library/src/matrix/matrix_operation.hpp.html
title: src/matrix/matrix_operation.hpp
---

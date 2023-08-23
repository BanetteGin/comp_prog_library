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
  bundledCode: "#line 1 \"src/matrix/matrix_product.hpp\"\n\n\n\n#include <vector>\n\
    \nnamespace BanetteGin {\n\ntemplate <class T>\nstruct matrix_product {\n    const\
    \ T addide = 0;\n    const T mulide = 1;\n    std::vector<std::vector<T> > a,\
    \ b;\n    matrix_product(std::vector<std::vector<T> > a_, std::vector<std::vector<T>\
    \ > b_)\n        : a(a_), b(b_) {\n    }\n    T addition(T& x, T& y) const noexcept\
    \ {\n        return x + y;\n    }\n    T multiplication(T& x, T& y) const noexcept\
    \ {\n        return x * y;\n    }\n    std::vector<std::vector<T> > product()\
    \ const noexcept {\n        std::vector<std::vector<T> > c(a.size(), std::vector<T>(b[0].size(),\
    \ addide));\n        for (T i = 0; i < a.size(); ++i) {\n            for (T j\
    \ = 0; j < b[0].size(); ++j) {\n                for (T k = 0; k < b.size(); ++k)\
    \ {\n                    c[i][j] = addition(c[i][j], multiplication(a[i][k], b[k][j]));\n\
    \                }\n            }\n        }\n        return c;\n    }\n};\n\n\
    }  // namespace BanetteGin\n\n\n"
  code: "#ifndef BANETTEGIN_MATRIX_PRODUCT_HPP_INCLUDED\n#define BANETTEGIN_MATRIX_PRODUCT_HPP_INCLUDED\n\
    \n#include <vector>\n\nnamespace BanetteGin {\n\ntemplate <class T>\nstruct matrix_product\
    \ {\n    const T addide = 0;\n    const T mulide = 1;\n    std::vector<std::vector<T>\
    \ > a, b;\n    matrix_product(std::vector<std::vector<T> > a_, std::vector<std::vector<T>\
    \ > b_)\n        : a(a_), b(b_) {\n    }\n    T addition(T& x, T& y) const noexcept\
    \ {\n        return x + y;\n    }\n    T multiplication(T& x, T& y) const noexcept\
    \ {\n        return x * y;\n    }\n    std::vector<std::vector<T> > product()\
    \ const noexcept {\n        std::vector<std::vector<T> > c(a.size(), std::vector<T>(b[0].size(),\
    \ addide));\n        for (T i = 0; i < a.size(); ++i) {\n            for (T j\
    \ = 0; j < b[0].size(); ++j) {\n                for (T k = 0; k < b.size(); ++k)\
    \ {\n                    c[i][j] = addition(c[i][j], multiplication(a[i][k], b[k][j]));\n\
    \                }\n            }\n        }\n        return c;\n    }\n};\n\n\
    }  // namespace BanetteGin\n\n#endif"
  dependsOn: []
  isVerificationFile: false
  path: src/matrix/matrix_product.hpp
  requiredBy: []
  timestamp: '2023-08-23 17:08:47+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/matrix/matrix_product.hpp
layout: document
redirect_from:
- /library/src/matrix/matrix_product.hpp
- /library/src/matrix/matrix_product.hpp.html
title: src/matrix/matrix_product.hpp
---

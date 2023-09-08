---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':warning:'
    path: src/all.hpp
    title: src/all.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/yukicoder/499.test.cpp
    title: test/yukicoder/499.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/number_theory/base_change.hpp\"\n\n\n\n#include <string>\n\
    \nnamespace BanetteGin {\n\ntemplate <class T>\nstd::string base_change(const\
    \ std::string& num, const T& m, const T& n) {\n    string tmp = num;\n    reverse(tmp.begin(),\
    \ tmp.end());\n    T p = 1;\n    T covnum = 0;\n    for (long long int i = 0;\
    \ i < num.size(); ++i) {\n        covnum += T(tmp[i] - '0') * p;\n        p =\
    \ p * m;\n    }\n    T max_np = 1;\n    while (max_np * n <= covnum) {\n     \
    \   max_np *= n;\n    }\n    std::string ret = \"\";\n    while (max_np != 0)\
    \ {\n        ret.push_back((covnum / max_np) + '0');\n        covnum %= max_np;\n\
    \        max_np /= n;\n    }\n    return ret;\n}\n\n}  // namespace BanetteGin\n\
    \n\n"
  code: "#ifndef BANETTEGIN_BASE_CHANGE_HPP_INCLUDED\n#define BANETTEGIN_BASE_CHANGE_HPP_INCLUDED\n\
    \n#include <string>\n\nnamespace BanetteGin {\n\ntemplate <class T>\nstd::string\
    \ base_change(const std::string& num, const T& m, const T& n) {\n    string tmp\
    \ = num;\n    reverse(tmp.begin(), tmp.end());\n    T p = 1;\n    T covnum = 0;\n\
    \    for (long long int i = 0; i < num.size(); ++i) {\n        covnum += T(tmp[i]\
    \ - '0') * p;\n        p = p * m;\n    }\n    T max_np = 1;\n    while (max_np\
    \ * n <= covnum) {\n        max_np *= n;\n    }\n    std::string ret = \"\";\n\
    \    while (max_np != 0) {\n        ret.push_back((covnum / max_np) + '0');\n\
    \        covnum %= max_np;\n        max_np /= n;\n    }\n    return ret;\n}\n\n\
    }  // namespace BanetteGin\n\n#endif"
  dependsOn: []
  isVerificationFile: false
  path: src/number_theory/base_change.hpp
  requiredBy:
  - src/all.hpp
  timestamp: '2023-09-08 16:18:56+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yukicoder/499.test.cpp
documentation_of: src/number_theory/base_change.hpp
layout: document
redirect_from:
- /library/src/number_theory/base_change.hpp
- /library/src/number_theory/base_change.hpp.html
title: src/number_theory/base_change.hpp
---

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
  bundledCode: "#line 1 \"src/number_theory/base_change.hpp\"\n\n\n\n#include <string>\n\
    \nnamespace BanetteGin {\n\ntemplate <class T>\nstd::string base_change(std::string&\
    \ num, T& m, T& n) {\n    reverse(num.begin(), num.end());\n    T p = 1;\n   \
    \ T covnum = 0;\n    for (T i = 0; i < num.size(); ++i) {\n        covnum += (T)(num[i]\
    \ - '0') * p;\n        p = p * m;\n    }\n    T max_np = 1;\n    while (max_np\
    \ <= covnum) {\n        max_np *= n;\n    }\n    string ret = \"\";\n    while\
    \ (max_np != 0) {\n        ret.push_back((covnum / max_np) + '0');\n        covnum\
    \ %= max_np;\n        max_np /= n;\n    }\n    return ret;\n}\n\n}  // namespace\
    \ BanetteGin\n\n\n"
  code: "#ifndef BANETTEGIN_BASE_CHANGE_HPP_INCLUDED\n#define BANETTEGIN_BASE_CHANGE_HPP_INCLUDED\n\
    \n#include <string>\n\nnamespace BanetteGin {\n\ntemplate <class T>\nstd::string\
    \ base_change(std::string& num, T& m, T& n) {\n    reverse(num.begin(), num.end());\n\
    \    T p = 1;\n    T covnum = 0;\n    for (T i = 0; i < num.size(); ++i) {\n \
    \       covnum += (T)(num[i] - '0') * p;\n        p = p * m;\n    }\n    T max_np\
    \ = 1;\n    while (max_np <= covnum) {\n        max_np *= n;\n    }\n    string\
    \ ret = \"\";\n    while (max_np != 0) {\n        ret.push_back((covnum / max_np)\
    \ + '0');\n        covnum %= max_np;\n        max_np /= n;\n    }\n    return\
    \ ret;\n}\n\n}  // namespace BanetteGin\n\n#endif"
  dependsOn: []
  isVerificationFile: false
  path: src/number_theory/base_change.hpp
  requiredBy: []
  timestamp: '2023-08-08 12:20:54+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/number_theory/base_change.hpp
layout: document
redirect_from:
- /library/src/number_theory/base_change.hpp
- /library/src/number_theory/base_change.hpp.html
title: src/number_theory/base_change.hpp
---

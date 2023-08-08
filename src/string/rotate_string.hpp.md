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
  bundledCode: "#line 1 \"src/string/rotate_string.hpp\"\n\n\n\n#include <string>\n\
    #include <vector>\n\nnamespace BanetteGin {\n\nstd::vector<std::string> rotate_string(std::vector<std::string>\
    \ s) {\n    std::vector<std::string> ret;\n    for (long long int i = 0; i < s[0].size();\
    \ ++i) {\n        std::string t = \"\";\n        for (long long int j = 0; j <\
    \ s.size(); ++j) {\n            t.push_back(s[j][s[0].size() - 1 - i]);\n    \
    \    }\n        ret.emplace_back(t);\n    }\n    return ret;\n}\n\n}  // namespace\
    \ BanetteGin\n\n\n"
  code: "#ifndef BANETTEGIN_ROTATE_STRING_HPP_INCLUDED\n#define BANETTEGIN_ROTATE_STRING_HPP_INCLUDED\n\
    \n#include <string>\n#include <vector>\n\nnamespace BanetteGin {\n\nstd::vector<std::string>\
    \ rotate_string(std::vector<std::string> s) {\n    std::vector<std::string> ret;\n\
    \    for (long long int i = 0; i < s[0].size(); ++i) {\n        std::string t\
    \ = \"\";\n        for (long long int j = 0; j < s.size(); ++j) {\n          \
    \  t.push_back(s[j][s[0].size() - 1 - i]);\n        }\n        ret.emplace_back(t);\n\
    \    }\n    return ret;\n}\n\n}  // namespace BanetteGin\n\n#endif"
  dependsOn: []
  isVerificationFile: false
  path: src/string/rotate_string.hpp
  requiredBy:
  - src/all.hpp
  timestamp: '2023-08-08 12:20:54+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/string/rotate_string.hpp
layout: document
redirect_from:
- /library/src/string/rotate_string.hpp
- /library/src/string/rotate_string.hpp.html
title: src/string/rotate_string.hpp
---

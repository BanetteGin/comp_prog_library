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
  bundledCode: "#line 1 \"src/run_length_encording.hpp\"\n\n\n\n#include <string>\n\
    #include <vector>\n\nnamespace BanetteGin {\n\nstd::vector<std::pair<char, long\
    \ long int> > run_length_encording(std::string s) {\n    std::vector<std::pair<char,\
    \ long long int> > ret;\n    for (long long int i = 0; i < s.size();) {\n    \
    \    long long int j = i + 1;\n        for (; j < s.size() && s[i] == s[j]; j++)\
    \ {\n        }\n        ret.emplace_back(std::make_pair(s[i], j - i));\n     \
    \   i = j;\n    }\n    return ret;\n}\n\n}  // namespace BanetteGin\n\n\n"
  code: "#ifndef BANETTEGIN_RUN_LENGTH_ENCORDING_HPP_INCLUDED\n#define BANETTEGIN_RUN_LENGTH_ENCORDING_HPP_INCLUDED\n\
    \n#include <string>\n#include <vector>\n\nnamespace BanetteGin {\n\nstd::vector<std::pair<char,\
    \ long long int> > run_length_encording(std::string s) {\n    std::vector<std::pair<char,\
    \ long long int> > ret;\n    for (long long int i = 0; i < s.size();) {\n    \
    \    long long int j = i + 1;\n        for (; j < s.size() && s[i] == s[j]; j++)\
    \ {\n        }\n        ret.emplace_back(std::make_pair(s[i], j - i));\n     \
    \   i = j;\n    }\n    return ret;\n}\n\n}  // namespace BanetteGin\n\n#endif"
  dependsOn: []
  isVerificationFile: false
  path: src/run_length_encording.hpp
  requiredBy:
  - src/all.hpp
  timestamp: '2023-08-07 22:07:44+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/run_length_encording.hpp
layout: document
redirect_from:
- /library/src/run_length_encording.hpp
- /library/src/run_length_encording.hpp.html
title: src/run_length_encording.hpp
---

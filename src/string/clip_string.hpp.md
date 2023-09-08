---
data:
  _extendedDependsOn:
  - icon: ':question:'
    path: src/basic/constant.hpp
    title: src/basic/constant.hpp
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
  bundledCode: "#line 1 \"src/string/clip_string.hpp\"\n\n\n\n#include <string>\n\
    #include <vector>\n\n#line 1 \"src/basic/constant.hpp\"\n\n\n\nnamespace BanetteGin\
    \ {\n\nconst long double EPS = 1e-6L;\nconst long long int LINF = 1001001001001001001LL;\n\
    const long double PI = acos(-1.0L);\nconst long double GOLDEN_RATIO = 2.0L * cos(PI\
    \ / 5.0L);\n\n}  // namespace BanetteGin\n\n\n#line 8 \"src/string/clip_string.hpp\"\
    \n\nnamespace BanetteGin {\n\nstd::vector<std::string> clip_string(const std::vector<std::string>&\
    \ s, char target) {\n    long long int lefx, rigx, lefy, rigy;\n    lefx = lefy\
    \ = LINF;\n    rigx = rigy = -LINF;\n    std::vector<std::string> ret;\n    for\
    \ (long long int i = 0; i < s.size(); ++i) {\n        for (long long int j = 0;\
    \ j < s[i].size(); ++j) {\n            if (s[i][j] == target) {\n            \
    \    lefx = std::min(lefx, i);\n                rigx = std::max(rigx, i);\n  \
    \          }\n        }\n    }\n    for (long long int i = 0; i < s[0].size();\
    \ ++i) {\n        for (long long int j = 0; j < s.size(); ++j) {\n           \
    \ if (s[j][i] == target) {\n                lefy = std::min(lefy, i);\n      \
    \          rigy = std::max(rigy, i);\n            }\n        }\n    }\n    for\
    \ (long long int i = lefx; i <= rigx; ++i) {\n        std::string t = \"\";\n\
    \        for (long long int j = lefy; j <= rigy; ++j) {\n            t.push_back(s[i][j]);\n\
    \        }\n        ret.emplace_back(t);\n    }\n    return ret;\n}\n\n}  // namespace\
    \ BanetteGin\n\n\n"
  code: "#ifndef BANETTEGIN_CLIP_STRING_HPP_INCLUDED\n#define BANETTEGIN_CLIP_STRING_HPP_INCLUDED\n\
    \n#include <string>\n#include <vector>\n\n#include \"../basic/constant.hpp\"\n\
    \nnamespace BanetteGin {\n\nstd::vector<std::string> clip_string(const std::vector<std::string>&\
    \ s, char target) {\n    long long int lefx, rigx, lefy, rigy;\n    lefx = lefy\
    \ = LINF;\n    rigx = rigy = -LINF;\n    std::vector<std::string> ret;\n    for\
    \ (long long int i = 0; i < s.size(); ++i) {\n        for (long long int j = 0;\
    \ j < s[i].size(); ++j) {\n            if (s[i][j] == target) {\n            \
    \    lefx = std::min(lefx, i);\n                rigx = std::max(rigx, i);\n  \
    \          }\n        }\n    }\n    for (long long int i = 0; i < s[0].size();\
    \ ++i) {\n        for (long long int j = 0; j < s.size(); ++j) {\n           \
    \ if (s[j][i] == target) {\n                lefy = std::min(lefy, i);\n      \
    \          rigy = std::max(rigy, i);\n            }\n        }\n    }\n    for\
    \ (long long int i = lefx; i <= rigx; ++i) {\n        std::string t = \"\";\n\
    \        for (long long int j = lefy; j <= rigy; ++j) {\n            t.push_back(s[i][j]);\n\
    \        }\n        ret.emplace_back(t);\n    }\n    return ret;\n}\n\n}  // namespace\
    \ BanetteGin\n\n#endif"
  dependsOn:
  - src/basic/constant.hpp
  isVerificationFile: false
  path: src/string/clip_string.hpp
  requiredBy:
  - src/all.hpp
  timestamp: '2023-09-09 01:13:20+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/string/clip_string.hpp
layout: document
redirect_from:
- /library/src/string/clip_string.hpp
- /library/src/string/clip_string.hpp.html
title: src/string/clip_string.hpp
---

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
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.11.4/x64/lib/python3.11/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n          \
    \         ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\
    \  File \"/opt/hostedtoolcache/Python/3.11.4/x64/lib/python3.11/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.11.4/x64/lib/python3.11/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \                ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n \
    \ File \"/opt/hostedtoolcache/Python/3.11.4/x64/lib/python3.11/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 260, in _resolve\n    raise BundleErrorAt(path, -1, \"no such header\"\
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: constant.hpp:\
    \ line -1: no such header\n"
  code: "#ifndef BANETTEGIN_CLIP_STRING_HPP_INCLUDED\n#define BANETTEGIN_CLIP_STRING_HPP_INCLUDED\n\
    \n#include <string>\n#include <vector>\n\n#include \"constant.hpp\"\n\nnamespace\
    \ BanetteGin {\n\nstd::vector<std::string> clip_string(std::vector<std::string>&\
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
  dependsOn: []
  isVerificationFile: false
  path: src/string/clip_string.hpp
  requiredBy: []
  timestamp: '1970-01-01 00:00:00+00:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/string/clip_string.hpp
layout: document
redirect_from:
- /library/src/string/clip_string.hpp
- /library/src/string/clip_string.hpp.html
title: src/string/clip_string.hpp
---

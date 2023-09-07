---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.11.5/x64/lib/python3.11/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n          \
    \         ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\
    \  File \"/opt/hostedtoolcache/Python/3.11.5/x64/lib/python3.11/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.11.5/x64/lib/python3.11/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.11.5/x64/lib/python3.11/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \                ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n \
    \ File \"/opt/hostedtoolcache/Python/3.11.5/x64/lib/python3.11/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 260, in _resolve\n    raise BundleErrorAt(path, -1, \"no such header\"\
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: analysis\\golden_ratio_search.hpp:\
    \ line -1: no such header\n"
  code: "#include <bits/stdc++.h>\n\n#include \"../src/all.hpp\"\nusing namespace\
    \ std;\n\n#define rep(i, n) for (ll i = 0, n_f = (ll)(n); i < n_f; ++i)\n\ntypedef\
    \ long long ll;\ntypedef long double ld;\n\nusing namespace BanetteGin;\n\nrandom_device\
    \ seed_gen;\nmt19937 engine(seed_gen());\nuniform_real_distribution<ld> tht_gen(0.0,\
    \ M_PI);\n\nint main(void) {\n    ll n;\n    cin >> n;\n    ld x = 0;\n    ld\
    \ y = 0;\n    rep(i, n) {\n        ld th1 = tht_gen(engine);\n        ld th2 =\
    \ tht_gen(engine);\n        ld th3 = tht_gen(engine);\n        point a = point(cos(th1),\
    \ sin(th1));\n        point b = point(cos(th2), sin(th2));\n        point c =\
    \ point(cos(th3), sin(th3));\n        point inc = incenter(triangle(a, b, c));\n\
    \        x += inc.x;\n        y += inc.y;\n    }\n    cout << fixed << setprecision(20)\
    \ << x / ld(n) << \" \" << y / ld(n) << endl;\n    return 0;\n}"
  dependsOn: []
  isVerificationFile: false
  path: manage/incenter_test.cpp
  requiredBy: []
  timestamp: '1970-01-01 00:00:00+00:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: manage/incenter_test.cpp
layout: document
redirect_from:
- /library/manage/incenter_test.cpp
- /library/manage/incenter_test.cpp.html
title: manage/incenter_test.cpp
---

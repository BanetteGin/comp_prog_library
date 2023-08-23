---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/data_structure/union_find.hpp
    title: src/data_structure/union_find.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/unionfind
    links:
    - https://judge.yosupo.jp/problem/unionfind
  bundledCode: "#line 1 \"test/library_checker/union_find.test.cpp\"\n#define PROBLEM\
    \ \"https://judge.yosupo.jp/problem/unionfind\"\n\n#include <bits/stdc++.h>\n\
    using namespace std;\n\n#define rep(i, n) for (ll i = 0, n_f = (ll)(n); i < n_f;\
    \ ++i)\n\ntypedef long long ll;\n\n#line 1 \"src/data_structure/union_find.hpp\"\
    \n\n\n\n#line 5 \"src/data_structure/union_find.hpp\"\n\nnamespace BanetteGin\
    \ {\n\ntemplate <class T>\nstruct union_find {\n    std::vector<T> par, rk, sz;\n\
    \    union_find(T n)\n        : par(n, -1), rk(n, 0), sz(n, 1) {\n    }\n    T\
    \ root(const T& v) noexcept {\n        if (par[v] == -1)\n            return v;\n\
    \        else\n            return par[v] = root(par[v]);\n    }\n    bool same(const\
    \ T& u, const T& v) noexcept {\n        return root(u) == root(v);\n    }\n  \
    \  bool unite(const T& u, const T& v) noexcept {\n        T urt = root(u);\n \
    \       T vrt = root(v);\n        if (urt == vrt) return false;\n        if (rk[urt]\
    \ < rk[vrt]) swap(urt, vrt);\n        par[vrt] = urt;\n        if (rk[urt] ==\
    \ rk[vrt]) rk[urt]++;\n        sz[urt] += sz[vrt];\n        return true;\n   \
    \ }\n    T size(const T& v) const noexcept {\n        return sz[root(v)];\n  \
    \  }\n};\n\n}  // namespace BanetteGin\n\n\n#line 11 \"test/library_checker/union_find.test.cpp\"\
    \nusing namespace BanetteGin;\n\nint main(void) {\n    ll n, q;\n    cin >> n\
    \ >> q;\n    union_find uf(n);\n    rep(i, q) {\n        ll t, u, v;\n       \
    \ cin >> t >> u >> v;\n        if (t == 0)\n            uf.unite(u, v);\n    \
    \    else {\n            if (uf.same(u, v))\n                cout << 1 << endl;\n\
    \            else\n                cout << 0 << endl;\n        }\n    }\n    return\
    \ 0;\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/unionfind\"\n\n#include\
    \ <bits/stdc++.h>\nusing namespace std;\n\n#define rep(i, n) for (ll i = 0, n_f\
    \ = (ll)(n); i < n_f; ++i)\n\ntypedef long long ll;\n\n#include \"../../src/data_structure/union_find.hpp\"\
    \nusing namespace BanetteGin;\n\nint main(void) {\n    ll n, q;\n    cin >> n\
    \ >> q;\n    union_find uf(n);\n    rep(i, q) {\n        ll t, u, v;\n       \
    \ cin >> t >> u >> v;\n        if (t == 0)\n            uf.unite(u, v);\n    \
    \    else {\n            if (uf.same(u, v))\n                cout << 1 << endl;\n\
    \            else\n                cout << 0 << endl;\n        }\n    }\n    return\
    \ 0;\n}"
  dependsOn:
  - src/data_structure/union_find.hpp
  isVerificationFile: true
  path: test/library_checker/union_find.test.cpp
  requiredBy: []
  timestamp: '2023-08-23 17:08:47+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/library_checker/union_find.test.cpp
layout: document
redirect_from:
- /verify/test/library_checker/union_find.test.cpp
- /verify/test/library_checker/union_find.test.cpp.html
title: test/library_checker/union_find.test.cpp
---

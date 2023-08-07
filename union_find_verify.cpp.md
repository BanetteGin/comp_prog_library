---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links:
    - https://judge.yosupo.jp/problem/unionfind
  bundledCode: "#line 1 \"union_find_verify.cpp\"\n#define PROBLEM \"https://judge.yosupo.jp/problem/unionfind\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#define rep(i, n) for (ll\
    \ i = 0, n_f = (ll)(n); i < n_f; ++i)\n#define frep(i, l, r)                 \
    \                 \\\n    for (ll i = (ll)(l), l_f = (ll)(l), r_f = (ll)(r); \\\
    \n         l_f <= r_f ? i <= r_f : i >= r_f; l_f <= r_f ? i++ : i--)\n#define\
    \ all(a) (a).begin(), (a).end()\n#define pb(a) push_back(a)\n#define eb(a) emplace_back(a)\n\
    #define mpa(a, b) make_pair(a, b)\n\ntypedef long long ll;\ntypedef __int128_t\
    \ int128;\ntypedef double dou;\ntypedef long double ld;\ntypedef vector<long double>\
    \ vld;\ntypedef vector<vector<long double> > vvld;\ntypedef vector<string> vstr;\n\
    typedef vector<bool> vbol;\ntypedef vector<vector<bool> > vvbol;\ntypedef vector<ll>\
    \ vll;\ntypedef vector<vector<ll> > vvll;\n\ntemplate <class T>\nstruct union_find\
    \ {\n    vector<T> par, rk, sz;\n    union_find(T n)\n        : par(n, -1), rk(n,\
    \ 0), sz(n, 1) {\n    }\n    T root(T& v) {\n        if (par[v] == -1)\n     \
    \       return v;\n        else\n            return par[v] = root(par[v]);\n \
    \   }\n    bool same(T& u, T& v) {\n        return root(u) == root(v);\n    }\n\
    \    bool unite(T& u, T& v) {\n        T urt = root(u);\n        T vrt = root(v);\n\
    \        if (urt == vrt) return false;\n        if (rk[urt] < rk[vrt]) swap(urt,\
    \ vrt);\n        par[vrt] = urt;\n        if (rk[urt] == rk[vrt]) rk[urt]++;\n\
    \        sz[urt] += sz[vrt];\n        return true;\n    }\n    T size(T& v) {\n\
    \        return sz[root(v)];\n    }\n};\n\nint main(void) {\n    ll n, q;\n  \
    \  cin >> n >> q;\n    union_find uf(n);\n    rep(i, q) {\n        ll t, u, v;\n\
    \        cin >> t >> u >> v;\n        if (t == 0)\n            uf.unite(u, v);\n\
    \        else {\n            if (uf.same(u, v))\n                cout << 1 <<\
    \ endl;\n            else\n                cout << 0 << endl;\n        }\n   \
    \ }\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/unionfind\"\n\n#include\
    \ <bits/stdc++.h>\nusing namespace std;\n\n#define rep(i, n) for (ll i = 0, n_f\
    \ = (ll)(n); i < n_f; ++i)\n#define frep(i, l, r)                            \
    \      \\\n    for (ll i = (ll)(l), l_f = (ll)(l), r_f = (ll)(r); \\\n       \
    \  l_f <= r_f ? i <= r_f : i >= r_f; l_f <= r_f ? i++ : i--)\n#define all(a) (a).begin(),\
    \ (a).end()\n#define pb(a) push_back(a)\n#define eb(a) emplace_back(a)\n#define\
    \ mpa(a, b) make_pair(a, b)\n\ntypedef long long ll;\ntypedef __int128_t int128;\n\
    typedef double dou;\ntypedef long double ld;\ntypedef vector<long double> vld;\n\
    typedef vector<vector<long double> > vvld;\ntypedef vector<string> vstr;\ntypedef\
    \ vector<bool> vbol;\ntypedef vector<vector<bool> > vvbol;\ntypedef vector<ll>\
    \ vll;\ntypedef vector<vector<ll> > vvll;\n\ntemplate <class T>\nstruct union_find\
    \ {\n    vector<T> par, rk, sz;\n    union_find(T n)\n        : par(n, -1), rk(n,\
    \ 0), sz(n, 1) {\n    }\n    T root(T& v) {\n        if (par[v] == -1)\n     \
    \       return v;\n        else\n            return par[v] = root(par[v]);\n \
    \   }\n    bool same(T& u, T& v) {\n        return root(u) == root(v);\n    }\n\
    \    bool unite(T& u, T& v) {\n        T urt = root(u);\n        T vrt = root(v);\n\
    \        if (urt == vrt) return false;\n        if (rk[urt] < rk[vrt]) swap(urt,\
    \ vrt);\n        par[vrt] = urt;\n        if (rk[urt] == rk[vrt]) rk[urt]++;\n\
    \        sz[urt] += sz[vrt];\n        return true;\n    }\n    T size(T& v) {\n\
    \        return sz[root(v)];\n    }\n};\n\nint main(void) {\n    ll n, q;\n  \
    \  cin >> n >> q;\n    union_find uf(n);\n    rep(i, q) {\n        ll t, u, v;\n\
    \        cin >> t >> u >> v;\n        if (t == 0)\n            uf.unite(u, v);\n\
    \        else {\n            if (uf.same(u, v))\n                cout << 1 <<\
    \ endl;\n            else\n                cout << 0 << endl;\n        }\n   \
    \ }\n}"
  dependsOn: []
  isVerificationFile: false
  path: union_find_verify.cpp
  requiredBy: []
  timestamp: '2023-08-08 00:45:05+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: union_find_verify.cpp
layout: document
redirect_from:
- /library/union_find_verify.cpp
- /library/union_find_verify.cpp.html
title: union_find_verify.cpp
---

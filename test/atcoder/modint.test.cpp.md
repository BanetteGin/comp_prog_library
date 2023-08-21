---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: src/number_theory/modint.hpp
    title: src/number_theory/modint.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: true
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/unionfind
    links:
    - https://judge.yosupo.jp/problem/unionfind
  bundledCode: "#line 1 \"test/atcoder/modint.test.cpp\"\n#define PROBLEM \"https://judge.yosupo.jp/problem/unionfind\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#define rep(i, n) for (ll\
    \ i = 0, n_f = (ll)(n); i < n_f; ++i)\n\ntypedef long long ll;\n\n#line 1 \"src/number_theory/modint.hpp\"\
    \n\n\n\nnamespace BanetteGin {\n\ntemplate <long long int MOD>\nstruct modint\
    \ {\n    long long int val;\n    constexpr modint(long long int v = 0) noexcept\n\
    \        : val(v % MOD) {\n        if (val < 0) val += MOD;\n    }\n    constexpr\
    \ long long int getmod() {\n        return MOD;\n    }\n\n    constexpr modint\
    \ operator-() const noexcept {\n        return val ? MOD - val : 0;\n    }\n\n\
    \    constexpr modint operator+(const modint& r) const noexcept {\n        return\
    \ modint(*this) += r;\n    }\n    constexpr modint operator-(const modint& r)\
    \ const noexcept {\n        return modint(*this) -= r;\n    }\n    constexpr modint\
    \ operator*(const modint& r) const noexcept {\n        return modint(*this) *=\
    \ r;\n    }\n    constexpr modint operator/(const modint& r) const noexcept {\n\
    \        return modint(*this) /= r;\n    }\n\n    constexpr modint& operator+=(const\
    \ modint& r) noexcept {\n        val += r.val;\n        if (val >= MOD) val -=\
    \ MOD;\n        return *this;\n    }\n    constexpr modint& operator-=(const modint&\
    \ r) noexcept {\n        val -= r.val;\n        if (val < 0) val += MOD;\n   \
    \     return *this;\n    }\n    constexpr modint& operator*=(const modint& r)\
    \ noexcept {\n        val = val * r.val % MOD;\n        return *this;\n    }\n\
    \n    constexpr modint& operator++() noexcept {\n        val += 1;\n        if\
    \ (val >= MOD) val -= MOD;\n        return *this;\n    }\n    constexpr modint&\
    \ operator--() noexcept {\n        val -= 1;\n        if (val < 0) val += MOD;\n\
    \        return *this;\n    }\n\n    constexpr modint& operator/=(const modint&\
    \ r) noexcept {\n        long long int a = r.val, b = MOD, u = 1, v = 0;\n   \
    \     while (b) {\n            long long int t = a / b;\n            a -= t *\
    \ b;\n            swap(a, b);\n            u -= t * v;\n            swap(u, v);\n\
    \        }\n        val = val * u % MOD;\n        if (val < 0) val += MOD;\n \
    \       return *this;\n    }\n\n    constexpr bool operator==(const modint& r)\
    \ const noexcept {\n        return this->val == r.val;\n    }\n    constexpr bool\
    \ operator!=(const modint& r) const noexcept {\n        return this->val != r.val;\n\
    \    }\n\n    friend constexpr ostream& operator<<(ostream& os, const modint<MOD>&\
    \ x) noexcept {\n        return os << x.val;\n    }\n\n    friend constexpr modint<MOD>\
    \ modpow(const modint<MOD>& a, long long int n) noexcept {\n        modint<MOD>\
    \ ret = 1;\n        modint<MOD> tmpa = a;\n        while (n > 0) {\n         \
    \   if (n & 1) ret *= a;\n            tmpa = tmpa * tmpa;\n            n >>= 1;\n\
    \        }\n        return ret;\n    }\n};\n\n}  // namespace BanetteGin\n\n\n\
    #line 11 \"test/atcoder/modint.test.cpp\"\nusing namespace BanetteGin;\n\nconst\
    \ ll mod99ll = 998244353LL;\nusing mint = modint<mod99ll>;\n\nint main(void) {\n\
    \    return 0;\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/unionfind\"\n\n#include\
    \ <bits/stdc++.h>\nusing namespace std;\n\n#define rep(i, n) for (ll i = 0, n_f\
    \ = (ll)(n); i < n_f; ++i)\n\ntypedef long long ll;\n\n#include \"../../src/number_theory/modint.hpp\"\
    \nusing namespace BanetteGin;\n\nconst ll mod99ll = 998244353LL;\nusing mint =\
    \ modint<mod99ll>;\n\nint main(void) {\n    return 0;\n}\n"
  dependsOn:
  - src/number_theory/modint.hpp
  isVerificationFile: true
  path: test/atcoder/modint.test.cpp
  requiredBy: []
  timestamp: '2023-08-22 02:10:12+09:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: test/atcoder/modint.test.cpp
layout: document
redirect_from:
- /verify/test/atcoder/modint.test.cpp
- /verify/test/atcoder/modint.test.cpp.html
title: test/atcoder/modint.test.cpp
---

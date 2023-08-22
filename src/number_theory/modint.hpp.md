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
  bundledCode: "#line 1 \"src/number_theory/modint.hpp\"\n\n\n\nnamespace BanetteGin\
    \ {\n\ntemplate <long long int MOD>\nstruct modint {\n    long long int val;\n\
    \    constexpr modint(long long int v = 0) noexcept\n        : val(v % MOD) {\n\
    \        if (val < 0) val += MOD;\n    }\n    constexpr long long int getmod()\
    \ {\n        return MOD;\n    }\n\n    constexpr modint operator-() const noexcept\
    \ {\n        return val ? MOD - val : 0;\n    }\n\n    constexpr modint operator+(const\
    \ modint& r) const noexcept {\n        return modint(*this) += r;\n    }\n   \
    \ constexpr modint operator-(const modint& r) const noexcept {\n        return\
    \ modint(*this) -= r;\n    }\n    constexpr modint operator*(const modint& r)\
    \ const noexcept {\n        return modint(*this) *= r;\n    }\n    constexpr modint\
    \ operator/(const modint& r) const noexcept {\n        return modint(*this) /=\
    \ r;\n    }\n\n    constexpr modint& operator+=(const modint& r) noexcept {\n\
    \        val += r.val;\n        if (val >= MOD) val -= MOD;\n        return *this;\n\
    \    }\n    constexpr modint& operator-=(const modint& r) noexcept {\n       \
    \ val -= r.val;\n        if (val < 0) val += MOD;\n        return *this;\n   \
    \ }\n    constexpr modint& operator*=(const modint& r) noexcept {\n        val\
    \ = val * r.val % MOD;\n        return *this;\n    }\n\n    constexpr modint&\
    \ operator++() noexcept {\n        val += 1;\n        if (val >= MOD) val -= MOD;\n\
    \        return *this;\n    }\n    constexpr modint& operator--() noexcept {\n\
    \        val -= 1;\n        if (val < 0) val += MOD;\n        return *this;\n\
    \    }\n\n    constexpr modint& operator/=(const modint& r) noexcept {\n     \
    \   long long int a = r.val, b = MOD, u = 1, v = 0;\n        while (b) {\n   \
    \         long long int t = a / b;\n            a -= t * b;\n            swap(a,\
    \ b);\n            u -= t * v;\n            swap(u, v);\n        }\n        val\
    \ = val * u % MOD;\n        if (val < 0) val += MOD;\n        return *this;\n\
    \    }\n\n    constexpr bool operator==(const modint& r) const noexcept {\n  \
    \      return this->val == r.val;\n    }\n    constexpr bool operator!=(const\
    \ modint& r) const noexcept {\n        return this->val != r.val;\n    }\n\n \
    \   /*\n    friend constexpr ostream& operator<<(ostream& os, const modint<MOD>&\
    \ x) noexcept {\n        return os << x.val;\n    }\n    */\n\n    /*\n    friend\
    \ constexpr modint<MOD> modpow(const modint<MOD>& a, long long int n) noexcept\
    \ {\n        modint ret = 1;\n        modint tmpa = a;\n        while (n > 0)\
    \ {\n            if (n & 1) ret *= a;\n            tmpa = tmpa * tmpa;\n     \
    \       n >>= 1;\n        }\n        return ret;\n    }\n    */\n};\n\n}  // namespace\
    \ BanetteGin\n\n\n"
  code: "#ifndef BANETTEGIN_MODINT_HPP_INCLUDED\n#define BANETTEGIN_MODINT_HPP_INCLUDED\n\
    \nnamespace BanetteGin {\n\ntemplate <long long int MOD>\nstruct modint {\n  \
    \  long long int val;\n    constexpr modint(long long int v = 0) noexcept\n  \
    \      : val(v % MOD) {\n        if (val < 0) val += MOD;\n    }\n    constexpr\
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
    \    }\n\n    /*\n    friend constexpr ostream& operator<<(ostream& os, const\
    \ modint<MOD>& x) noexcept {\n        return os << x.val;\n    }\n    */\n\n \
    \   /*\n    friend constexpr modint<MOD> modpow(const modint<MOD>& a, long long\
    \ int n) noexcept {\n        modint ret = 1;\n        modint tmpa = a;\n     \
    \   while (n > 0) {\n            if (n & 1) ret *= a;\n            tmpa = tmpa\
    \ * tmpa;\n            n >>= 1;\n        }\n        return ret;\n    }\n    */\n\
    };\n\n}  // namespace BanetteGin\n\n#endif"
  dependsOn: []
  isVerificationFile: false
  path: src/number_theory/modint.hpp
  requiredBy:
  - src/all.hpp
  timestamp: '2023-08-22 22:07:36+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/number_theory/modint.hpp
layout: document
redirect_from:
- /library/src/number_theory/modint.hpp
- /library/src/number_theory/modint.hpp.html
title: src/number_theory/modint.hpp
---

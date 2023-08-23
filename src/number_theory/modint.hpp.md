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
    \        if (val < 0) val += MOD;\n    }\n    constexpr long long int get_mod()\
    \ {\n        return MOD;\n    }\n    constexpr modint operator-() const noexcept\
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
    \   friend constexpr ostream& operator<<(ostream& os, const modint<MOD>& x) noexcept\
    \ {\n        return os << x.val;\n    }\n\n    friend istream& operator>>(istream&\
    \ is, modint<MOD>& x) noexcept {\n        long long int t;\n        is >> t;\n\
    \        x = modint(t);\n        return (is);\n    }\n\n    friend constexpr modint<MOD>\
    \ modpow(const modint<MOD>& a, long long int n) noexcept {\n        if (n == 0)\
    \ return 1;\n        auto t = modpow(a, n / 2);\n        t = t * t;\n        if\
    \ (n & 1) t = t * a;\n        return t;\n    }\n};\n\n}  // namespace BanetteGin\n\
    \n\n"
  code: "#ifndef BANETTEGIN_MODINT_HPP_INCLUDED\n#define BANETTEGIN_MODINT_HPP_INCLUDED\n\
    \nnamespace BanetteGin {\n\ntemplate <long long int MOD>\nstruct modint {\n  \
    \  long long int val;\n    constexpr modint(long long int v = 0) noexcept\n  \
    \      : val(v % MOD) {\n        if (val < 0) val += MOD;\n    }\n    constexpr\
    \ long long int get_mod() {\n        return MOD;\n    }\n    constexpr modint\
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
    \ x) noexcept {\n        return os << x.val;\n    }\n\n    friend istream& operator>>(istream&\
    \ is, modint<MOD>& x) noexcept {\n        long long int t;\n        is >> t;\n\
    \        x = modint(t);\n        return (is);\n    }\n\n    friend constexpr modint<MOD>\
    \ modpow(const modint<MOD>& a, long long int n) noexcept {\n        if (n == 0)\
    \ return 1;\n        auto t = modpow(a, n / 2);\n        t = t * t;\n        if\
    \ (n & 1) t = t * a;\n        return t;\n    }\n};\n\n}  // namespace BanetteGin\n\
    \n#endif"
  dependsOn: []
  isVerificationFile: false
  path: src/number_theory/modint.hpp
  requiredBy:
  - src/all.hpp
  timestamp: '2023-08-23 13:39:09+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/number_theory/modint.hpp
layout: document
redirect_from:
- /library/src/number_theory/modint.hpp
- /library/src/number_theory/modint.hpp.html
title: src/number_theory/modint.hpp
---

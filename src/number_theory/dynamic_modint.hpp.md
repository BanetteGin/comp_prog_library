---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':x:'
    path: test/yukicoder/1092.test.cpp
    title: test/yukicoder/1092.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':x:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/number_theory/dynamic_modint.hpp\"\n\n\n\nnamespace\
    \ BanetteGin {\n\ntemplate <long long int id>\nstruct dynamic_modint {\n    long\
    \ long int val;\n    dynamic_modint(long long int v = 0) noexcept\n        : val(v\
    \ % get_mod()) {\n        if (val < 0) val += get_mod();\n    }\n    static long\
    \ long int& get_mod() {\n        static long long int MOD = 1;\n        return\
    \ MOD;\n    }\n    static void set_mod(long long int MOD_) {\n        get_mod()\
    \ = MOD_;\n        return;\n    }\n    dynamic_modint operator-() const noexcept\
    \ {\n        return val ? get_mod() - val : 0;\n    }\n\n    dynamic_modint operator+(const\
    \ dynamic_modint& r) const noexcept {\n        return dynamic_modint(*this) +=\
    \ r;\n    }\n    dynamic_modint operator-(const dynamic_modint& r) const noexcept\
    \ {\n        return dynamic_modint(*this) -= r;\n    }\n    dynamic_modint operator*(const\
    \ dynamic_modint& r) const noexcept {\n        return dynamic_modint(*this) *=\
    \ r;\n    }\n    dynamic_modint operator/(const dynamic_modint& r) const noexcept\
    \ {\n        return dynamic_modint(*this) /= r;\n    }\n\n    dynamic_modint&\
    \ operator+=(const dynamic_modint& r) noexcept {\n        val += r.val;\n    \
    \    if (val >= get_mod()) val -= get_mod();\n        return *this;\n    }\n \
    \   dynamic_modint& operator-=(const dynamic_modint& r) noexcept {\n        val\
    \ -= r.val;\n        if (val < 0) val += get_mod();\n        return *this;\n \
    \   }\n    dynamic_modint& operator*=(const dynamic_modint& r) noexcept {\n  \
    \      val = val * r.val % get_mod();\n        return *this;\n    }\n    dynamic_modint&\
    \ operator/=(const dynamic_modint& r) noexcept {\n        long long int a = r.val,\
    \ b = get_mod(), u = 1, v = 0;\n        while (b) {\n            long long int\
    \ t = a / b;\n            a -= t * b;\n            std::swap(a, b);\n        \
    \    u -= t * v;\n            std::swap(u, v);\n        }\n        val = val *\
    \ u % get_mod();\n        if (val < 0) val += get_mod();\n        return *this;\n\
    \    }\n\n    dynamic_modint& operator++() noexcept {\n        return dynamic_modint(*this)\
    \ += 1;\n    }\n    dynamic_modint& operator--() noexcept {\n        return dynamic_modint(*this)\
    \ -= 1;\n    }\n\n    bool operator==(const dynamic_modint& r) const noexcept\
    \ {\n        return this->val == r.val;\n    }\n    bool operator!=(const dynamic_modint&\
    \ r) const noexcept {\n        return this->val != r.val;\n    }\n\n    /*\n \
    \   friend ostream& operator<<(ostream& os, const dynamic_modint& x) const noexcept\
    \ {\n        return os << x.val;\n    }\n\n    friend istream& operator>>(istream&\
    \ is, dynamic_modint& x) noexcept {\n        long long int t;\n        is >> t;\n\
    \        x = dynamic_modint(t);\n        return (is);\n    }\n    */\n\n    friend\
    \ constexpr modpow(const dynamic_modint& a, long long int n) noexcept {\n    \
    \    if (n == 0) return 1LL;\n        auto t = modpow(a, n / 2);\n        t =\
    \ t * t;\n        if (n & 1) t = t * a;\n        return t;\n    }\n};\n\n}  //\
    \ namespace BanetteGin\n\n\n"
  code: "#ifndef BANETTEGIN_DYNAMIC_MODINT_HPP_INCLUDED\n#define BANETTEGIN_DYNAMIC_MODINT_HPP_INCLUDED\n\
    \nnamespace BanetteGin {\n\ntemplate <long long int id>\nstruct dynamic_modint\
    \ {\n    long long int val;\n    dynamic_modint(long long int v = 0) noexcept\n\
    \        : val(v % get_mod()) {\n        if (val < 0) val += get_mod();\n    }\n\
    \    static long long int& get_mod() {\n        static long long int MOD = 1;\n\
    \        return MOD;\n    }\n    static void set_mod(long long int MOD_) {\n \
    \       get_mod() = MOD_;\n        return;\n    }\n    dynamic_modint operator-()\
    \ const noexcept {\n        return val ? get_mod() - val : 0;\n    }\n\n    dynamic_modint\
    \ operator+(const dynamic_modint& r) const noexcept {\n        return dynamic_modint(*this)\
    \ += r;\n    }\n    dynamic_modint operator-(const dynamic_modint& r) const noexcept\
    \ {\n        return dynamic_modint(*this) -= r;\n    }\n    dynamic_modint operator*(const\
    \ dynamic_modint& r) const noexcept {\n        return dynamic_modint(*this) *=\
    \ r;\n    }\n    dynamic_modint operator/(const dynamic_modint& r) const noexcept\
    \ {\n        return dynamic_modint(*this) /= r;\n    }\n\n    dynamic_modint&\
    \ operator+=(const dynamic_modint& r) noexcept {\n        val += r.val;\n    \
    \    if (val >= get_mod()) val -= get_mod();\n        return *this;\n    }\n \
    \   dynamic_modint& operator-=(const dynamic_modint& r) noexcept {\n        val\
    \ -= r.val;\n        if (val < 0) val += get_mod();\n        return *this;\n \
    \   }\n    dynamic_modint& operator*=(const dynamic_modint& r) noexcept {\n  \
    \      val = val * r.val % get_mod();\n        return *this;\n    }\n    dynamic_modint&\
    \ operator/=(const dynamic_modint& r) noexcept {\n        long long int a = r.val,\
    \ b = get_mod(), u = 1, v = 0;\n        while (b) {\n            long long int\
    \ t = a / b;\n            a -= t * b;\n            std::swap(a, b);\n        \
    \    u -= t * v;\n            std::swap(u, v);\n        }\n        val = val *\
    \ u % get_mod();\n        if (val < 0) val += get_mod();\n        return *this;\n\
    \    }\n\n    dynamic_modint& operator++() noexcept {\n        return dynamic_modint(*this)\
    \ += 1;\n    }\n    dynamic_modint& operator--() noexcept {\n        return dynamic_modint(*this)\
    \ -= 1;\n    }\n\n    bool operator==(const dynamic_modint& r) const noexcept\
    \ {\n        return this->val == r.val;\n    }\n    bool operator!=(const dynamic_modint&\
    \ r) const noexcept {\n        return this->val != r.val;\n    }\n\n    /*\n \
    \   friend ostream& operator<<(ostream& os, const dynamic_modint& x) const noexcept\
    \ {\n        return os << x.val;\n    }\n\n    friend istream& operator>>(istream&\
    \ is, dynamic_modint& x) noexcept {\n        long long int t;\n        is >> t;\n\
    \        x = dynamic_modint(t);\n        return (is);\n    }\n    */\n\n    friend\
    \ constexpr modpow(const dynamic_modint& a, long long int n) noexcept {\n    \
    \    if (n == 0) return 1LL;\n        auto t = modpow(a, n / 2);\n        t =\
    \ t * t;\n        if (n & 1) t = t * a;\n        return t;\n    }\n};\n\n}  //\
    \ namespace BanetteGin\n\n#endif"
  dependsOn: []
  isVerificationFile: false
  path: src/number_theory/dynamic_modint.hpp
  requiredBy: []
  timestamp: '2023-09-07 19:32:18+09:00'
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - test/yukicoder/1092.test.cpp
documentation_of: src/number_theory/dynamic_modint.hpp
layout: document
redirect_from:
- /library/src/number_theory/dynamic_modint.hpp
- /library/src/number_theory/dynamic_modint.hpp.html
title: src/number_theory/dynamic_modint.hpp
---

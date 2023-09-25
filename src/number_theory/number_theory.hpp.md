---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/number_theory/base_change.hpp
    title: src/number_theory/base_change.hpp
  - icon: ':x:'
    path: src/number_theory/divisors.hpp
    title: src/number_theory/divisors.hpp
  - icon: ':heavy_check_mark:'
    path: src/number_theory/dynamic_modint.hpp
    title: src/number_theory/dynamic_modint.hpp
  - icon: ':heavy_check_mark:'
    path: src/number_theory/eratosthenes_sieve.hpp
    title: src/number_theory/eratosthenes_sieve.hpp
  - icon: ':heavy_check_mark:'
    path: src/number_theory/euler_phi.hpp
    title: src/number_theory/euler_phi.hpp
  - icon: ':heavy_check_mark:'
    path: src/number_theory/extend_gcd.hpp
    title: src/number_theory/extend_gcd.hpp
  - icon: ':warning:'
    path: src/number_theory/fast_pow.hpp
    title: src/number_theory/fast_pow.hpp
  - icon: ':heavy_check_mark:'
    path: src/number_theory/greatest_common_divisor.hpp
    title: src/number_theory/greatest_common_divisor.hpp
  - icon: ':heavy_check_mark:'
    path: src/number_theory/linear_sieve.hpp
    title: src/number_theory/linear_sieve.hpp
  - icon: ':heavy_check_mark:'
    path: src/number_theory/modint.hpp
    title: src/number_theory/modint.hpp
  - icon: ':heavy_check_mark:'
    path: src/number_theory/naive_sieve.hpp
    title: src/number_theory/naive_sieve.hpp
  - icon: ':heavy_check_mark:'
    path: src/number_theory/prime_check.hpp
    title: src/number_theory/prime_check.hpp
  - icon: ':heavy_check_mark:'
    path: src/number_theory/prime_factorization.hpp
    title: src/number_theory/prime_factorization.hpp
  - icon: ':heavy_check_mark:'
    path: src/number_theory/sundaram_sieve.hpp
    title: src/number_theory/sundaram_sieve.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/number_theory/number_theory.hpp\"\n\n\n\n#line 1 \"\
    src/number_theory/base_change.hpp\"\n\n\n\n#include <string>\n\nnamespace BanetteGin\
    \ {\n\ntemplate <class T>\nstd::string base_change(const std::string& num, const\
    \ T& m, const T& n) {\n    string tmp = num;\n    reverse(tmp.begin(), tmp.end());\n\
    \    T p = 1;\n    T covnum = 0;\n    for (int i = 0; i < num.size(); ++i) {\n\
    \        covnum += T(tmp[i] - '0') * p;\n        p = p * m;\n    }\n    T max_np\
    \ = 1;\n    while (max_np * n <= covnum) {\n        max_np *= n;\n    }\n    std::string\
    \ ret = \"\";\n    while (max_np != 0) {\n        ret.push_back((covnum / max_np)\
    \ + '0');\n        covnum %= max_np;\n        max_np /= n;\n    }\n    return\
    \ ret;\n}\n\n}  // namespace BanetteGin\n\n\n#line 1 \"src/number_theory/divisors.hpp\"\
    \n\n\n\n#include <vector>\n\nnamespace BanetteGin {\n\ntemplate <class T>\nstd::vector<T>\
    \ divisors(T n) {\n    std::vector<T> ret;\n    for (int i = 1; i * i <= n; ++i)\
    \ {\n        if (n % i == 0) {\n            if (i == n / i) {\n              \
    \  ret.emplace_back(i);\n            } else {\n                ret.emplace_back(i);\n\
    \                ret.emplace_back(n / i);\n            }\n        }\n    }\n \
    \   sort(ret.begin(), ret.end());\n    return ret;\n}\n\n}  // namespace BanetteGin\n\
    \n\n#line 1 \"src/number_theory/dynamic_modint.hpp\"\n\n\n\nnamespace BanetteGin\
    \ {\n\ntemplate <long long int id>\nstruct dynamic_modint {\n    long long int\
    \ val;\n    dynamic_modint(long long int v = 0) noexcept\n        : val(v % get_mod())\
    \ {\n        if (val < 0) val += get_mod();\n    }\n    static long long int&\
    \ get_mod() {\n        static long long int MOD = 1;\n        return MOD;\n  \
    \  }\n    static void set_mod(long long int MOD_) {\n        get_mod() = MOD_;\n\
    \        return;\n    }\n    dynamic_modint operator-() const noexcept {\n   \
    \     return val ? get_mod() - val : 0;\n    }\n\n    dynamic_modint operator+(const\
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
    \ r) const noexcept {\n        return this->val != r.val;\n    }\n\n    friend\
    \ std::ostream& operator<<(std::ostream& os, const dynamic_modint& x) noexcept\
    \ {\n        return os << x.val;\n    }\n\n    friend std::istream& operator>>(std::istream&\
    \ is, dynamic_modint& x) noexcept {\n        long long int t;\n        is >> t;\n\
    \        x = dynamic_modint(t);\n        return (is);\n    }\n\n    friend dynamic_modint<id>\
    \ modpow(const dynamic_modint& a, long long int n) noexcept {\n        if (n ==\
    \ 0) return 1;\n        auto t = modpow(a, n / 2);\n        t = t * t;\n     \
    \   if (n & 1) t = t * a;\n        return t;\n    }\n};\n\n}  // namespace BanetteGin\n\
    \n\n#line 1 \"src/number_theory/eratosthenes_sieve.hpp\"\n\n\n\n#line 5 \"src/number_theory/eratosthenes_sieve.hpp\"\
    \n\nnamespace BanetteGin {\n\ntemplate <class T>\nstd::vector<T> eratosthenes_sieve(T\
    \ n) {\n    std::vector<bool> ret(n + 1, true);\n    std::vector<T> prime_list;\n\
    \    ret[0] = ret[1] = false;\n    for (int i = 2; i * i <= n; ++i) {\n      \
    \  if (!ret[i]) continue;\n        for (long long int j = i * 2; j <= n; j +=\
    \ i) {\n            ret[j] = false;\n        }\n    }\n    for (int i = 2; i <=\
    \ n; ++i) {\n        if (ret[i]) prime_list.emplace_back(i);\n    }\n    return\
    \ prime_list;\n}\n\n}  // namespace BanetteGin\n\n\n#line 1 \"src/number_theory/euler_phi.hpp\"\
    \n\n\n\n#line 1 \"src/number_theory/prime_factorization.hpp\"\n\n\n\n#line 5 \"\
    src/number_theory/prime_factorization.hpp\"\n\nnamespace BanetteGin {\n\ntemplate\
    \ <class T>\nstd::vector<std::pair<T, T> > prime_factorization(T n) {\n    std::vector<std::pair<T,\
    \ T> > prime_list;\n    for (int i = 2; i * i <= n; ++i) {\n        if (n % i\
    \ == 0) {\n            long long int e = 0;\n            while (n % i == 0) {\n\
    \                n /= i;\n                e++;\n            }\n            prime_list.emplace_back(std::make_pair(i,\
    \ e));\n        }\n    }\n    if (n != 1) {\n        prime_list.emplace_back(std::make_pair(n,\
    \ 1));\n    }\n    return prime_list;\n}\n\n}  // namespace BanetteGin\n\n\n#line\
    \ 5 \"src/number_theory/euler_phi.hpp\"\n\nnamespace BanetteGin {\n\ntemplate\
    \ <class T>\nT euler_phi(const T& n) {\n    auto a = prime_factorization(n);\n\
    \    T ret = n;\n    for (int i = 0; i < a.size(); ++i) {\n        ret /= a[i].first;\n\
    \        ret *= (a[i].first - 1);\n    }\n    return ret;\n}\n\n}  // namespace\
    \ BanetteGin\n\n\n#line 1 \"src/number_theory/extend_gcd.hpp\"\n\n\n\nnamespace\
    \ BanetteGin {\n\ntemplate <class T>\nT extend_gcd(const T& a, const T& b, T&\
    \ x, T& y) {\n    if (b == 0) {\n        x = 1;\n        y = 0;\n        return\
    \ a;\n    } else {\n        T d = extend_gcd(b, a % b, y, x);\n        y -= a\
    \ / b * x;\n        return d;\n    }\n}\n\n}  // namespace BanetteGin\n\n\n#line\
    \ 1 \"src/number_theory/fast_pow.hpp\"\n\n\n\nnamespace BanetteGin {\n\ntemplate\
    \ <class T>\nT fast_pow(T a, T e) {\n    T ret = 1;\n    while (e > 0) {\n   \
    \     if (e & 1) ret *= a;\n        a *= a;\n        e >>= 1;\n    }\n    return\
    \ ret;\n}\n\n}  // namespace BanetteGin\n\n\n#line 1 \"src/number_theory/greatest_common_divisor.hpp\"\
    \n\n\n\nnamespace BanetteGin {\n\ntemplate <class T>\nT greatest_common_divisor(T\
    \ a, T b) {\n    return b == 0 ? a : greatest_common_divisor(b, a % b);\n}\n\n\
    }  // namespace BanetteGin\n\n\n#line 1 \"src/number_theory/linear_sieve.hpp\"\
    \n\n\n\n#line 5 \"src/number_theory/linear_sieve.hpp\"\n\nnamespace BanetteGin\
    \ {\n\ntemplate <class T>\nstd::vector<T> linear_sieve(T n) {\n    std::vector<T>\
    \ prime_list;\n    std::vector<T> lpf(n + 1, n + 1);\n    lpf[0] = 1;\n    lpf[1]\
    \ = 1;\n    for (int i = 2; i <= n; ++i) {\n        if (lpf[i] == n + 1) {\n \
    \           lpf[i] = i;\n            prime_list.emplace_back(i);\n        }\n\
    \        for (int j = 0; j < prime_list.size(); ++j) {\n            T p = prime_list[j];\n\
    \            if (p * i > n || p > lpf[i]) break;\n            lpf[p * i] = p;\n\
    \        }\n    }\n    return prime_list;\n}\n\n}  // namespace BanetteGin\n\n\
    \n#line 1 \"src/number_theory/modint.hpp\"\n\n\n\nnamespace BanetteGin {\n\ntemplate\
    \ <long long int MOD>\nstruct modint {\n    long long int val;\n    modint(long\
    \ long int v = 0) noexcept\n        : val(v % MOD) {\n        if (val < 0) val\
    \ += MOD;\n    }\n    long long int get_mod() const noexcept {\n        return\
    \ MOD;\n    }\n\n    modint operator+(const modint& r) const noexcept {\n    \
    \    return modint(*this) += r;\n    }\n    modint operator-(const modint& r)\
    \ const noexcept {\n        return modint(*this) -= r;\n    }\n    modint operator*(const\
    \ modint& r) const noexcept {\n        return modint(*this) *= r;\n    }\n   \
    \ modint operator/(const modint& r) const noexcept {\n        return modint(*this)\
    \ /= r;\n    }\n\n    modint& operator+=(const modint& r) noexcept {\n       \
    \ val += r.val;\n        if (val >= MOD) val -= MOD;\n        return *this;\n\
    \    }\n    modint& operator-=(const modint& r) noexcept {\n        val -= r.val;\n\
    \        if (val < 0) val += MOD;\n        return *this;\n    }\n    modint& operator*=(const\
    \ modint& r) noexcept {\n        val = val * r.val % MOD;\n        return *this;\n\
    \    }\n\n    modint& operator++() noexcept {\n        return modint(*this) +=\
    \ 1;\n    }\n    modint& operator--() noexcept {\n        return modint(*this)\
    \ -= 1;\n    }\n\n    modint& operator/=(const modint& r) noexcept {\n       \
    \ long long int a = r.val, b = MOD, u = 1, v = 0;\n        while (b) {\n     \
    \       long long int t = a / b;\n            a -= t * b;\n            std::swap(a,\
    \ b);\n            u -= t * v;\n            std::swap(u, v);\n        }\n    \
    \    val = val * u % MOD;\n        if (val < 0) val += MOD;\n        return *this;\n\
    \    }\n\n    bool operator==(const modint& r) const noexcept {\n        return\
    \ this->val == r.val;\n    }\n    bool operator!=(const modint& r) const noexcept\
    \ {\n        return this->val != r.val;\n    }\n\n    friend std::ostream& operator<<(std::ostream&\
    \ os, const modint<MOD>& x) noexcept {\n        return os << x.val;\n    }\n\n\
    \    friend std::istream& operator>>(std::istream& is, modint<MOD>& x) noexcept\
    \ {\n        long long int t;\n        is >> t;\n        x = modint(t);\n    \
    \    return (is);\n    }\n\n    friend modint<MOD> modpow(const modint<MOD>& a,\
    \ long long int n) noexcept {\n        if (n == 0) return 1;\n        auto t =\
    \ modpow(a, n / 2);\n        t = t * t;\n        if (n & 1) t = t * a;\n     \
    \   return t;\n    }\n};\n\n}  // namespace BanetteGin\n\n\n#line 1 \"src/number_theory/naive_sieve.hpp\"\
    \n\n\n\n#line 5 \"src/number_theory/naive_sieve.hpp\"\n\n#line 1 \"src/number_theory/prime_check.hpp\"\
    \n\n\n\nnamespace BanetteGin {\n\ntemplate <class T>\nbool prime_check(T n) {\n\
    \    if (n < 2) return false;\n    if (n != 2 && n % 2 == 0) return false;\n \
    \   for (int i = 3; i * i <= n; i += 2)\n        if (n % i == 0) return false;\n\
    \    return true;\n}\n\n}  // namespace BanetteGin\n\n\n#line 7 \"src/number_theory/naive_sieve.hpp\"\
    \n\nnamespace BanetteGin {\n\ntemplate <class T>\nstd::vector<T> naive_sieve(T\
    \ n) {\n    std::vector<T> prime_list;\n    if (n < 2) return prime_list;\n  \
    \  prime_list.emplace_back(2);\n    for (int i = 3; i <= n; i += 2) {\n      \
    \  if (prime_check(i)) prime_list.emplace_back(i);\n    }\n    return prime_list;\n\
    }\n\n}  // namespace BanetteGin\n\n\n#line 1 \"src/number_theory/sundaram_sieve.hpp\"\
    \n\n\n\n#line 5 \"src/number_theory/sundaram_sieve.hpp\"\n\nnamespace BanetteGin\
    \ {\n\ntemplate <class T>\nstd::vector<T> sundaram_sieve(T n) {\n    std::vector<bool>\
    \ ret((n + 1) / 2, true);\n    std::vector<T> prime_list;\n    if (n < 2) return\
    \ prime_list;\n    prime_list.emplace_back(2);\n    ret[0] = false;\n    T m =\
    \ ((n + 1) / 2 - 2) / 3;\n    for (int a = 1; a <= m; ++a) {\n        for (int\
    \ b = 1; b <= a && a + b + 2 * a * b <= (n + 1) / 2 - 1; ++b) {\n            ret[a\
    \ + b + 2 * a * b] = false;\n        }\n    }\n    for (T i = 0; i < ret.size();\
    \ ++i) {\n        if (ret[i]) prime_list.emplace_back(i * 2 + 1);\n    }\n   \
    \ return prime_list;\n}\n\n}  // namespace BanetteGin\n\n\n#line 18 \"src/number_theory/number_theory.hpp\"\
    \n\n\n"
  code: '#ifndef BANETTEGIN_NUMBER_THEORY_HPP_INCLUDED

    #define BANETTEGIN_NUMBER_THEORY_HPP_INCLUDED


    #include "base_change.hpp"

    #include "divisors.hpp"

    #include "dynamic_modint.hpp"

    #include "eratosthenes_sieve.hpp"

    #include "euler_phi.hpp"

    #include "extend_gcd.hpp"

    #include "fast_pow.hpp"

    #include "greatest_common_divisor.hpp"

    #include "linear_sieve.hpp"

    #include "modint.hpp"

    #include "naive_sieve.hpp"

    #include "prime_check.hpp"

    #include "prime_factorization.hpp"

    #include "sundaram_sieve.hpp"


    #endif'
  dependsOn:
  - src/number_theory/base_change.hpp
  - src/number_theory/divisors.hpp
  - src/number_theory/dynamic_modint.hpp
  - src/number_theory/eratosthenes_sieve.hpp
  - src/number_theory/euler_phi.hpp
  - src/number_theory/prime_factorization.hpp
  - src/number_theory/extend_gcd.hpp
  - src/number_theory/fast_pow.hpp
  - src/number_theory/greatest_common_divisor.hpp
  - src/number_theory/linear_sieve.hpp
  - src/number_theory/modint.hpp
  - src/number_theory/naive_sieve.hpp
  - src/number_theory/prime_check.hpp
  - src/number_theory/sundaram_sieve.hpp
  isVerificationFile: false
  path: src/number_theory/number_theory.hpp
  requiredBy: []
  timestamp: '2023-09-25 19:49:37+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/number_theory/number_theory.hpp
layout: document
redirect_from:
- /library/src/number_theory/number_theory.hpp
- /library/src/number_theory/number_theory.hpp.html
title: src/number_theory/number_theory.hpp
---

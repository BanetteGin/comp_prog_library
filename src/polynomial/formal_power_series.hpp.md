---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/basic/comparison.hpp
    title: src/basic/comparison.hpp
  - icon: ':heavy_check_mark:'
    path: src/basic/constant.hpp
    title: src/basic/constant.hpp
  - icon: ':heavy_check_mark:'
    path: src/basic/equal.hpp
    title: src/basic/equal.hpp
  - icon: ':warning:'
    path: src/basic/fast_complex.hpp
    title: src/basic/fast_complex.hpp
  - icon: ':heavy_check_mark:'
    path: src/basic/greater_equal.hpp
    title: src/basic/greater_equal.hpp
  - icon: ':heavy_check_mark:'
    path: src/basic/greater_than.hpp
    title: src/basic/greater_than.hpp
  - icon: ':heavy_check_mark:'
    path: src/basic/less_equal.hpp
    title: src/basic/less_equal.hpp
  - icon: ':heavy_check_mark:'
    path: src/basic/less_than.hpp
    title: src/basic/less_than.hpp
  - icon: ':heavy_check_mark:'
    path: src/basic/sign.hpp
    title: src/basic/sign.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/polynomial/formal_power_series.hpp\"\n\n\n\n#include\
    \ <vector>\n\n#line 1 \"src/basic/comparison.hpp\"\n\n\n\n#line 1 \"src/basic/equal.hpp\"\
    \n\n\n\n#line 1 \"src/basic/sign.hpp\"\n\n\n\n#line 1 \"src/basic/constant.hpp\"\
    \n\n\n\nnamespace BanetteGin {\n\nconst long double EPS = 1e-15L;\nconst long\
    \ long int LINF = 1001001001001001001LL;\nconst long double PI = acos(-1.0L);\n\
    const long double GOLDEN_RATIO = (1 + sqrt(5)) / 2;\n\n}  // namespace BanetteGin\n\
    \n\n#line 5 \"src/basic/sign.hpp\"\n\nnamespace BanetteGin {\n\ntemplate <class\
    \ T>\nint sign(const T& x) {\n    return (x < -EPS ? -1 : (x < EPS ? 0 : 1));\n\
    }\n\n}  // namespace BanetteGin\n\n\n#line 5 \"src/basic/equal.hpp\"\n\nnamespace\
    \ BanetteGin {\n\ntemplate <class T>\nbool equal(const T &a, const T &b) {\n \
    \   return (sign(a - b) == 0);\n}\n\n}  // namespace BanetteGin\n\n\n#line 1 \"\
    src/basic/greater_equal.hpp\"\n\n\n\nnamespace BanetteGin {\n\ntemplate <class\
    \ T>\nbool greater_equal(const T &a, const T &b) {\n    return (sign(a - b) >=\
    \ 0);\n}\n\n}  // namespace BanetteGin\n\n\n#line 1 \"src/basic/greater_than.hpp\"\
    \n\n\n\nnamespace BanetteGin {\n\ntemplate <class T>\nbool greater_than(const\
    \ T &a, const T &b) {\n    return (sign(a - b) > 0);\n}\n\n}  // namespace BanetteGin\n\
    \n\n#line 1 \"src/basic/less_equal.hpp\"\n\n\n\nnamespace BanetteGin {\n\ntemplate\
    \ <class T>\nbool less_equal(const T &a, const T &b) {\n    return (sign(a - b)\
    \ <= 0);\n}\n\n}  // namespace BanetteGin\n\n\n#line 1 \"src/basic/less_than.hpp\"\
    \n\n\n\nnamespace BanetteGin {\n\ntemplate <class T>\nbool less_than(const T &a,\
    \ const T &b) {\n    return (sign(a - b) < 0);\n}\n\n}  // namespace BanetteGin\n\
    \n\n#line 9 \"src/basic/comparison.hpp\"\n\n\n#line 1 \"src/basic/fast_complex.hpp\"\
    \n\n\n\n#include <complex>\n\nnamespace BanetteGin {\n\ntemplate <class T>\nstruct\
    \ fast_complex {\n    T real_part, imag_part;\n\n    fast_complex()\n        :\
    \ real_part(0), imag_part(0) {\n    }\n    fast_complex(const T& real_part, const\
    \ T& imag_part)\n        : real_part(real_part), imag_part(imag_part) {\n    }\n\
    \    fast_complex(const T& real_part)\n        : real_part(real_part), imag_part(0)\
    \ {\n    }\n    fast_complex(const std::complex<T>& c)\n        : real_part(c.real()),\
    \ imag_part(c.imag()) {\n    }\n\n    T& real() noexcept {\n        return this->real_part;\n\
    \    }\n    T& imag() noexcept {\n        return this->imag_part;\n    }\n   \
    \ T& abs() const noexcept {\n        return std::hypot(this->real_part, this->imag_part);\n\
    \    }\n    T& arg() const noexcept {\n        return std::atan2(this->imag_part,\
    \ this->real_part);\n    }\n    fast_complex<T> operator+(const fast_complex<T>&\
    \ rhs) const noexcept {\n        return fast_complex(*this) += rhs;\n    }\n \
    \   fast_complex<T> operator+(const T& rhs) const noexcept {\n        return fast_complex<T>(*this)\
    \ += (fast_complex<T>(rhs));\n    }\n\n    fast_complex<T> operator-(const fast_complex<T>&\
    \ rhs) const noexcept {\n        return fast_complex<T>(*this) -= rhs;\n    }\n\
    \    fast_complex<T> operator-(const T& rhs) const noexcept {\n        return\
    \ fast_complex<T>(*this) -= (fast_complex<T>(rhs));\n    }\n\n    fast_complex<T>\
    \ operator*(const fast_complex<T>& rhs) const noexcept {\n        return fast_complex<T>(*this)\
    \ *= rhs;\n    }\n    fast_complex<T> operator*(const T& rhs) const noexcept {\n\
    \        return fast_complex<T>(*this) *= (fast_complex<T>(rhs));\n    }\n\n \
    \   fast_complex<T> operator/(const fast_complex<T>& rhs) const noexcept {\n \
    \       return fast_complex<T>(*this) /= rhs;\n    }\n    fast_complex<T> operator/(const\
    \ T& rhs) const noexcept {\n        return fast_complex<T>(*this) /= (fast_complex<T>(rhs));\n\
    \    }\n\n    fast_complex<T>& operator+=(const fast_complex<T>& rhs) noexcept\
    \ {\n        this->real_part += rhs.real_part;\n        this->imag_part += rhs.imag_part;\n\
    \        return *this;\n    }\n    fast_complex<T>& operator-=(const fast_complex<T>&\
    \ rhs) noexcept {\n        this->real_part -= rhs.real_part;\n        this->imag_part\
    \ -= rhs.imag_part;\n        return *this;\n    }\n    fast_complex<T>& operator*=(const\
    \ fast_complex<T>& rhs) noexcept {\n        T tmpreal = this->real_part;\n   \
    \     this->real_part = this->real_part * rhs.real_part - this->imag_part * rhs.imag_part;\n\
    \        this->imag_part = tmpreal * rhs.imag_part + rhs.real_part * this->imag_part;\n\
    \        return *this;\n    }\n    fast_complex<T>& operator/=(const fast_complex<T>&\
    \ rhs) noexcept {\n        *this *= fast_complex<T>(rhs.real_part, -rhs.imag_part);\n\
    \        T dnm = rhs.real_part * rhs.real_part + rhs.imag_part * rhs.imag_part;\n\
    \        this->real_part /= dnm;\n        this->imag_part /= dnm;\n        return\
    \ *this;\n    }\n};\n}  // namespace BanetteGin\n\n\n#line 8 \"src/polynomial/formal_power_series.hpp\"\
    \n\nnamespace BanetteGin {\n\ntemplate <class T>\nstruct formal_power_series :\
    \ std::vector<T> {\n    using P = formal_power_series<T>;\n    void shrink() noexcept\
    \ {\n        while (this->size() && equal(this->back(), T(0))) this->pop_back();\n\
    \        return;\n    }\n    void dft(std::vector<BanetteGin::fast_complex<T>>\
    \ &func, int inverse) noexcept {\n        int sz = func.size();\n        if (sz\
    \ == 1) return;\n        std::vector<BanetteGin::fast_complex<T>> even, odd;\n\
    \        for (int i = 0; i < sz / 2; ++i) {\n            even.push_back(func[2\
    \ * i]);\n            odd.push_back(func[2 * i + 1]);\n        }\n        dft(even,\
    \ inverse);\n        dft(odd, inverse);\n        BanetteGin::fast_complex<T> now\
    \ = 1, zeta = std::polar(T(1), T(inverse * 2 * acos(-1) / sz));\n        for (int\
    \ i = 0; i < sz; ++i) {\n            func[i] = even[i % (sz / 2)] + now * odd[i\
    \ % (sz / 2)];\n            now *= zeta;\n        }\n        return;\n    }\n\
    \    P operator+(const P &r) const noexcept {\n        return P(*this) += r;\n\
    \    }\n\n    P operator+(const T &v) const noexcept {\n        return P(*this)\
    \ += v;\n    }\n\n    P operator-(const P &r) const noexcept {\n        return\
    \ P(*this) -= r;\n    }\n\n    P operator-(const T &v) const noexcept {\n    \
    \    return P(*this) -= v;\n    }\n\n    P operator*(const P &r) const noexcept\
    \ {\n        return P(*this) *= r;\n    }\n\n    P operator*(const T &v) const\
    \ noexcept {\n        return P(*this) *= v;\n    }\n\n    P operator/(const P\
    \ &r) const noexcept {\n        return P(*this) /= r;\n    }\n\n    P operator%(const\
    \ P &r) const noexcept {\n        return P(*this) %= r;\n    }\n\n    P &operator+=(const\
    \ P &r) noexcept {\n        if (r.size() > this->size()) this->resize(r.size());\n\
    \        for (int i = 0; i < r.size(); i++) (*this)[i] += r[i];\n        return\
    \ *this;\n    }\n\n    P &operator+=(const T &r) noexcept {\n        if (this->empty())\
    \ this->resize(1);\n        (*this)[0] += r;\n        return *this;\n    }\n\n\
    \    P &operator-=(const P &r) noexcept {\n        if (r.size() > this->size())\
    \ this->resize(r.size());\n        for (int i = 0; i < r.size(); i++) (*this)[i]\
    \ -= r[i];\n        shrink();\n        return *this;\n    }\n\n    P &operator-=(const\
    \ T &r) noexcept {\n        if (this->empty()) this->resize(1);\n        (*this)[0]\
    \ -= r;\n        shrink();\n        return *this;\n    }\n\n    P &operator*=(const\
    \ T &v) noexcept {\n        const int n = (int)this->size();\n        for (int\
    \ k = 0; k < n; k++) (*this)[k] *= v;\n        return *this;\n    }\n\n    P &operator*=(const\
    \ P &r) noexcept {\n        if (this->empty() || r.empty()) {\n            this->clear();\n\
    \            return *this;\n        }\n        std::vector<BanetteGin::fast_complex<T>>\
    \ nf, ng;\n        int sz = 1;\n        while (sz < (*this).size() + r.size())\
    \ sz *= 2;\n        nf.resize(sz, 0);\n        ng.resize(sz, 0);\n        for\
    \ (int i = 0; i < (*this).size(); ++i) {\n            nf[i] = (*this)[i];\n  \
    \      }\n        for (int i = 0; i < r.size(); ++i) {\n            ng[i] = r[i];\n\
    \        }\n        dft(nf, 1);\n        dft(ng, 1);\n        for (int i = 0;\
    \ i < sz; ++i) {\n            nf[i] *= ng[i];\n        }\n        dft(nf, -1);\n\
    \        P ret;\n        for (int i = 0; i < sz; ++i) {\n            ret.emplace_back(nf[i].real()\
    \ / sz);\n        }\n        ret.shrink();\n        return (*this) = ret;\n  \
    \  }\n\n    P &operator%=(const P &r) noexcept {\n        return (*this) -= (*this)\
    \ / r * r;\n    }\n\n    P operator-() const noexcept {\n        P ret(this->size());\n\
    \        for (int i = 0; i < this->size(); i++) ret[i] = -(*this)[i];\n      \
    \  return ret;\n    }\n};\n\n}  // namespace BanetteGin\n\n\n"
  code: "#ifndef BANETTEGIN_FORMAL_POWER_SERIES_HPP_INCLUDED\n#define BANETTEGIN_FORMAL_POWER_SERIES_HPP_INCLUDED\n\
    \n#include <vector>\n\n#include \"../basic/comparison.hpp\"\n#include \"../basic/fast_complex.hpp\"\
    \n\nnamespace BanetteGin {\n\ntemplate <class T>\nstruct formal_power_series :\
    \ std::vector<T> {\n    using P = formal_power_series<T>;\n    void shrink() noexcept\
    \ {\n        while (this->size() && equal(this->back(), T(0))) this->pop_back();\n\
    \        return;\n    }\n    void dft(std::vector<BanetteGin::fast_complex<T>>\
    \ &func, int inverse) noexcept {\n        int sz = func.size();\n        if (sz\
    \ == 1) return;\n        std::vector<BanetteGin::fast_complex<T>> even, odd;\n\
    \        for (int i = 0; i < sz / 2; ++i) {\n            even.push_back(func[2\
    \ * i]);\n            odd.push_back(func[2 * i + 1]);\n        }\n        dft(even,\
    \ inverse);\n        dft(odd, inverse);\n        BanetteGin::fast_complex<T> now\
    \ = 1, zeta = std::polar(T(1), T(inverse * 2 * acos(-1) / sz));\n        for (int\
    \ i = 0; i < sz; ++i) {\n            func[i] = even[i % (sz / 2)] + now * odd[i\
    \ % (sz / 2)];\n            now *= zeta;\n        }\n        return;\n    }\n\
    \    P operator+(const P &r) const noexcept {\n        return P(*this) += r;\n\
    \    }\n\n    P operator+(const T &v) const noexcept {\n        return P(*this)\
    \ += v;\n    }\n\n    P operator-(const P &r) const noexcept {\n        return\
    \ P(*this) -= r;\n    }\n\n    P operator-(const T &v) const noexcept {\n    \
    \    return P(*this) -= v;\n    }\n\n    P operator*(const P &r) const noexcept\
    \ {\n        return P(*this) *= r;\n    }\n\n    P operator*(const T &v) const\
    \ noexcept {\n        return P(*this) *= v;\n    }\n\n    P operator/(const P\
    \ &r) const noexcept {\n        return P(*this) /= r;\n    }\n\n    P operator%(const\
    \ P &r) const noexcept {\n        return P(*this) %= r;\n    }\n\n    P &operator+=(const\
    \ P &r) noexcept {\n        if (r.size() > this->size()) this->resize(r.size());\n\
    \        for (int i = 0; i < r.size(); i++) (*this)[i] += r[i];\n        return\
    \ *this;\n    }\n\n    P &operator+=(const T &r) noexcept {\n        if (this->empty())\
    \ this->resize(1);\n        (*this)[0] += r;\n        return *this;\n    }\n\n\
    \    P &operator-=(const P &r) noexcept {\n        if (r.size() > this->size())\
    \ this->resize(r.size());\n        for (int i = 0; i < r.size(); i++) (*this)[i]\
    \ -= r[i];\n        shrink();\n        return *this;\n    }\n\n    P &operator-=(const\
    \ T &r) noexcept {\n        if (this->empty()) this->resize(1);\n        (*this)[0]\
    \ -= r;\n        shrink();\n        return *this;\n    }\n\n    P &operator*=(const\
    \ T &v) noexcept {\n        const int n = (int)this->size();\n        for (int\
    \ k = 0; k < n; k++) (*this)[k] *= v;\n        return *this;\n    }\n\n    P &operator*=(const\
    \ P &r) noexcept {\n        if (this->empty() || r.empty()) {\n            this->clear();\n\
    \            return *this;\n        }\n        std::vector<BanetteGin::fast_complex<T>>\
    \ nf, ng;\n        int sz = 1;\n        while (sz < (*this).size() + r.size())\
    \ sz *= 2;\n        nf.resize(sz, 0);\n        ng.resize(sz, 0);\n        for\
    \ (int i = 0; i < (*this).size(); ++i) {\n            nf[i] = (*this)[i];\n  \
    \      }\n        for (int i = 0; i < r.size(); ++i) {\n            ng[i] = r[i];\n\
    \        }\n        dft(nf, 1);\n        dft(ng, 1);\n        for (int i = 0;\
    \ i < sz; ++i) {\n            nf[i] *= ng[i];\n        }\n        dft(nf, -1);\n\
    \        P ret;\n        for (int i = 0; i < sz; ++i) {\n            ret.emplace_back(nf[i].real()\
    \ / sz);\n        }\n        ret.shrink();\n        return (*this) = ret;\n  \
    \  }\n\n    P &operator%=(const P &r) noexcept {\n        return (*this) -= (*this)\
    \ / r * r;\n    }\n\n    P operator-() const noexcept {\n        P ret(this->size());\n\
    \        for (int i = 0; i < this->size(); i++) ret[i] = -(*this)[i];\n      \
    \  return ret;\n    }\n};\n\n}  // namespace BanetteGin\n\n#endif"
  dependsOn:
  - src/basic/comparison.hpp
  - src/basic/equal.hpp
  - src/basic/sign.hpp
  - src/basic/constant.hpp
  - src/basic/greater_equal.hpp
  - src/basic/greater_than.hpp
  - src/basic/less_equal.hpp
  - src/basic/less_than.hpp
  - src/basic/fast_complex.hpp
  isVerificationFile: false
  path: src/polynomial/formal_power_series.hpp
  requiredBy: []
  timestamp: '2023-10-06 19:20:51+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/polynomial/formal_power_series.hpp
layout: document
redirect_from:
- /library/src/polynomial/formal_power_series.hpp
- /library/src/polynomial/formal_power_series.hpp.html
title: src/polynomial/formal_power_series.hpp
---

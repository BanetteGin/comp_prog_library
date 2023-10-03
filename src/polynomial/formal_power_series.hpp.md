---
data:
  _extendedDependsOn:
  - icon: ':warning:'
    path: src/basic/fast_complex.hpp
    title: src/basic/fast_complex.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/polynomial/formal_power_series.hpp\"\n\n\n\n#include\
    \ <vector>\n\n#line 1 \"src/basic/fast_complex.hpp\"\n\n\n\n#include <complex>\n\
    \nnamespace BanetteGin {\n\ntemplate <class T>\nstruct fast_complex {\n    T real_part,\
    \ imag_part;\n\n    fast_complex()\n        : real_part(0), imag_part(0) {\n \
    \   }\n    fast_complex(const T& realvalue, const T& imagvalue)\n        : real_part(realvalue),\
    \ imag_part(imagvalue) {\n    }\n    fast_complex(const T& realvalue)\n      \
    \  : real_part(realvalue), imag_part(0) {\n    }\n    fast_complex(const std::complex<T>&\
    \ c)\n        : real_part(c.real()), imag_part(c.imag()) {\n    }\n\n    T& real()\
    \ const noexcept {\n        return this->real_part;\n    }\n    T& imag() const\
    \ noexcept {\n        return this->imag_part;\n    }\n    T& abs() const noexcept\
    \ {\n        return std::hypot(this->real_part, this->imag_part);\n    }\n   \
    \ T& arg() const noexcept {\n        return std::atan2(this->imag_part, this->real_part);\n\
    \    }\n\n    fast_complex operator+(const T& rhs) const noexcept {\n        return\
    \ fast_complex(*this) += rhs;\n    }\n    fast_complex& operator+=(const T& rhs)\
    \ noexcept {\n        return fast_complex(*this) += (fast_complex(rhs));\n   \
    \ }\n    fast_complex operator-(const T& rhs) const noexcept {\n        return\
    \ fast_complex(*this) -= rhs;\n    }\n    fast_complex& operator-=(const T& rhs)\
    \ noexcept {\n        return fast_complex(*this) -= (fast_complex(rhs));\n   \
    \ }\n    fast_complex operator*(const T& rhs) const noexcept {\n        return\
    \ fast_complex(*this) *= rhs;\n    }\n    fast_complex& operator*=(const T& rhs)\
    \ noexcept {\n        return fast_complex(*this) *= (fast_complex(rhs));\n   \
    \ }\n    fast_complex operator/(const T& rhs) const noexcept {\n        return\
    \ fast_complex(*this) /= rhs;\n    }\n    fast_complex& operator/=(const T& rhs)\
    \ noexcept {\n        return fast_complex(*this) /= (fast_complex(rhs));\n   \
    \ }\n    fast_complex& operator+=(const fast_complex& rhs) noexcept {\n      \
    \  this->realvalue += rhs.realvalue;\n        this->imagvalue += rhs.imagvalue;\n\
    \        return *this;\n    }\n    fast_complex& operator-=(const fast_complex&\
    \ rhs) noexcept {\n        this->realvalue -= rhs.realvalue;\n        this->imagvalue\
    \ -= rhs.imagvalue;\n        return *this;\n    }\n    fast_complex& operator*=(const\
    \ fast_complex& rhs) noexcept {\n        T tmpreal = this->realvalue;\n      \
    \  this->realvalue = this->realvalue * rhs.realvalue - this->imagvalue * rhs.imagvalue;\n\
    \        this->imagvalue = tmpreal * rhs.imagvalue + rhs.realvalue * this->imagvalue;\n\
    \        return *this;\n    }\n    fast_complex& operator/=(const fast_complex&\
    \ rhs) noexcept {\n        *this *= fast_complex(rhs.realvalue, -rhs.imagvalue);\n\
    \        T dnm = rhs.realvalue * rhs.realvalue + rhs.imagvalue * rhs.imagvalue;\n\
    \        this->realvalue /= dnm;\n        this->imagvalue /= dnm;\n        return\
    \ *this;\n    }\n};\n}  // namespace BanetteGin\n\n\n#line 7 \"src/polynomial/formal_power_series.hpp\"\
    \n\nnamespace BanetteGin {\n\ntemplate <class T>\nstruct formal_power_series :\
    \ std::vector<T> {\n    using P = formal_power_series;\n    void shrink() noexcept\
    \ {\n        while (this->size() && this->back() == T(0)) this->pop_back();\n\
    \        return;\n    }\n    void dft(P &func, int inverse) noexcept {\n     \
    \   int sz = func.size();\n        if (sz == 1) return;\n        std::vector<BanetteGin::fast_complex<T>>\
    \ even, odd;\n        for (int i = 0; i < sz / 2; ++i) {\n            even.push_back(func[2\
    \ * i]);\n            odd.push_back(func[2 * i + 1]);\n        }\n        dft(even,\
    \ inverse);\n        dft(odd, inverse);\n        BanetteGin::fast_complex<T> now\
    \ = 1, zeta = polar(T(1), inverse * T(2) * M_PI / sz);\n        for (int i = 0;\
    \ i < sz; ++i) {\n            func[i] = even[i % (sz / 2)] + now * odd[i % (sz\
    \ / 2)];\n            now *= zeta;\n        }\n        return;\n    }\n    P operator+(const\
    \ P &r) const noexcept {\n        return P(*this) += r;\n    }\n\n    P operator+(const\
    \ T &v) const noexcept {\n        return P(*this) += v;\n    }\n\n    P operator-(const\
    \ P &r) const noexcept {\n        return P(*this) -= r;\n    }\n\n    P operator-(const\
    \ T &v) const noexcept {\n        return P(*this) -= v;\n    }\n\n    P operator*(const\
    \ P &r) const noexcept {\n        return P(*this) *= r;\n    }\n\n    P operator*(const\
    \ T &v) const noexcept {\n        return P(*this) *= v;\n    }\n\n    P operator/(const\
    \ P &r) const noexcept {\n        return P(*this) /= r;\n    }\n\n    P operator%(const\
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
    \ nf, ng;\n        int sz = 1;\n        while (sz < f.size() + g.size()) sz *=\
    \ 2;\n        nf.resize(sz, 0);\n        ng.resize(sz, 0);\n        for (int i\
    \ = 0; i < f.size(); ++i) {\n            nf[i] = f[i];\n        }\n        for\
    \ (int i = 0; i < g.size(); ++i) {\n            ng[i] = g[i];\n        }\n   \
    \     dft(nf, 1);\n        dft(ng, 1);\n        for (int i = 0; i < sz; ++i) {\n\
    \            nf[i] *= ng[i];\n        }\n        dft(nf, -1);\n        P res;\n\
    \        for (int i = 0; i < sz; ++i) {\n            res.emplace_back(nf[i].real()\
    \ / sz)\n        }\n        res.shrink();\n        return res;\n    }\n\n    P\
    \ &operator%=(const P &r) noexcept {\n        return *this -= *this / r * r;\n\
    \    }\n\n    P operator-() const noexcept {\n        P ret(this->size());\n \
    \       for (int i = 0; i < this->size(); i++) ret[i] = -(*this)[i];\n       \
    \ return ret;\n    }\n\n    P &operator/=(const P &r) {\n        if (this->size()\
    \ < r.size()) {\n            this->clear();\n            return *this;\n     \
    \   }\n        int n = this->size() - r.size() + 1;\n        return *this = (rev().pre(n)\
    \ * r.rev().inv(n)).pre(n).rev(n);\n    }\n};\n\n}  // namespace BanetteGin\n\n\
    \n"
  code: "#ifndef BANETTEGIN_FORMAL_POWER_SERIES_HPP_INCLUDED\n#define BANETTEGIN_FORMAL_POWER_SERIES_HPP_INCLUDED\n\
    \n#include <vector>\n\n#include \"../basic/fast_complex.hpp\"\n\nnamespace BanetteGin\
    \ {\n\ntemplate <class T>\nstruct formal_power_series : std::vector<T> {\n   \
    \ using P = formal_power_series;\n    void shrink() noexcept {\n        while\
    \ (this->size() && this->back() == T(0)) this->pop_back();\n        return;\n\
    \    }\n    void dft(P &func, int inverse) noexcept {\n        int sz = func.size();\n\
    \        if (sz == 1) return;\n        std::vector<BanetteGin::fast_complex<T>>\
    \ even, odd;\n        for (int i = 0; i < sz / 2; ++i) {\n            even.push_back(func[2\
    \ * i]);\n            odd.push_back(func[2 * i + 1]);\n        }\n        dft(even,\
    \ inverse);\n        dft(odd, inverse);\n        BanetteGin::fast_complex<T> now\
    \ = 1, zeta = polar(T(1), inverse * T(2) * M_PI / sz);\n        for (int i = 0;\
    \ i < sz; ++i) {\n            func[i] = even[i % (sz / 2)] + now * odd[i % (sz\
    \ / 2)];\n            now *= zeta;\n        }\n        return;\n    }\n    P operator+(const\
    \ P &r) const noexcept {\n        return P(*this) += r;\n    }\n\n    P operator+(const\
    \ T &v) const noexcept {\n        return P(*this) += v;\n    }\n\n    P operator-(const\
    \ P &r) const noexcept {\n        return P(*this) -= r;\n    }\n\n    P operator-(const\
    \ T &v) const noexcept {\n        return P(*this) -= v;\n    }\n\n    P operator*(const\
    \ P &r) const noexcept {\n        return P(*this) *= r;\n    }\n\n    P operator*(const\
    \ T &v) const noexcept {\n        return P(*this) *= v;\n    }\n\n    P operator/(const\
    \ P &r) const noexcept {\n        return P(*this) /= r;\n    }\n\n    P operator%(const\
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
    \ nf, ng;\n        int sz = 1;\n        while (sz < f.size() + g.size()) sz *=\
    \ 2;\n        nf.resize(sz, 0);\n        ng.resize(sz, 0);\n        for (int i\
    \ = 0; i < f.size(); ++i) {\n            nf[i] = f[i];\n        }\n        for\
    \ (int i = 0; i < g.size(); ++i) {\n            ng[i] = g[i];\n        }\n   \
    \     dft(nf, 1);\n        dft(ng, 1);\n        for (int i = 0; i < sz; ++i) {\n\
    \            nf[i] *= ng[i];\n        }\n        dft(nf, -1);\n        P res;\n\
    \        for (int i = 0; i < sz; ++i) {\n            res.emplace_back(nf[i].real()\
    \ / sz)\n        }\n        res.shrink();\n        return res;\n    }\n\n    P\
    \ &operator%=(const P &r) noexcept {\n        return *this -= *this / r * r;\n\
    \    }\n\n    P operator-() const noexcept {\n        P ret(this->size());\n \
    \       for (int i = 0; i < this->size(); i++) ret[i] = -(*this)[i];\n       \
    \ return ret;\n    }\n\n    P &operator/=(const P &r) {\n        if (this->size()\
    \ < r.size()) {\n            this->clear();\n            return *this;\n     \
    \   }\n        int n = this->size() - r.size() + 1;\n        return *this = (rev().pre(n)\
    \ * r.rev().inv(n)).pre(n).rev(n);\n    }\n};\n\n}  // namespace BanetteGin\n\n\
    #endif"
  dependsOn:
  - src/basic/fast_complex.hpp
  isVerificationFile: false
  path: src/polynomial/formal_power_series.hpp
  requiredBy: []
  timestamp: '2023-10-04 06:52:17+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/polynomial/formal_power_series.hpp
layout: document
redirect_from:
- /library/src/polynomial/formal_power_series.hpp
- /library/src/polynomial/formal_power_series.hpp.html
title: src/polynomial/formal_power_series.hpp
---

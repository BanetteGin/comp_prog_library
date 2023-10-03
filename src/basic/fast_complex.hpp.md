---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':warning:'
    path: src/polynomial/formal_power_series.hpp
    title: src/polynomial/formal_power_series.hpp
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/basic/fast_complex.hpp\"\n\n\n\n#include <complex>\n\
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
    \ *this;\n    }\n};\n}  // namespace BanetteGin\n\n\n"
  code: "#ifndef BANETTEGIN_FAST_COMPLEX_HPP_INCLUDED\n#define BANETTEGIN_FAST_COMPLEX_HPP_INCLUDED\n\
    \n#include <complex>\n\nnamespace BanetteGin {\n\ntemplate <class T>\nstruct fast_complex\
    \ {\n    T real_part, imag_part;\n\n    fast_complex()\n        : real_part(0),\
    \ imag_part(0) {\n    }\n    fast_complex(const T& realvalue, const T& imagvalue)\n\
    \        : real_part(realvalue), imag_part(imagvalue) {\n    }\n    fast_complex(const\
    \ T& realvalue)\n        : real_part(realvalue), imag_part(0) {\n    }\n    fast_complex(const\
    \ std::complex<T>& c)\n        : real_part(c.real()), imag_part(c.imag()) {\n\
    \    }\n\n    T& real() const noexcept {\n        return this->real_part;\n  \
    \  }\n    T& imag() const noexcept {\n        return this->imag_part;\n    }\n\
    \    T& abs() const noexcept {\n        return std::hypot(this->real_part, this->imag_part);\n\
    \    }\n    T& arg() const noexcept {\n        return std::atan2(this->imag_part,\
    \ this->real_part);\n    }\n\n    fast_complex operator+(const T& rhs) const noexcept\
    \ {\n        return fast_complex(*this) += rhs;\n    }\n    fast_complex& operator+=(const\
    \ T& rhs) noexcept {\n        return fast_complex(*this) += (fast_complex(rhs));\n\
    \    }\n    fast_complex operator-(const T& rhs) const noexcept {\n        return\
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
    \ *this;\n    }\n};\n}  // namespace BanetteGin\n\n#endif"
  dependsOn: []
  isVerificationFile: false
  path: src/basic/fast_complex.hpp
  requiredBy:
  - src/polynomial/formal_power_series.hpp
  timestamp: '2023-10-04 06:52:17+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/basic/fast_complex.hpp
layout: document
redirect_from:
- /library/src/basic/fast_complex.hpp
- /library/src/basic/fast_complex.hpp.html
title: src/basic/fast_complex.hpp
---

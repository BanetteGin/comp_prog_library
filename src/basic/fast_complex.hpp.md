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
    \   }\n    fast_complex(const T& real_part, const T& imag_part)\n        : real_part(real_part),\
    \ imag_part(imag_part) {\n    }\n    fast_complex(const T& real_part)\n      \
    \  : real_part(real_part), imag_part(0) {\n    }\n    fast_complex(const std::complex<T>&\
    \ c)\n        : real_part(c.real()), imag_part(c.imag()) {\n    }\n\n    T& real()\
    \ noexcept {\n        return this->real_part;\n    }\n    T& imag() noexcept {\n\
    \        return this->imag_part;\n    }\n    T& abs() const noexcept {\n     \
    \   return std::hypot(this->real_part, this->imag_part);\n    }\n    T& arg()\
    \ const noexcept {\n        return std::atan2(this->imag_part, this->real_part);\n\
    \    }\n    fast_complex<T> operator+(const fast_complex<T>& rhs) const noexcept\
    \ {\n        return fast_complex(*this) += rhs;\n    }\n    fast_complex<T> operator+(const\
    \ T& rhs) const noexcept {\n        return fast_complex<T>(*this) += (fast_complex<T>(rhs));\n\
    \    }\n\n    fast_complex<T> operator-(const fast_complex<T>& rhs) const noexcept\
    \ {\n        return fast_complex<T>(*this) -= rhs;\n    }\n    fast_complex<T>\
    \ operator-(const T& rhs) const noexcept {\n        return fast_complex<T>(*this)\
    \ -= (fast_complex<T>(rhs));\n    }\n\n    fast_complex<T> operator*(const fast_complex<T>&\
    \ rhs) const noexcept {\n        return fast_complex<T>(*this) *= rhs;\n    }\n\
    \    fast_complex<T> operator*(const T& rhs) const noexcept {\n        return\
    \ fast_complex<T>(*this) *= (fast_complex<T>(rhs));\n    }\n\n    fast_complex<T>\
    \ operator/(const fast_complex<T>& rhs) const noexcept {\n        return fast_complex<T>(*this)\
    \ /= rhs;\n    }\n    fast_complex<T> operator/(const T& rhs) const noexcept {\n\
    \        return fast_complex<T>(*this) /= (fast_complex<T>(rhs));\n    }\n\n \
    \   fast_complex<T>& operator+=(const fast_complex<T>& rhs) noexcept {\n     \
    \   this->real_part += rhs.real_part;\n        this->imag_part += rhs.imag_part;\n\
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
    \ *this;\n    }\n};\n}  // namespace BanetteGin\n\n\n"
  code: "#ifndef BANETTEGIN_FAST_COMPLEX_HPP_INCLUDED\n#define BANETTEGIN_FAST_COMPLEX_HPP_INCLUDED\n\
    \n#include <complex>\n\nnamespace BanetteGin {\n\ntemplate <class T>\nstruct fast_complex\
    \ {\n    T real_part, imag_part;\n\n    fast_complex()\n        : real_part(0),\
    \ imag_part(0) {\n    }\n    fast_complex(const T& real_part, const T& imag_part)\n\
    \        : real_part(real_part), imag_part(imag_part) {\n    }\n    fast_complex(const\
    \ T& real_part)\n        : real_part(real_part), imag_part(0) {\n    }\n    fast_complex(const\
    \ std::complex<T>& c)\n        : real_part(c.real()), imag_part(c.imag()) {\n\
    \    }\n\n    T& real() noexcept {\n        return this->real_part;\n    }\n \
    \   T& imag() noexcept {\n        return this->imag_part;\n    }\n    T& abs()\
    \ const noexcept {\n        return std::hypot(this->real_part, this->imag_part);\n\
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
    \ *this;\n    }\n};\n}  // namespace BanetteGin\n\n#endif"
  dependsOn: []
  isVerificationFile: false
  path: src/basic/fast_complex.hpp
  requiredBy:
  - src/polynomial/formal_power_series.hpp
  timestamp: '2023-10-06 19:20:51+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/basic/fast_complex.hpp
layout: document
redirect_from:
- /library/src/basic/fast_complex.hpp
- /library/src/basic/fast_complex.hpp.html
title: src/basic/fast_complex.hpp
---

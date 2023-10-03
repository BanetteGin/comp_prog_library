#ifndef BANETTEGIN_FAST_COMPLEX_HPP_INCLUDED
#define BANETTEGIN_FAST_COMPLEX_HPP_INCLUDED

#include <complex>

namespace BanetteGin {

template <class T>
struct fast_complex {
    T real_part, imag_part;

    fast_complex()
        : real_part(0), imag_part(0) {
    }
    fast_complex(const T& realvalue, const T& imagvalue)
        : real_part(realvalue), imag_part(imagvalue) {
    }
    fast_complex(const T& realvalue)
        : real_part(realvalue), imag_part(0) {
    }
    fast_complex(const std::complex<T>& c)
        : real_part(c.real()), imag_part(c.imag()) {
    }

    T& real() const noexcept {
        return this->real_part;
    }
    T& imag() const noexcept {
        return this->imag_part;
    }
    T& abs() const noexcept {
        return std::hypot(this->real_part, this->imag_part);
    }
    T& arg() const noexcept {
        return std::atan2(this->imag_part, this->real_part);
    }

    fast_complex operator+(const T& rhs) const noexcept {
        return fast_complex(*this) += rhs;
    }
    fast_complex& operator+=(const T& rhs) noexcept {
        return fast_complex(*this) += (fast_complex(rhs));
    }
    fast_complex operator-(const T& rhs) const noexcept {
        return fast_complex(*this) -= rhs;
    }
    fast_complex& operator-=(const T& rhs) noexcept {
        return fast_complex(*this) -= (fast_complex(rhs));
    }
    fast_complex operator*(const T& rhs) const noexcept {
        return fast_complex(*this) *= rhs;
    }
    fast_complex& operator*=(const T& rhs) noexcept {
        return fast_complex(*this) *= (fast_complex(rhs));
    }
    fast_complex operator/(const T& rhs) const noexcept {
        return fast_complex(*this) /= rhs;
    }
    fast_complex& operator/=(const T& rhs) noexcept {
        return fast_complex(*this) /= (fast_complex(rhs));
    }
    fast_complex& operator+=(const fast_complex& rhs) noexcept {
        this->realvalue += rhs.realvalue;
        this->imagvalue += rhs.imagvalue;
        return *this;
    }
    fast_complex& operator-=(const fast_complex& rhs) noexcept {
        this->realvalue -= rhs.realvalue;
        this->imagvalue -= rhs.imagvalue;
        return *this;
    }
    fast_complex& operator*=(const fast_complex& rhs) noexcept {
        T tmpreal = this->realvalue;
        this->realvalue = this->realvalue * rhs.realvalue - this->imagvalue * rhs.imagvalue;
        this->imagvalue = tmpreal * rhs.imagvalue + rhs.realvalue * this->imagvalue;
        return *this;
    }
    fast_complex& operator/=(const fast_complex& rhs) noexcept {
        *this *= fast_complex(rhs.realvalue, -rhs.imagvalue);
        T dnm = rhs.realvalue * rhs.realvalue + rhs.imagvalue * rhs.imagvalue;
        this->realvalue /= dnm;
        this->imagvalue /= dnm;
        return *this;
    }
};
}  // namespace BanetteGin

#endif
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
    fast_complex(const T& real_part, const T& imag_part)
        : real_part(real_part), imag_part(imag_part) {
    }
    fast_complex(const T& real_part)
        : real_part(real_part), imag_part(0) {
    }
    fast_complex(const std::complex<T>& c)
        : real_part(c.real()), imag_part(c.imag()) {
    }

    T& real() noexcept {
        return this->real_part;
    }
    T& imag() noexcept {
        return this->imag_part;
    }
    T& abs() const noexcept {
        return std::hypot(this->real_part, this->imag_part);
    }
    T& arg() const noexcept {
        return std::atan2(this->imag_part, this->real_part);
    }
    fast_complex<T> operator+(const fast_complex<T>& rhs) const noexcept {
        return fast_complex(*this) += rhs;
    }
    fast_complex<T> operator+(const T& rhs) const noexcept {
        return fast_complex<T>(*this) += (fast_complex<T>(rhs));
    }

    fast_complex<T> operator-(const fast_complex<T>& rhs) const noexcept {
        return fast_complex<T>(*this) -= rhs;
    }
    fast_complex<T> operator-(const T& rhs) const noexcept {
        return fast_complex<T>(*this) -= (fast_complex<T>(rhs));
    }

    fast_complex<T> operator*(const fast_complex<T>& rhs) const noexcept {
        return fast_complex<T>(*this) *= rhs;
    }
    fast_complex<T> operator*(const T& rhs) const noexcept {
        return fast_complex<T>(*this) *= (fast_complex<T>(rhs));
    }

    fast_complex<T> operator/(const fast_complex<T>& rhs) const noexcept {
        return fast_complex<T>(*this) /= rhs;
    }
    fast_complex<T> operator/(const T& rhs) const noexcept {
        return fast_complex<T>(*this) /= (fast_complex<T>(rhs));
    }

    fast_complex<T>& operator+=(const fast_complex<T>& rhs) noexcept {
        this->real_part += rhs.real_part;
        this->imag_part += rhs.imag_part;
        return *this;
    }
    fast_complex<T>& operator-=(const fast_complex<T>& rhs) noexcept {
        this->real_part -= rhs.real_part;
        this->imag_part -= rhs.imag_part;
        return *this;
    }
    fast_complex<T>& operator*=(const fast_complex<T>& rhs) noexcept {
        T tmpreal = this->real_part;
        this->real_part = this->real_part * rhs.real_part - this->imag_part * rhs.imag_part;
        this->imag_part = tmpreal * rhs.imag_part + rhs.real_part * this->imag_part;
        return *this;
    }
    fast_complex<T>& operator/=(const fast_complex<T>& rhs) noexcept {
        *this *= fast_complex<T>(rhs.real_part, -rhs.imag_part);
        T dnm = rhs.real_part * rhs.real_part + rhs.imag_part * rhs.imag_part;
        this->real_part /= dnm;
        this->imag_part /= dnm;
        return *this;
    }
};
}  // namespace BanetteGin

#endif
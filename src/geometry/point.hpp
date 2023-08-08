#ifndef BANETTEGIN_POINT_HPP_INCLUDED
#define BANETTEGIN_POINT_HPP_INCLUDED

#include <complex>

#include "equal.hpp"

namespace BanetteGin {

template <class T>
struct point {
    T x, y;
    point(T x_, T y_)
        : x(x_), y(y_) {
    }

    point operator+(const point& p) const noexcept {
        return point<T>(this->x + p.x, this->y + p.y);
    }
    point operator-(const point& p) const noexcept {
        return point<T>(this->x - p.x, this->y - p.y);
    }
    point operator*(const T& a) const noexcept {
        return point<T>(this->x * a, this->y * a);
    }
    point operator/(const T& a) const noexcept {
        return point<T>(this->x / a, this->y / a);
    }

    point& operator+=(const point& p) noexcept {
        this->x += p.x;
        this->y += p.y;
        return *this;
    }
    point& operator-=(const point& p) noexcept {
        this->x -= p.x;
        this->y -= p.y;
        return *this;
    }
    point& operator*=(const T& a) noexcept {
        this->x *= a;
        this->y *= a;
        return *this;
    }
    point& operator/=(const T& a) noexcept {
        this->x /= a;
        this->y /= a;
        return *this;
    }

    bool operator==(const point& p) const noexcept {
        return equal(this->x, p.x) && equal(this->y, p.y);
    }
    bool operator!=(const point& p) const noexcept {
        return !equal(this->x, p.x) || !equal(this->y, p.y);
    }

    T dot(const point& p, const point& q) const noexcept {
        return p.x * q.x + p.y * q.y;
    }
    T cross(const point& p, const point& q) const noexcept {
        return p.x * q.y - p.y * q.x;
    }
};

}  // namespace BanetteGin

#endif
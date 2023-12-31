#ifndef BANETTEGIN_POINT_HPP_INCLUDED
#define BANETTEGIN_POINT_HPP_INCLUDED

#include <complex>

#include "../basic/comparison.hpp"

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
    bool operator<(const point& p) const noexcept {
        return !equal(this->x, p.x) || !equal(this->y, p.y);
    }

    friend T dot(const point& p, const point& q) noexcept {
        return p.x * q.x + p.y * q.y;
    }
    friend T cross(const point& p, const point& q) noexcept {
        return p.x * q.y - p.y * q.x;
    }
    friend T norm(const point& p) {
        return sqrt(p.x * p.x + p.y * p.y);
    }
    friend T arg(const point& p) {
        return atan2(p.y, p.x);
    }
};

}  // namespace BanetteGin

#endif
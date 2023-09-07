#ifndef BANETTEGIN_LINE_HPP_INCLUDED
#define BANETTEGIN_LINE_HPP_INCLUDED

#include "../basic/comparison.hpp"
#include "point.hpp"

namespace BanetteGin {

template <class T>
struct line {
    T a, b, c;
    point<T> p, q;
    line(point<T> p_, point<T> q_)
        : a(q_.y - p_.y), b(p_.x - q_.x), c(-p_.x * q_.y + q_.x * p_.y) {
        normalize();
    }
    line(point<T> p_, T m_)
        : a(m_), b(-1), c(p_.y - m_ * p_.x) {
        normalize();
    }
    line(T a_, T b_, T c_)
        : a(a_), b(b_), c(c_) {
        normalize();
    }
    void normalize() {
        if (!equal(a, 0)) {
            b /= a;
            c /= a;
            a = 1;
        } else if (!equal(b, 0)) {
            b = 1;
            c /= b;
        } else {
            assert(c == 0);
        }
        bool a_zero = equal(a, 0);
        bool b_zero = equal(b, 0);
        if (!a_zero && !b_zero) {
            p = point(-(c / a), 0);
            q = point(0, -(c / b));
        } else if (!a_zero && b_zero) {
            p = point(-(c / a), 0);
            q = point(-(c / a), 1);
        } else if (a_zero && !b_zero) {
            p = point(1, -(c / b));
            q = point(0, -(c / b));
        } else if (a_zero && b_zero) {
            p = point(0, 0);
            q = point(1, 0);
        }
        return;
    }
    bool operator==(const line& l) const noexcept {
        return equal(this->a, l.a) && equal(this->b, l.b) && equal(this->c, l.c);
    }
    bool operator!=(const line& l) const noexcept {
        return !equal(this->a, l.a) || !equal(this->b, l.b) || !equal(this->c, l.c);
    }
};

}  // namespace BanetteGin

#endif
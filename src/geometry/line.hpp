#ifndef BANETTEGIN_LINE_HPP_INCLUDED
#define BANETTEGIN_LINE_HPP_INCLUDED

#include "../basic/equal.hpp"
#include "point.hpp"

namespace BanetteGin {

template <class T>
struct line {
    T a, b, c;
    line(point<T> p_, point<T> q_)
        : a(q_.y - p_.y), b(p_.x - q_.x), c(-p_.x * q_.y + q_.x * p_.y) {
        if (!equal(a, 0)) {
            a = 1;
            b /= a;
            c /= a;
        } else if (!equal(b, 0)) {
            b = 1;
            c /= b;
        }
    }
    line(point<T> p_, T m_)
        : a(m_), b(-1), c(p_.y - m_ * p_.x) {
        if (!equal(a, 0)) {
            b /= a;
            c /= a;
            a = 1;
        } else if (!equal(b, 0)) {
            c /= b;
            b = 1;
        }
    }
    line(T a_, T b_, T c_)
        : a(a_), b(b_), c(c_) {
        if (!equal(a, 0)) {
            b /= a;
            c /= a;
            a = 1;
        } else if (!equal(b, 0)) {
            c /= b;
            b = 1;
        }
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
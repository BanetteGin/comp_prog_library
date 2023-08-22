#ifndef BANETTEGIN_CIRCLE_HPP_INCLUDED
#define BANETTEGIN_CIRCLE_HPP_INCLUDED

#include "../basic/comparison.hpp"
#include "distance_point_and_point.hpp"
#include "point.hpp"
#include "segment.hpp"
#include "triangle.hpp"

namespace BanetteGin {

template <class T>
struct circle {
    point<T> p;
    T r;
    circle(point<T> p_, T r_)
        : p(p_), r(r_) {
    }
    circle(point<T> p_, point<T> q_)
        : p(p_), r(distance_point_and_point(p_, q_)) {
    }
    circle(point<T> p_, point<T> q_, point<T> r_)
        : p(triangle(p_, q_, r_).circumcenter().first), r(triangle(p_, q_, r_).circumcenter().second) {
    }
    bool operator==(const circle& c) const noexcept {
        return equal(this->p, c.p) && equal(this->r, c.r);
    }
    bool operator!=(const circle& c) const noexcept {
        return !equal(this->p, c.p) || !equal(this->r, c.r);
    }
};

}  // namespace BanetteGin

#endif
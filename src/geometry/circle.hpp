#ifndef BANETTEGIN_CIRCLE_HPP_INCLUDED
#define BANETTEGIN_CIRCLE_HPP_INCLUDED

#include "../basic/comparison.hpp"
#include "distance.hpp"
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
        : p(p_), r(distance(p_, q_)) {
    }
    circle(point<T> p_, point<T> q_, point<T> r_)
        : p(constracter_circumcircle(triangle(p_, q_, r_)).p), r(constracter_circumcircle(triangle(p_, q_, r_)).r) {
    }
    bool operator==(const circle& c) const noexcept {
        return equal(this->p, c.p) && equal(this->r, c.r);
    }
    bool operator!=(const circle& c) const noexcept {
        return !equal(this->p, c.p) || !equal(this->r, c.r);
    }

private:
    circle<T> constracter_circumcircle(triangle<T> t) {
        point ret = point(0.0L, 0.0L);
        T denom = 0.0L;
        for (int i = 0; i < 3; ++i) {
            ret += t.points[i] * sin(2 * t.angles[i]);
            denom += sin(2 * t.angles[i]);
        }
        T r = t.lengths[0] / sin(t.angles[0]) / 2;
        return circle(ret / denom, r);
    }
};

}  // namespace BanetteGin

#endif
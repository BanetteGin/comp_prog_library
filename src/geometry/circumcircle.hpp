#ifndef BANETTEGIN_CIRCUMCIRCLE_HPP_INCLUDED
#define BANETTEGIN_CIRCUMCIRCLE_HPP_INCLUDED

#include "circle.hpp"
#include "triangle.hpp"

namespace BanetteGin {

template <class T>
circle<T> circumcircle(triangle<T> t) {
    point ret = point(0.0L, 0.0L);
    T denom = 0.0L;
    for (int i = 0; i < 3; ++i) {
        ret += t.points[i] * sin(2.0L * t.angles[i]);
        denom += sin(2.0L * t.angles[i]);
    }
    T r = t.lengths[0] / sin(t.angles[0]) / 2;
    return circle(ret / denom, r);
}

}  // namespace BanetteGin

#endif
#ifndef BANETTEGIN_EXCIRCLE_HPP_INCLUDED
#define BANETTEGIN_EXCIRCLE_HPP_INCLUDED

#include "circle.hpp"
#include "triangle.hpp"

namespace BanetteGin {

template <class T>
circle<T> excircle(triangle<T> t, int option = 0) {
    assert(0 <= option && option <= 2);
    point ret = point(0.0L, 0.0L);
    T denom = 0.0L;
    for (int i = 0; i < 3; ++i) {
        T sgn = 1;
        if (i == option) sgn = -1;
        ret += t.points[i] * sgn * t.lengths[i];
        denom += sgn * t.lengths[i];
    }

    T r = t.area * 2 / denom;
    return circle(ret / denom, r);
}

}  // namespace BanetteGin

#endif
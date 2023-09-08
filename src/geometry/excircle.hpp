#ifndef BANETTEGIN_EXCIRCLE_HPP_INCLUDED
#define BANETTEGIN_EXCIRCLE_HPP_INCLUDED

#include "circle.hpp"
#include "triangle.hpp"

namespace BanetteGin {

template <class T>
circle<T> excircle(triangle<T> t, int option = 0) {
    assert(0 <= option && option <= 2);
    point ret = point(T(0), T(0));
    T denom = T(0);
    for (int i = 0; i < 3; ++i) {
        T sgn = 1.0;
        if (i == option) sgn = -1.0;
        ret += t.points[i] * sgn * t.lengths[i];
        denom += sgn * t.lengths[i];
    }

    T r = t.area * T(2) / denom;
    return circle(ret / denom, r);
}

}  // namespace BanetteGin

#endif
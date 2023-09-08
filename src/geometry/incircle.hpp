#ifndef BANETTEGIN_INCIRCLE_HPP_INCLUDED
#define BANETTEGIN_INCIRCLE_HPP_INCLUDED

#include "circle.hpp"
#include "triangle.hpp"

namespace BanetteGin {

template <class T>
circle<T> incircle(triangle<T> t) {
    point ret = point(T(0), T(0));
    T denom = T(0);
    for (int i = 0; i < 3; ++i) {
        ret += t.points[i] * t.lengths[i];
        denom += t.lengths[i];
    }
    T r = t.area * T(2) / denom;
    return circle(ret / denom, r);
}

}  // namespace BanetteGin

#endif
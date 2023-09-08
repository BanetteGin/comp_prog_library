#ifndef BANETTEGIN_INCENTER_HPP_INCLUDED
#define BANETTEGIN_INCENTER_HPP_INCLUDED

#include "triangle.hpp"

namespace BanetteGin {

template <class T>
point<T> incenter(triangle<T> t) {
    point ret = point(0.0L, 0.0L);
    T denom = 0.0L;
    for (int i = 0; i < 3; ++i) {
        ret += t.points[i] * t.lengths[i];
        denom += t.lengths[i];
    }
    return ret / denom;
}

}  // namespace BanetteGin

#endif
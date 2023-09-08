#ifndef BANETTEGIN_ORTHOCENTER_HPP_INCLUDED
#define BANETTEGIN_ORTHOCENTER_HPP_INCLUDED

#include "triangle.hpp"

namespace BanetteGin {

template <class T>
point<T> orthocenter(triangle<T> t) {
    point ret = point(0.0L, 0.0L);
    T denom = 0.0L;
    for (int i = 0; i < 3; ++i) {
        ret += t.points[i] * tan(t.angles[i]);
        denom += tan(t.angles[i]);
    }
    return ret / denom;
}

}  // namespace BanetteGin

#endif
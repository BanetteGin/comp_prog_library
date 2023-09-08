#ifndef BANETTEGIN_EXCENTER_HPP_INCLUDED
#define BANETTEGIN_EXCENTER_HPP_INCLUDED

#include "triangle.hpp"

namespace BanetteGin {

template <class T>
point<T> excenter(triangle<T> t, int option = 0) {
    point ret = point(0, 0);
    T denom = 0;
    for (int i = 0; i < 3; ++i) {
        T sgn = 1;
        if (i == option) sgn = -1;
        ret += t.points[i] * sgn * t.lengths[i];
        denom += sgn * t.lengths[i];
    }
    return ret / denom;
}

}  // namespace BanetteGin

#endif
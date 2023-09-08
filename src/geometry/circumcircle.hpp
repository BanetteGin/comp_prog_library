#ifndef BANETTEGIN_CIRCUMCIRCLE_HPP_INCLUDED
#define BANETTEGIN_CIRCUMCIRCLE_HPP_INCLUDED

#include "circle.hpp"
#include "triangle.hpp"

namespace BanetteGin {

template <class T>
circle<T> circumcircle(triangle<T> t) {
    point ret = point(T(0), T(0));
    for (int i = 0; i < 3; ++i) {
        T mlt = 0;
        for (int j = 0; j < 3; ++j) {
            if (i == j)
                mlt += -pow(t.lengths[j], T(2));
            else
                mlt += pow(t.lengths[j], T(2));
        }
        mlt *= pow(t.lengths[i], T(2));
        ret += t.points[i] * mlt;
    }
    T r = t.lengths[0] / sin(t.angles[0]) / T(2);
    return circle(ret / (T(16) * pow(t.area, T(2))), r);
}

}  // namespace BanetteGin

#endif
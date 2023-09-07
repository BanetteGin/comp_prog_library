#ifndef BANETTEGIN_CIRCUMRADIUS_HPP_INCLUDED
#define BANETTEGIN_CIRCUMRADIUS_HPP_INCLUDED

#include "triangle.hpp"

namespace BanetteGin {

template <class T>
T circumradius(triangle<T> t) {
    T r = t.length_a / sin(t.angle_a) / 2;
    return r;
}

}  // namespace BanetteGin

#endif
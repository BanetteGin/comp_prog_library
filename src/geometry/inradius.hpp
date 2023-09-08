#ifndef BANETTEGIN_INRADIUS_HPP_INCLUDED
#define BANETTEGIN_INRADIUS_HPP_INCLUDED

#include "triangle.hpp"

namespace BanetteGin {

template <class T>
point<T> inradius(triangle<T> t) {
    T r = t.area * 2 / (t.lengths[0] + t.lengths[1] + t.lengths[2]);
    return r;
}

}  // namespace BanetteGin

#endif
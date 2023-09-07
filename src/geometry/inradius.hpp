#ifndef BANETTEGIN_INRADIUS_HPP_INCLUDED
#define BANETTEGIN_INRADIUS_HPP_INCLUDED

#include "triangle.hpp"

namespace BanetteGin {

template <class T>
point<T> inradius(triangle<T> t) {
    T r = t.area * 2 / (t.length_a + t.length_b + t.length_c);
    return r;
}

}  // namespace BanetteGin

#endif
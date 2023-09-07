#ifndef BANETTEGIN_INCENTER_HPP_INCLUDED
#define BANETTEGIN_INCENTER_HPP_INCLUDED

#include "triangle.hpp"

namespace BanetteGin {

template <class T>
point<T> incenter(triangle<T> t) {
    point<T> o = (t.point_a * t.length_a + t.point_b * t.length_b + t.point_c * t.length_c) / (t.length_a + t.length_b + t.length_c);
    return o;
}

}  // namespace BanetteGin

#endif
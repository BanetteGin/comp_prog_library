#ifndef BANETTEGIN_CENTROID_HPP_INCLUDED
#define BANETTEGIN_CENTROID_HPP_INCLUDED

#include "triangle.hpp"

namespace BanetteGin {

template <class T>
point<T> centroid(triangle<T> t) {
    return (t.point_a + t.point_b + t.point_c) / 3;
}

}  // namespace BanetteGin

#endif
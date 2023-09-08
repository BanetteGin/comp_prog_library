#ifndef BANETTEGIN_CENTROID_HPP_INCLUDED
#define BANETTEGIN_CENTROID_HPP_INCLUDED

#include "triangle.hpp"

namespace BanetteGin {

template <class T>
point<T> centroid(triangle<T> t) {
    return (t.points[0] + t.points[1] + t.points[2]) / 3;
}

}  // namespace BanetteGin

#endif
#ifndef BANETTEGIN_DISTANCE_POINT_AND_POINT_HPP_INCLUDED
#define BANETTEGIN_DISTANCE_POINT_AND_POINT_HPP_INCLUDED

#include "point.hpp"

namespace BanetteGin {

template <class T>
T distance_point_and_point(point<T> p, point<T> q) {
    return sqrt(pow(p.x - q.x, 2) + pow(p.y - q.y, 2));
}

}  // namespace BanetteGin

#endif
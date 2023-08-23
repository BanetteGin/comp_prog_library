#ifndef BANETTEGIN_DISTANCE_POINT_AND_LINE_HPP_INCLUDED
#define BANETTEGIN_DISTANCE_POINT_AND_LINE_HPP_INCLUDED

#include "line.hpp"
#include "point.hpp"

namespace BanetteGin {

template <class T>
T distance_point_and_line(point<T> p, line<T> l) {
    return abs(p.x * l.a + p.y * l.b + l.c) / sqrt(l.a * l.a + l.b * l.b);
}

}  // namespace BanetteGin

#endif
#ifndef BANETTEGIN_DISTANCE_HPP_INCLUDED
#define BANETTEGIN_DISTANCE_HPP_INCLUDED

#include "line.hpp"
#include "point.hpp"
#include "segment.hpp"

namespace BanetteGin {

template <class T>
T distance(point<T> p, point<T> q) {
    return sqrt(pow(p.x - q.x, T(2)) + pow(p.y - q.y, T(2)));
}

template <class T>
T distance(point<T> p, line<T> l) {
    return abs(p.x * l.a + p.y * l.b + l.c) / sqrt(l.a * l.a + l.b * l.b);
}

template <class T>
T distance(point<T> p, segment<T> s) {
}

template <class T>
T distance(segment<T> s, segment<T> t) {
}

}  // namespace BanetteGin

#endif
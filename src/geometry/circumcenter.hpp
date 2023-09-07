#ifndef BANETTEGIN_CIRCUMCENTER_HPP_INCLUDED
#define BANETTEGIN_CIRCUMCENTER_HPP_INCLUDED

#include "triangle.hpp"

namespace BanetteGin {

template <class T>
point<T> circumcenter(triangle<T> t) {
    point<T> o = (t.point_a * sin(2 * t.angle_a) + t.point_b * sin(2 * t.angle_b) + t.point_c * sin(2 * t.angle_c)) / (sin(2 * t.angle_a) + sin(2 * t.angle_b) + sin(2 * t.angle_c));
    return o;
}

}  // namespace BanetteGin

#endif
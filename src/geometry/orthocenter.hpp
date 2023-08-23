#ifndef BANETTEGIN_ORTHOCENTER_HPP_INCLUDED
#define BANETTEGIN_ORTHOCENTER_HPP_INCLUDED

#include "triangle.hpp"

namespace BanetteGin {

template <class T>
point<T> orthocenter(triangle<T> t) {
    return (t.point_a * tan(t.angle_a) + t.point_b * tan(t.angle_b) + t.point_c * tan(t.angle_c)) / (tan(t.angle_a) + tan(t.angle_b) + tan(t.angle_c));
}

}  // namespace BanetteGin

#endif
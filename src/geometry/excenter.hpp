#ifndef BANETTEGIN_EXCENTER_HPP_INCLUDED
#define BANETTEGIN_EXCENTER_HPP_INCLUDED

#include "triangle.hpp"

namespace BanetteGin {

template <class T>
std::pair<point<T>, T> excenter(triangle<T> t,int option = 0) {
    point<T> o = (t.point_a * t.length_a + t.point_b * t.length_b + t.point_c * t.length_c) / (t.length_a + t.length_b + t.length_c);
    T r = t.area * 2 / (t.length_a + t.length_b + t.length_c);
    return std::make_pair(o, r);
}

}  // namespace BanetteGin

#endif
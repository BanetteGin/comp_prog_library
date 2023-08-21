#ifndef BANETTEGIN_SEGMENT_HPP_INCLUDED
#define BANETTEGIN_SEGMENT_HPP_INCLUDED

#include "distance_point_and_point.hpp"
#include "point.hpp"

namespace BanetteGin {

template <class T>
struct segment {
    point<T> p, q;
    T length;
    segment(point<T> p_, point<T> q_)
        : p(p_), q(q_), length(distance_between_point_and_point(p, q)) {
    }
};

}  // namespace BanetteGin

#endif
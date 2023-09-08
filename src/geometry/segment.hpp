#ifndef BANETTEGIN_SEGMENT_HPP_INCLUDED
#define BANETTEGIN_SEGMENT_HPP_INCLUDED

#include "distance.hpp"
#include "point.hpp"

namespace BanetteGin {

template <class T>
struct segment {
    point<T> p, q;
    T length;
    segment(point<T> p_, point<T> q_)
        : p(p_), q(q_), length(sqrt(pow(p_.x - q_.x, T(2)) + pow(p_.y - q_.y, T(2)))) {
    }
};

}  // namespace BanetteGin

#endif
#ifndef BANETTEGIN_SEGMENT_HPP_INCLUDED
#define BANETTEGIN_SEGMENT_HPP_INCLUDED

#include "point.hpp"

namespace BanetteGin {

template <class T>
struct segment {
    point<T> p, q;
    T len;
    segment(point<T> p_, point<T> q_)
        : p(p_), q(q_), len(sqrt(pow(p.x - q.x, 2) + pow(p.y - q.y, 2))) {
    }
    T length() {
        return len;
    }
};

}  // namespace BanetteGin

#endif
#ifndef BANETTEGIN_INTERSECT_CIRCLE_AND_CIRCLE_HPP_INCLUDED
#define BANETTEGIN_INTERSECT_CIRCLE_AND_CIRCLE_HPP_INCLUDED

#include "../basic/comparison.hpp"
#include "circle.hpp"
#include "distance_point_and_point.hpp"

namespace BanetteGin {

template <class T>
int intersect_circle_and_circle(const circle<T>& c1, const circle<T>& c2) {
    T d = distance_between_point_and_point(c1.p, c2.p);
    if (greater_than(d, c1.r + c2.r)) {
        return 4;
    }
    if (greater_than(d, c1.r + c2.r)) {
        return 3;
    }
    if (equal(d, abs(c1.r - c2.r))) {
        return 1;
    }
    if (less_than(d, abs(c1.r - c2.r))) {
        return 0;
    }
    return 2;
}

}  // namespace BanetteGin

#endif
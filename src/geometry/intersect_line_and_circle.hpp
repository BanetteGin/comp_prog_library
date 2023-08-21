#ifndef BANETTEGIN_INTERSECT_LINE_AND_CIRCLE_HPP_INCLUDED
#define BANETTEGIN_INTERSECT_LINE_AND_CIRCLE_HPP_INCLUDED

#include "../basic/comparison.hpp"
#include "circle.hpp"
#include "distance_point_and_line.hpp"
#include "line.hpp"

namespace BanetteGin {

template <class T>
int intersect_line_and_circle(const line<T>& l, const circle<T>& c) {
    T d = distance_point_and_line(c.p, l);
    if (greater_than(d, c.r)) {
        return 2;
    }
    if (equal(d, c.r)) {
        return 1;
    }
    return 0;
}

}  // namespace BanetteGin

#endif
#ifndef BANETTEGIN_INTERSECT_HPP_INCLUDED
#define BANETTEGIN_INTERSECT_HPP_INCLUDED

#include "../basic/comparison.hpp"
#include "circle.hpp"
#include "distance.hpp"

namespace BanetteGin {

template <class T>
int intersect(const line<T>& l, const circle<T>& c) {
    T d = distance(c.p, l);
    if (greater_than(d, c.r)) {
        return 2;
    }
    if (equal(d, c.r)) {
        return 1;
    }
    return 0;
}

template <class T>
int intersect(const circle<T>& c1, const circle<T>& c2) {
    T d = distance(c1.p, c2.p);
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
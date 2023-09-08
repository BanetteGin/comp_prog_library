#ifndef BANETTEGIN_CONCYCLIC_HPP_INCLUDED
#define BANETTEGIN_CONCYCLIC_HPP_INCLUDED

#include "point.hpp"

namespace BanetteGin {

template <class T>
bool concyclic(std::vector<T> points) {
    assert(points.size() >= 3);
    if (points.size() == 3) return true;
    T theta = triangle(points[0], points[1], points[2]).angles[2];
    for (long long int i = 3; i < points.size(); ++i) {
        if (triangle(points[0], points[1], points[i]).angles[2] != theta) return false;
    }
    return true;
}

}  // namespace BanetteGin

#endif
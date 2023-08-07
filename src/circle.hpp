#ifndef BANETTEGIN_CIRCLE_HPP_INCLUDED
#define BANETTEGIN_CIRCLE_HPP_INCLUDED

#include "point.hpp"
#include "segment.hpp"
#include "triangle.hpp"

namespace BanetteGin {

template <class T>
struct circle {
    point<T> p;
    T r;
    circle(point<T> p_, point<T> q_, point<T> r_)
        : p(triangle(p_, q_, r_).circumcenter().first), r(triangle(p_, q_, r_).circumcenter().second) {
    }
};

}  // namespace BanetteGin

#endif
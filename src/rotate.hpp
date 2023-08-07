#ifndef BANETTEGIN_ROTATE_HPP_INCLUDED
#define BANETTEGIN_ROTATE_HPP_INCLUDED

#include "point.hpp"

namespace BanetteGin {

template <class T>
point<T> rotate(const point<T>& p, const T& theta) {
    return point<T>(cos(theta) * p.x - sin(theta) * p.y, sin(theta) * p.x + cos(theta) * p.y);
}

}  // namespace BanetteGin

#endif
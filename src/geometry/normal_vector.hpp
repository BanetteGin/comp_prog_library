#ifndef BANETTEGIN_NORMAL_VECTOR_HPP_INCLUDED
#define BANETTEGIN_NORMAL_VECTOR_HPP_INCLUDED

#include "point.hpp"

namespace BanetteGin {

template <class T>
point<T> normal_vector(const point<T>& p) {
    return p * point(0, 1);
}

}  // namespace BanetteGin

#endif
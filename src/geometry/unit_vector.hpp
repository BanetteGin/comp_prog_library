#ifndef BANETTEGIN_UNIT_VECTOR_HPP_INCLUDED
#define BANETTEGIN_UNIT_VECTOR_HPP_INCLUDED

#include "point.hpp"

namespace BanetteGin {

template <class T>
point<T> unit_vector(const point<T>& p) {
    return p / norm(p);
}

}  // namespace BanetteGin

#endif
#ifndef BANETTEGIN_EQUAL_HPP_INCLUDED
#define BANETTEGIN_EQUAL_HPP_INCLUDED

#include "constant.hpp"

namespace BanetteGin {

template <class T>
bool equal(const T &a, const T &b) {
    const T dif = a - b;
    if (dif < 0) dif = -dif;
    return dif < EPS;
}

}  // namespace BanetteGin

#endif
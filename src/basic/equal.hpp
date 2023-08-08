#ifndef BANETTEGIN_EQUAL_HPP_INCLUDED
#define BANETTEGIN_EQUAL_HPP_INCLUDED

#include "sign.hpp"

namespace BanetteGin {

template <class T>
bool equal(const T &a, const T &b) {
    return (sign(a - b) == 0);
}

}  // namespace BanetteGin

#endif
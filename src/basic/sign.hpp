#ifndef BANETTEGIN_SIGN_HPP_INCLUDED
#define BANETTEGIN_SIGN_HPP_INCLUDED

#include "constant.hpp"

namespace BanetteGin {

template <class T>
int sign(const T& x) {
    return (x < -EPS ? -1 : (x < EPS ? 0 : 1));
}

}  // namespace BanetteGin

#endif
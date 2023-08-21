#ifndef BANETTEGIN_DEGREE_TO_RADIAN_HPP_INCLUDED
#define BANETTEGIN_DEGREE_TO_RADIAN_HPP_INCLUDED

#include "../basic/constant.hpp"

namespace BanetteGin {

template <class T>
T degree_to_radian(T theta) {
    return theta / 180 * PI;
}

}  // namespace BanetteGin

#endif
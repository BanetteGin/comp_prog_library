#ifndef BANETTEGIN_RADIAN_TO_DEGREE_HPP_INCLUDED
#define BANETTEGIN_RADIAN_TO_DEGREE_HPP_INCLUDED

#include "../basic/constant.hpp"

namespace BanetteGin {

template <class T>
T radian_to_degree(T theta) {
    return theta / PI * 180;
}

}  // namespace BanetteGin

#endif
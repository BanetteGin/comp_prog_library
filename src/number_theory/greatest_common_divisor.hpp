#ifndef BANETTEGIN_GREATEST_COMMON_DIVISOR_HPP_INCLUDED
#define BANETTEGIN_GREATEST_COMMON_DIVISOR_HPP_INCLUDED

namespace BanetteGin {

template <class T>
T greatest_common_divisor(T a, T b) {
    return b == 0 ? a : greatest_common_divisor(b, a % b);
}

}  // namespace BanetteGin

#endif
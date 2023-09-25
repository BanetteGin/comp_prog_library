#ifndef BANETTEGIN_FAST_POW_HPP_INCLUDED
#define BANETTEGIN_FAST_POW_HPP_INCLUDED

namespace BanetteGin {

template <class T>
T fast_pow(T a, T e) {
    T ret = 1;
    while (e > 0) {
        if (e & 1) ret *= a;
        a *= a;
        e >>= 1;
    }
    return ret;
}

}  // namespace BanetteGin

#endif
#ifndef BANETTEGIN_PERMUTATION_HPP_INCLUDED
#define BANETTEGIN_PERMUTATION_HPP_INCLUDED

namespace BanetteGin {

template <class T>
T permutation(T m, T n) {
    T ret = 1;
    for (long long int i = m; i >= m - n + 1; --i) {
        ret = ret * i;
    }
    return ret;
}

}  // namespace BanetteGin

#endif
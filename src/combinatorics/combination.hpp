#ifndef BANETTEGIN_COMBINATION_HPP_INCLUDED
#define BANETTEGIN_COMBINATION_HPP_INCLUDED

namespace BanetteGin {

template <class T>
T combination(const T& m, const T& n) {
    T ret = 1;
    for (long long int i = m; i >= m - n + 1; --i) {
        ret = ret * i;
    }
    for (long long int i = m - n; i >= 1; --i) {
        ret = ret / i;
    }
    return ret;
}

}  // namespace BanetteGin

#endif
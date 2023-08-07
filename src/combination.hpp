#ifndef BANETTEGIN_COMBINATION_HPP_INCLUDED
#define BANETTEGIN_COMBINATION_HPP_INCLUDED

namespace BanetteGin {

template <class T>
T combination(T m, T n) {
    T ret = 1;
    for (T i = m; i >= m - n + 1; --i) {
        ret = ret * i;
    }
    for (T i = m - n; i >= 1; --i) {
        ret = ret / i;
    }
    return ret;
}

}  // namespace BanetteGin

#endif
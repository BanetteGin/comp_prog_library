#ifndef BANETTEGIN_COMBINATION_HPP_INCLUDED
#define BANETTEGIN_COMBINATION_HPP_INCLUDED

namespace BanetteGin {

template <class T>
T combination(const T& m, const T& n) {
    assert(m >= n);
    T ret = 1;
    for (int i = m; i >= m - n + 1; --i) {
        ret = ret * i;
    }
    for (int i = n; i >= 1; --i) {
        ret = ret / i;
    }
    return ret;
}

}  // namespace BanetteGin

#endif
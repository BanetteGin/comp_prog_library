#ifndef BANETTEGIN_CHMAX_HPP_INCLUDED
#define BANETTEGIN_CHMAX_HPP_INCLUDED

namespace BanetteGin {

template <class T>
bool chmax(T& a, const T& b) {
    if (a < b) {
        a = b;
        return 1;
    }
    return 0;
}

}  // namespace BanetteGin

#endif
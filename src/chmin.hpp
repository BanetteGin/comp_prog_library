#ifndef BANETTEGIN_CHMIN_HPP_INCLUDED
#define BANETTEGIN_CHMIN_HPP_INCLUDED

namespace BanetteGin {

template <class T>
bool chmin(T& a, const T& b) {
    if (b < a) {
        a = b;
        return 1;
    }
    return 0;
}

}  // namespace BanetteGin

#endif
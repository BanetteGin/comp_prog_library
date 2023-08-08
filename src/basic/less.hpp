#ifndef BANETTEGIN_LESS_HPP_INCLUDED
#define BANETTEGIN_LESS_HPP_INCLUDED

namespace BanetteGin {

template <class T>
bool less(const T &a, const T &b) {
    return (sign(a - b) < 0);
}

}  // namespace BanetteGin

#endif
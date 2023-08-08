#ifndef BANETTEGIN_LESS_EQUAL_HPP_INCLUDED
#define BANETTEGIN_LESS_EQUAL_HPP_INCLUDED

namespace BanetteGin {

template <class T>
bool less_equal(const T &a, const T &b) {
    return (sign(a - b) <= 0);
}

}  // namespace BanetteGin

#endif
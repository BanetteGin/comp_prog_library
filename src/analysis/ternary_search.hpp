#ifndef BANETTEGIN_TERNARY_SEARCH_HPP_INCLUDED
#define BANETTEGIN_TERNARY_SEARCH_HPP_INCLUDED

#include "../basic/comparison.hpp"
#include "../basic/constant.hpp"

namespace BanetteGin {

template <class T, class Function>
T ternary_search(T left, T right, Function func, bool option = true) {
    while (!equal(left, right)) {
        T mid1 = left + (right - left) / 3;
        T mid2 = left + (right - left) / 3 * 2;
        if (option) {
            if (less_equal(func(mid1), func(mid2)))
                right = mid2;
            else
                left = mid1;
        } else {
            if (greater_equal(func(mid1), func(mid2)))
                right = mid2;
            else
                left = mid1;
        }
    }
    return left;
}

}  // namespace BanetteGin

#endif
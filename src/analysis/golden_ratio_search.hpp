#ifndef BANETTEGIN_GOLDEN_RATIO_SEARCH_HPP_INCLUDED
#define BANETTEGIN_GOLDEN_RATIO_SEARCH_HPP_INCLUDED

#include "../basic/comparison.hpp"

namespace BanetteGin {

template <class T, class Function>
T golden_ratio_search(T left, T right, Function func, bool option = true) {
    T mid1 = left + (right - left) * GOLDEN_RATIO / (2 * GOLDEN_RATIO + 1);
    T mid2 = left + (right - left) * (GOLDEN_RATIO + 1) / (2 * GOLDEN_RATIO + 1);
    while (!equal(left, right)) {
        if (option) {
            if (less_equal(func(mid1), func(mid2))) {
                right = mid2;
                mid2 = mid1;
                mid1 = left + (right - left) * GOLDEN_RATIO / (2 * GOLDEN_RATIO + 1);
            } else {
                left = mid1;
                mid1 = mid2;
                mid2 = left + (right - left) * (GOLDEN_RATIO + 1) / (2 * GOLDEN_RATIO + 1);
            }
        } else {
            if (greater_equal(func(mid1), func(mid2))) {
                right = mid2;
                mid2 = mid1;
                mid1 = left + (right - left) * GOLDEN_RATIO / (2 * GOLDEN_RATIO + 1);
            } else {
                left = mid1;
                mid1 = mid2;
                mid2 = left + (right - left) * (GOLDEN_RATIO + 1) / (2 * GOLDEN_RATIO + 1);
            }
        }
    }
    return left;
}

}  // namespace BanetteGin

#endif
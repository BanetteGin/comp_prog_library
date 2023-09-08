#ifndef BANETTEGIN_GOLDEN_RATIO_SEARCH_HPP_INCLUDED
#define BANETTEGIN_GOLDEN_RATIO_SEARCH_HPP_INCLUDED

#include "../basic/comparison.hpp"
#include "../basic/constant.hpp"

namespace BanetteGin {

template <class T, class Function>
T golden_ratio_search(T left, T right, Function func, bool minimize = true) {
    assert(greater_equal(right, left));
    T mid1 = left + (right - left) * GOLDEN_RATIO / (2 * GOLDEN_RATIO + 1);
    T mid2 = left + (right - left) * (GOLDEN_RATIO + 1) / (2 * GOLDEN_RATIO + 1);
    long long int iter = (std::log(right - left) - std::log(EPS)) / std::log(GOLDEN_RATIO) + 1;

    while (iter--) {
        if (minimize) {
            if (less_equal(func(mid1), func(mid2))) {
                right = mid2;
                mid2 = mid1;
                mid1 = left + (right - left) * T(GOLDEN_RATIO) / (T(2) * T(GOLDEN_RATIO) + 1);
            } else {
                left = mid1;
                mid1 = mid2;
                mid2 = left + (right - left) * T(GOLDEN_RATIO + 1) / (T(2) * T(GOLDEN_RATIO) + 1);
            }
        } else {
            if (greater_equal(func(mid1), func(mid2))) {
                right = mid2;
                mid2 = mid1;
                mid1 = left + (right - left) * T(GOLDEN_RATIO) / (T(2) * T(GOLDEN_RATIO) + 1);
            } else {
                left = mid1;
                mid1 = mid2;
                mid2 = left + (right - left) * T(GOLDEN_RATIO + 1) / (T(2) * T(GOLDEN_RATIO) + 1);
            }
        }
    }
    return left;
}

}  // namespace BanetteGin

#endif
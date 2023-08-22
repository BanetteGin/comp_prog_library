#ifndef BANETTEGIN_GOLDEN_RATIO_SEARCH_HPP_INCLUDED
#define BANETTEGIN_GOLDEN_RATIO_SEARCH_HPP_INCLUDED

#include "../basic/comparison.hpp"

namespace BanetteGin {

template <class T>
struct golden_ratio_search {
    bool option;
    T left, right;
    ternary_search(T left_, T right_, bool option_ = true)
        : left(left_), right(right_), option(option_) {
    }
    T func(T x) const noexcept {
        return x + 2 / (pow(2, x / 1.5));
    }
    T ternary_search() {
        while (!equal(left, right)) {
            T mid1 = left + (right - left) / 3;
            T mid2 = left + (right - left) / 3 * 2;
            if (minmax) {
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
};

}  // namespace BanetteGin

#endif
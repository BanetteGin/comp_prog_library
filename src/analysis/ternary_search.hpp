#ifndef BANETTEGIN_TERNARY_SEARCH_HPP_INCLUDED
#define BANETTEGIN_TERNARY_SEARCH_HPP_INCLUDED

#include <cmath>

#include "../basic/comparison.hpp"
#include "../basic/constant.hpp"

namespace BanetteGin {

template <class T, class Function>
T ternary_search(T left, T right, Function&& func, bool minimize = true) {
    assert(greater_equal(right, left));
    long long int iter = (long long int)((std::log(right - left) - std::log(EPS)) / std::log(T(3.0 / 2.0)) + 1);
    while (iter--) {
        T mid1 = (left * T(2.0) + right) / T(3.0);
        T mid2 = (left + right * T(2.0)) / T(3.0);
        T a = func(mid1);
        T b = func(mid2);
        if (minimize ^ less_equal(a, b)) {
            left = mid1;
        } else {
            right = mid2;
        }
    }
    return left;
}

}  // namespace BanetteGin

#endif
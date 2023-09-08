#ifndef BANETTEGIN_GOLDEN_RATIO_SEARCH_HPP_INCLUDED
#define BANETTEGIN_GOLDEN_RATIO_SEARCH_HPP_INCLUDED

#include <cmath>

#include "../basic/comparison.hpp"
#include "../basic/constant.hpp"

namespace BanetteGin {

template <class T, class Function>
T golden_ratio_search(T left, T right, Function&& func, bool minimize = true) {
    assert(greater_equal(right, left));
    T denom = GOLDEN_RATIO + T(1.0);
    T mid1 = (left * GOLDEN_RATIO + right) / denom;
    T mid2 = (left + right * GOLDEN_RATIO) / denom;
    T fnmid1 = func(mid1);
    T fnmid2 = func(mid2);
    long long int iter = ((std::log(right - left) - std::log(EPS)) / std::log(GOLDEN_RATIO) + 1);

    while (iter--) {
        if (minimize ^ less_equal(fnmid1, fnmid2)) {
            fnmid1 = fnmid2;
            left = mid1;
            mid1 = mid2;
            mid2 = (left * GOLDEN_RATIO + right) / denom;
            fnmid2 = func(mid2);
        } else {
            fnmid2 = fnmid1;
            right = mid2;
            mid2 = mid1;
            mid1 = (left + right * GOLDEN_RATIO) / denom;
            fnmid1 = func(mid1);
        }
    }
    return left;
}

}  // namespace BanetteGin

#endif
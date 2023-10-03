#ifndef BANETTEGIN_DIVISORS_HPP_INCLUDED
#define BANETTEGIN_DIVISORS_HPP_INCLUDED

#include <vector>

namespace BanetteGin {

template <class T>
std::vector<T> divisors(T n) {
    std::vector<T> ret;
    for (long long int i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            if (i == n / i) {
                ret.emplace_back(i);
            } else {
                ret.emplace_back(i);
                ret.emplace_back(n / i);
            }
        }
    }
    sort(ret.begin(), ret.end());
    return ret;
}

}  // namespace BanetteGin

#endif
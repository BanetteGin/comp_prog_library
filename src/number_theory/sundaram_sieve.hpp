#ifndef BANETTEGIN_SUNDARAM_SIEVE_HPP_INCLUDED
#define BANETTEGIN_SUNDARAM_SIEVE_HPP_INCLUDED

#include <vector>

namespace BanetteGin {

template <class T>
std::vector<T> sundaram_sieve(T& n) {
    std::vector<bool> ret((n + 1) / 2, true);
    std::vector<T> prime_list = {2};
    ret[0] = false;
    T m = ((n + 1) / 2 - 2) / 3;
    for (long long int a = 1; a <= m; ++a) {
        for (long long int b = 1; b <= a && a + b + 2 * a * b <= (n + 1) / 2 - 1; ++b) {
            ret[a + b + 2 * a * b] = false;
        }
    }
    for (T i = 0; i < ret.size(); ++i) {
        if (ret[i]) prime_list.emplace_back(i * 2 + 1);
    }
    return prime_list;
}

}  // namespace BanetteGin

#endif
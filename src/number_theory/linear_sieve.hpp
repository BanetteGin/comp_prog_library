#ifndef BANETTEGIN_LINEAR_SIEVE_HPP_INCLUDED
#define BANETTEGIN_LINEAR_SIEVE_HPP_INCLUDED

#include <vector>

namespace BanetteGin {

template <class T>
std::vector<T> linear_sieve(T n) {
    std::vector<T> prime_list;
    std::vector<T> lpf(n + 1, n + 1);
    lpf[0] = 1;
    lpf[1] = 1;
    for (long long int i = 2; i <= n; ++i) {
        if (lpf[i] == n + 1) {
            lpf[i] = i;
            prime_list.emplace_back(i);
        }
        for (long long int j = 0; j < prime_list.size(); ++j) {
            T p = prime_list[j];
            if (p * i > n || p > lpf[i]) break;
            lpf[p * i] = p;
        }
    }
    return prime_list;
}

}  // namespace BanetteGin

#endif
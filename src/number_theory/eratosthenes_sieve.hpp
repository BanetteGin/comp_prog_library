#ifndef BANETTEGIN_ERATOSTHENES_SIEVE_HPP_INCLUDED
#define BANETTEGIN_ERATOSTHENES_SIEVE_HPP_INCLUDED

#include <vector>

namespace BanetteGin {

template <class T>
std::vector<T> eratosthenes_sieve(T n) {
    std::vector<bool> ret(n + 1, true);
    std::vector<T> prime_list;
    ret[0] = ret[1] = false;
    for (T i = 2; i * i <= n; ++i) {
        if (!ret[i]) continue;
        for (T j = i * 2; j <= n; j += i) {
            ret[j] = false;
        }
    }
    for (T i = 2; i <= n; ++i) {
        if (ret[i]) prime_list.emplace_back(i);
    }
    return prime_list;
}

}  // namespace BanetteGin

#endif
#ifndef BANETTEGIN_NAIVE_SIEVE_HPP_INCLUDED
#define BANETTEGIN_NAIVE_SIEVE_HPP_INCLUDED

#include <vector>

#include "prime_check.hpp"

namespace BanetteGin {

template <class T>
std::vector<T> naive_sieve(T n) {
    std::vector<T> prime_list;
    for (T i = 2; i <= n; ++i) {
        if (prime_check(i)) prime_list.emplace_back(i);
    }
    return prime_list;
}

}  // namespace BanetteGin

#endif
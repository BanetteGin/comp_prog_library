#ifndef BANETTEGIN_NAIVE_SIEVE_HPP_INCLUDED
#define BANETTEGIN_NAIVE_SIEVE_HPP_INCLUDED

#include <vector>

#include "prime_check.hpp"

namespace BanetteGin {

template <class T>
std::vector<T> naive_sieve(T n) {
    std::vector<T> prime_list;
    if (n < 2) return prime_list;
    prime_list.emplace_back(2);
    for (int i = 3; i <= n; i += 2) {
        if (prime_check(i)) prime_list.emplace_back(i);
    }
    return prime_list;
}

}  // namespace BanetteGin

#endif
#ifndef BANETTEGIN_PRIME_FACTORIZATION_HPP_INCLUDED
#define BANETTEGIN_PRIME_FACTORIZATION_HPP_INCLUDED

#include <vector>

namespace BanetteGin {

template <class T>
std::vector<std::pair<T, T> > prime_factorization(T n) {
    std::vector<std::pair<T, T> > prime_list;
    for (T i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            ll e = 0;
            while (n % i == 0) {
                n /= i;
                e++;
            }
            prime_list.emplace_back(make_pair(i, e));
        }
    }
    if (n != 1) {
        prime_list.emplace_back(make_pair(n, 1));
    }
    return prime_list;
}

}  // namespace BanetteGin

#endif
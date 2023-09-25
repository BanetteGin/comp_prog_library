#ifndef BANETTEGIN_EULER_PHI_HPP_INCLUDED
#define BANETTEGIN_EULER_PHI_HPP_INCLUDED

#include "prime_factorization.hpp"

namespace BanetteGin {

template <class T>
T euler_phi(const T& n) {
    auto a = prime_factorization(n);
    T ret = n;
    for (int i = 0; i < a.size(); ++i) {
        ret /= a[i].first;
        ret *= (a[i].first - 1);
    }
    return ret;
}

}  // namespace BanetteGin

#endif
#ifndef BANETTEGIN_EULER_PHI_HPP_INCLUDED
#define BANETTEGIN_EULER_PHI_HPP_INCLUDED

#include "prime_factorization.hpp"

namespace BanetteGin {

template <class T>
T euler_phi(const T& n) {
    auto a = prime_factorization(n);
    rep(i, a.size()) {
        n /= a[i].first;
        n *= (a[i].first - 1);
    }
    return n;
}

}  // namespace BanetteGin

#endif
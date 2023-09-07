#ifndef BANETTEGIN_PRIME_CHECK_HPP_INCLUDED
#define BANETTEGIN_PRIME_CHECK_HPP_INCLUDED

namespace BanetteGin {

template <class T>
bool prime_check(T n) {
    if (n < 2) return false;
    if (n != 2 && n % 2 == 0) return false;
    for (long long int i = 3; i * i <= n; i += 2)
        if (n % i == 0) return false;
    return true;
}

}  // namespace BanetteGin

#endif
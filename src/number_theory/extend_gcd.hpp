#ifndef BANETTEGIN_EXTEND_GCD_HPP_INCLUDED
#define BANETTEGIN_EXTEND_GCD_HPP_INCLUDED

namespace BanetteGin {

template <class T>
T extend_gcd(const T& a, const T& b, T& x, T& y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    } else {
        T d = extend_gcd(b, a % b, y, x);
        y -= a / b * x;
        return d;
    }
}

}  // namespace BanetteGin

#endif
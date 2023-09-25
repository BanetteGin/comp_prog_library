#ifndef BANETTEGIN_BASE_CHANGE_HPP_INCLUDED
#define BANETTEGIN_BASE_CHANGE_HPP_INCLUDED

#include <string>

namespace BanetteGin {

template <class T>
std::string base_change(const std::string& num, const T& m, const T& n) {
    string tmp = num;
    reverse(tmp.begin(), tmp.end());
    T p = 1;
    T covnum = 0;
    for (int i = 0; i < num.size(); ++i) {
        covnum += T(tmp[i] - '0') * p;
        p = p * m;
    }
    T max_np = 1;
    while (max_np * n <= covnum) {
        max_np *= n;
    }
    std::string ret = "";
    while (max_np != 0) {
        ret.push_back((covnum / max_np) + '0');
        covnum %= max_np;
        max_np /= n;
    }
    return ret;
}

}  // namespace BanetteGin

#endif
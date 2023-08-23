#ifndef BANETTEGIN_MATRIX_ROTATE_HPP_INCLUDED
#define BANETTEGIN_MATRIX_ROTATE_HPP_INCLUDED

#include <vector>

namespace BanetteGin {

template <class T>
std::vector<std::vector<T>> matrix_rotate(std::vector<std::vector<T>> a) {
    std::vector<std::vector<T>> ret;
    for (long long int i = 0; i < a[0].size(); ++i) {
        std::vector<T> b;
        for (long long int j = 0; j < a.size(); ++j) {
            b.emplace_back(a[j][a[0].size() - 1 - i]);
        }
        ret.emplace_back(b);
    }
    return ret;
}

}  // namespace BanetteGin

#endif
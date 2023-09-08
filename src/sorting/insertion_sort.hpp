#ifndef BANETTEGIN_INSERTION_SORT_HPP_INCLUDED
#define BANETTEGIN_INSERTION_SORT_HPP_INCLUDED

#include <vector>

namespace BanetteGin {

template <class T>
std::vector<T> insertion_sort(const std::vector<T>& a) {
    for (long long int i = 1; i < a.size(); ++i) {
        long long int v = a[i];
        long long int j = i;
        for (; j > 0; j--) {
            if (a[j] > a[i - 1]) a[j] = a[j - 1];
        }
        for (long long int j = i + 1; j < a.size(); ++j) {
            if (a[i] > a[j]) swap(a[i], a[j]);
        }
    }
    return a;
}

}  // namespace BanetteGin

#endif
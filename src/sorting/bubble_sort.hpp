#ifndef BANETTEGIN_BUBBLE_SORT_HPP_INCLUDED
#define BANETTEGIN_BUBBLE_SORT_HPP_INCLUDED

#include <vector>

namespace BanetteGin {

template <class T>
std::vector<T> bubble_sort(const std::vector<T>& a) {
    for (int i = 0; i < a.size(); ++i) {
        for (int j = i + 1; j < a.size(); ++j) {
            if (a[i] > a[j]) swap(a[i], a[j]);
        }
    }
    return a;
}

}  // namespace BanetteGin

#endif
#ifndef BANETTEGIN_HOLD_ENDS_HPP_INCLUDED
#define BANETTEGIN_HOLD_ENDS_HPP_INCLUDED

#include <vector>

namespace BanetteGin {

template <class T>
struct hold_ends {
    T k;
    std::multiset<T> high_end, high_other;
    std::multiset<T> low_end, low_other;
    T all_sum = 0, high_sum = 0, low_sum = 0;

    hold_ends(T k_)
        : k(k_) {
    }
    void normalize() {
        while (high_end.size() < k && !high_other.empty()) {
            high_sum += *high_other.rbegin();
            high_end.insert(*high_other.rbegin());
            high_other.erase(high_other.find(*high_other.rbegin()));
        }
        while (high_end.size() > k) {
            high_sum -= *high_end.begin();
            high_other.insert(*high_end.begin());
            high_end.erase(high_end.begin());
        }
        while (low_end.size() < k && !low_other.empty()) {
            low_sum += *low_other.begin();
            low_end.insert(*low_other.begin());
            low_other.erase(low_other.begin());
        }
        while (low_end.size() > k) {
            low_sum -= *low_end.rbegin();
            low_other.insert(*low_end.rbegin());
            low_end.erase(low_end.find(*low_end.rbegin()));
        }
        return;
    }
    void insert(T x) {
        all_sum += x;
        high_sum += x;
        low_sum += x;
        high_end.insert(x);
        low_end.insert(x);
        normalize();
    }
    void erase(T x) {
        all_sum -= x;
        if (high_end.find(x) != high_end.end()) {
            high_sum -= x;
            high_end.erase(high_end.find(x));
        } else if (high_other.find(x) != high_other.end()) {
            high_other.erase(high_other.find(x));
        }
        if (low_end.find(x) != low_end.end()) {
            low_sum -= x;
            low_end.erase(low_end.find(x));
        } else if (low_other.find(x) != low_other.end()) {
            low_other.erase(low_other.find(x));
        }
        normalize();
    }
    std::vector<T> high_array() {
        std::vector<T> ret;
        for (auto itr = high_end.begin(); itr != high_end.end(); itr++)
            ret.emplace_back(*itr);
        return ret;
    }
    std::vector<T> low_array() {
        std::vector<T> ret;
        for (auto itr = low_end.begin(); itr != low_end.end(); itr++)
            ret.emplace_back(*itr);
        return ret;
    }
};

}  // namespace BanetteGin

#endif
#ifndef BANETTEGIN_SEGMENT_TREE_HPP_INCLUDED
#define BANETTEGIN_SEGMENT_TREE_HPP_INCLUDED

#include <vector>

#include "../basic/constant.hpp"

namespace BanetteGin {

template <class T>
struct segment_tree {
    T n;
    std::vector<T> node;
    const T ide = LINF;

    segment_tree(std::vector<T> a) {
        n = 1;
        while (n < a.size()) n *= 2;
        node.resize(2 * n - 1, ide);
        for (T i = 0; i < a.size(); i++) node[(n - 1) + i] = a[i];
        for (T i = n - 2; i >= 0; i--) {
            node[i] = monoid_operation(node[i * 2 + 1], node[i * 2 + 2]);
        }
    }

    T monoid_operation(const T& a, const T& b) const noexcept {
        return min(a, b);
    }

    void update(const T& p, const T& x) noexcept {
        p += n - 1;
        node[p] = x;
        while (p > 0) {
            p = (p - 1) / 2;
            node[p] = monoid_operation(node[2 * p + 1], node[2 * p + 2]);
        }
    }

    T find(const T& l, const T& r) const noexcept {
        return find_sub(l, r, 0, 0, n);
    }

    T find_sub(const T& a, const T& b, const T& now, const T& l, const T& r) const noexcept {
        if (b <= l || r <= a) return ide;
        if (a <= l && r <= b) return node[now];
        T nl = find_sub(a, b, 2 * now + 1, l, (l + r) / 2);
        T nr = find_sub(a, b, 2 * now + 2, (l + r) / 2, r);
        return monoid_operation(nl, nr);
    }
};

}  // namespace BanetteGin

#endif
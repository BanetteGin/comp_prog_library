#ifndef BANETTEGIN_BINARY_INDEXED_TREE_HPP_INCLUDED
#define BANETTEGIN_BINARY_INDEXED_TREE_HPP_INCLUDED

#include <vector>

namespace BanetteGin {

template <class T>
struct binary_indexed_tree {
    T n;
    std::vector<T> tree;
    const T ide = 0;

    binary_indexed_tree(T n_)
        : n(n_) {
        tree.resize(n, ide);
    }

    T abel_operation(const T& x, const T& y) const noexcept {
        return x + y;
    }

    T sum(const T& l, const T& r) const noexcept {
        return sum_sub(r) - sum_sub(l - 1);
    }

    T sum_sub(const T& a) const noexcept {
        T ret = 0;
        for (; a >= 0; a = (a & (a + 1)) - 1) ret = abel_operation(ret, tree[a]);
        return ret;
    }

    void add(const T& a, const T& x) noexcept {
        for (; a < n; a |= a + 1) tree[a] = abel_operation(tree[a], x);
        return;
    }
};

}  // namespace BanetteGin

#endif
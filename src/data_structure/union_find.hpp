#ifndef BANETTEGIN_UNION_FIND_HPP_INCLUDED
#define BANETTEGIN_UNION_FIND_HPP_INCLUDED

#include <vector>

namespace BanetteGin {

template <class T>
struct union_find {
    std::vector<T> par, rk, sz;
    union_find(T n)
        : par(n, -1), rk(n, 0), sz(n, 1) {
    }
    T root(T v) {
        if (par[v] == -1)
            return v;
        else
            return par[v] = root(par[v]);
    }
    bool same(T u, T v) {
        return root(u) == root(v);
    }
    bool unite(T u, T v) {
        T urt = root(u);
        T vrt = root(v);
        if (urt == vrt) return false;
        if (rk[urt] < rk[vrt]) swap(urt, vrt);
        par[vrt] = urt;
        if (rk[urt] == rk[vrt]) rk[urt]++;
        sz[urt] += sz[vrt];
        return true;
    }
    T size(T v) {
        return sz[root(v)];
    }
};

}  // namespace BanetteGin

#endif
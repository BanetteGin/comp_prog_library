#ifndef BANETTEGIN_TOPOLOGICAL_SORT_HPP_INCLUDED
#define BANETTEGIN_TOPOLOGICAL_SORT_HPP_INCLUDED

#include <vector>

namespace BanetteGin {

template <class T>
std::vector<T> TopologicalSort(const std::vector<std::vector<T> >& g) {
    std::vector<T> ret;
    std::vector<T> ind(g.size(), 0);
    for (T i = 0; i < ind.size(); ++i) {
        for (T e : g[i]) ind[e]++;
    }
    std::queue<T> q;
    for (T i = 0; i < ind.size(); ++i) {
        if (ind[i] == 0) q.push(i);
    }
    while (!q.empty()) {
        T nv = q.front();
        ret.push_back(nv);
        q.pop();
        for (T e : g[nv]) {
            ind[e]--;
            if (ind[e] == 0) q.push(e);
        }
    }
    return ret;
}

}  // namespace BanetteGin

#endif
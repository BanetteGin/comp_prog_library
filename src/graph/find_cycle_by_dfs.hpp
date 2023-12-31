#ifndef BANETTEGIN_FIND_CYCLE_BY_DFS_HPP_INCLUDED
#define BANETTEGIN_FIND_CYCLE_BY_DFS_HPP_INCLUDED

#include <vector>

namespace BanetteGin {

template <class T>
bool find_cycle_by_dfs(T v, std::vector<bool> &visited, std::vector<bool> &finished, const std::vector<std::vector<T>> &g) {
    visited[v] = true;
    for (T nv : g[v]) {
        if (visited[nv]) continue;
        if (finished[nv]) continue;
        if (visited[nv] && !finished[nv]) return true;
        if (find_cycle_by_dfs(nv, visited, finished, g)) return true;
    }
    finished[v] = true;
    return false;
}

}  // namespace BanetteGin

#endif
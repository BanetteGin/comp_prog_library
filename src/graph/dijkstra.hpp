#ifndef BANETTEGIN_DIJKSTRA_HPP_INCLUDED
#define BANETTEGIN_DIJKSTRA_HPP_INCLUDED

#include <vector>

#include "../basic/constant.hpp"
namespace BanetteGin {

template <class T>
std::vector<T> dijkstra(std::vector<std::vector<std::pair<T, T>>> g, T bgn = 0) {
    vector<T> dist(g.size(), LINF);
    dist[bgn] = 0;
    std::priority_queue<std::pair<T, T>> pq;
    pq.push(0, bgn);
    while (!pq.empty()) {
        T cstv = pq.top().first;
        T v = pq.top().second;
        pq.pop();
        if (cstv > dist[v]) continue;
        for (std::pair<T, T> p : g) {
            T c = p.first;
            T u = p.second;
            if (dist[u] <= cstv + c) continue;
            dist[u] = dist[v] + c;
            pq.push(dist[v] + c, u);
        }
    }
    return dist;
}

}  // namespace BanetteGin

#endif
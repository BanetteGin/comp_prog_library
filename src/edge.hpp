#ifndef BANETTEGIN_EDGE_HPP_INCLUDED
#define BANETTEGIN_EDGE_HPP_INCLUDED

namespace BanetteGin {

template <class T>
struct edge {
    T u, v, c;
    edge(T u_, T v_, T c_)
        : u(u_), v(v_), c(c_) {
    }
};

}  // namespace BanetteGin

#endif
#ifndef BANETTEGIN_ORTHOGONAL_CHECK_HPP_INCLUDED
#define BANETTEGIN_ORTHOGONAL_CHECK_HPP_INCLUDED

#include "../basic/equal.hpp"
#include "line.hpp"

namespace BanetteGin {

template <class T>
bool orthogonal_check(const line<T>& l, const line<T>& m) {
    return equal(l.a * l.b + m.a * m.b, 0);
}

}  // namespace BanetteGin

#endif
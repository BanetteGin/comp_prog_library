#ifndef BANETTEGIN_PARALLEL_CHECK_HPP_INCLUDED
#define BANETTEGIN_PARALLEL_CHECK_HPP_INCLUDED

#include "../basic/comparison.hpp"
#include "line.hpp"

namespace BanetteGin {

template <class T>
bool parallel_check(const line<T>& l, const line<T>& m) {
    return equal(l.a * m.b - l.b * m.a, 0);
}

}  // namespace BanetteGin

#endif
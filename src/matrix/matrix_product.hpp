#ifndef BANETTEGIN_MATRIX_PRODUCT_HPP_INCLUDED
#define BANETTEGIN_MATRIX_PRODUCT_HPP_INCLUDED

#include <vector>

namespace BanetteGin {

template <class T>
struct matrix_product {
    const T addide = 0;
    const T mulide = 1;
    std::vector<std::vector<T> > a, b;
    matrix_product(std::vector<std::vector<T> > a_, std::vector<std::vector<T> > b_)
        : a(a_), b(b_) {
    }
    T addition(T& x, T& y) const noexcept {
        return x + y;
    }
    T multiplication(T& x, T& y) const noexcept {
        return x * y;
    }
    std::vector<std::vector<T> > product() const noexcept {
        std::vector<std::vector<T> > c(a.size(), std::vector<T>(b[0].size(), addide));
        for (T i = 0; i < a.size(); ++i) {
            for (T j = 0; j < b[0].size(); ++j) {
                for (T k = 0; k < b.size(); ++k) {
                    c[i][j] = addition(c[i][j], multiplication(a[i][k], b[k][j]));
                }
            }
        }
        return c;
    }
};

}  // namespace BanetteGin

#endif
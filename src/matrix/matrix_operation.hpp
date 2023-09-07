#ifndef BANETTEGIN_MATRIX_OPERATION_HPP_INCLUDED
#define BANETTEGIN_MATRIX_OPERATION_HPP_INCLUDED

#include <vector>

namespace BanetteGin {

template <class T>
struct matrix_operation {
    const T addide = 0;
    const T mulide = 1;
    std::vector<std::vector<T> > a, b;
    matrix_operation(std::vector<std::vector<T> > a_, std::vector<std::vector<T> > b_)
        : a(a_), b(b_) {
            assert(a.size()>0&&a[0].size>0);
            assert(b.size()>0&&b[0].size>0);
    }
    T addition(T& x, T& y) const noexcept {
        return x + y;
    }
    T multiplication(T& x, T& y) const noexcept {
        return x * y;
    }
    std::vector<std::vector<T> > addition() const noexcept {
        assert(a.size() == b.size() && a[0].size() == b[0].size());

        std::vector<std::vector<T> > c(a.size(), std::vector<T>(a[0].size(), addide));
        for (long long int i = 0; i < a.size(); ++i) {
            for (long long int j = 0; j < a[i].size(); ++j) {
                c[i][j] = addition(a[i][j], b[i][j]);
            }
        }
        return c;
    }
    std::vector<std::vector<T> > product() const noexcept {
        assert(a.size() == b[0].size() && a[0].size() == b.size());
        std::vector<std::vector<T> > c(a.size(), std::vector<T>(b[0].size(), addide));
        for (long long int i = 0; i < a.size(); ++i) {
            for (long long int j = 0; j < b[0].size(); ++j) {
                for (long long int k = 0; k < b.size(); ++k) {
                    c[i][j] = addition(c[i][j], multiplication(a[i][k], b[k][j]));
                }
            }
        }
        return c;
    }
};

}  // namespace BanetteGin

#endif
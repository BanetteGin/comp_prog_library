#ifndef BANETTEGIN_FORMAL_POWER_SERIES_HPP_INCLUDED
#define BANETTEGIN_FORMAL_POWER_SERIES_HPP_INCLUDED

#include <vector>

#include "../basic/fast_complex.hpp"

namespace BanetteGin {

template <class T>
struct formal_power_series : std::vector<T> {
    using P = formal_power_series;
    void shrink() noexcept {
        while (this->size() && this->back() == T(0)) this->pop_back();
        return;
    }
    void dft(P &func, int inverse) noexcept {
        int sz = func.size();
        if (sz == 1) return;
        std::vector<BanetteGin::fast_complex<T>> even, odd;
        for (int i = 0; i < sz / 2; ++i) {
            even.push_back(func[2 * i]);
            odd.push_back(func[2 * i + 1]);
        }
        dft(even, inverse);
        dft(odd, inverse);
        BanetteGin::fast_complex<T> now = 1, zeta = polar(T(1), inverse * T(2) * M_PI / sz);
        for (int i = 0; i < sz; ++i) {
            func[i] = even[i % (sz / 2)] + now * odd[i % (sz / 2)];
            now *= zeta;
        }
        return;
    }
    P operator+(const P &r) const noexcept {
        return P(*this) += r;
    }

    P operator+(const T &v) const noexcept {
        return P(*this) += v;
    }

    P operator-(const P &r) const noexcept {
        return P(*this) -= r;
    }

    P operator-(const T &v) const noexcept {
        return P(*this) -= v;
    }

    P operator*(const P &r) const noexcept {
        return P(*this) *= r;
    }

    P operator*(const T &v) const noexcept {
        return P(*this) *= v;
    }

    P operator/(const P &r) const noexcept {
        return P(*this) /= r;
    }

    P operator%(const P &r) const noexcept {
        return P(*this) %= r;
    }

    P &operator+=(const P &r) noexcept {
        if (r.size() > this->size()) this->resize(r.size());
        for (int i = 0; i < r.size(); i++) (*this)[i] += r[i];
        return *this;
    }

    P &operator+=(const T &r) noexcept {
        if (this->empty()) this->resize(1);
        (*this)[0] += r;
        return *this;
    }

    P &operator-=(const P &r) noexcept {
        if (r.size() > this->size()) this->resize(r.size());
        for (int i = 0; i < r.size(); i++) (*this)[i] -= r[i];
        shrink();
        return *this;
    }

    P &operator-=(const T &r) noexcept {
        if (this->empty()) this->resize(1);
        (*this)[0] -= r;
        shrink();
        return *this;
    }

    P &operator*=(const T &v) noexcept {
        const int n = (int)this->size();
        for (int k = 0; k < n; k++) (*this)[k] *= v;
        return *this;
    }

    P &operator*=(const P &r) noexcept {
        if (this->empty() || r.empty()) {
            this->clear();
            return *this;
        }
        std::vector<BanetteGin::fast_complex<T>> nf, ng;
        int sz = 1;
        while (sz < f.size() + g.size()) sz *= 2;
        nf.resize(sz, 0);
        ng.resize(sz, 0);
        for (int i = 0; i < f.size(); ++i) {
            nf[i] = f[i];
        }
        for (int i = 0; i < g.size(); ++i) {
            ng[i] = g[i];
        }
        dft(nf, 1);
        dft(ng, 1);
        for (int i = 0; i < sz; ++i) {
            nf[i] *= ng[i];
        }
        dft(nf, -1);
        P res;
        for (int i = 0; i < sz; ++i) {
            res.emplace_back(nf[i].real() / sz)
        }
        res.shrink();
        return res;
    }

    P &operator%=(const P &r) noexcept {
        return *this -= *this / r * r;
    }

    P operator-() const noexcept {
        P ret(this->size());
        for (int i = 0; i < this->size(); i++) ret[i] = -(*this)[i];
        return ret;
    }

    P &operator/=(const P &r) {
        if (this->size() < r.size()) {
            this->clear();
            return *this;
        }
        int n = this->size() - r.size() + 1;
        return *this = (rev().pre(n) * r.rev().inv(n)).pre(n).rev(n);
    }
};

}  // namespace BanetteGin

#endif
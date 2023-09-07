#ifndef BANETTEGIN_MODINT_HPP_INCLUDED
#define BANETTEGIN_MODINT_HPP_INCLUDED

namespace BanetteGin {

template <long long int MOD>
struct modint {
    long long int val;
    modint(long long int v = 0) noexcept
        : val(v % MOD) {
        if (val < 0) val += MOD;
    }
    long long int get_mod() const noexcept {
        return MOD;
    }

    modint operator+(const modint& r) const noexcept {
        return modint(*this) += r;
    }
    modint operator-(const modint& r) const noexcept {
        return modint(*this) -= r;
    }
    modint operator*(const modint& r) const noexcept {
        return modint(*this) *= r;
    }
    modint operator/(const modint& r) const noexcept {
        return modint(*this) /= r;
    }

    modint& operator+=(const modint& r) noexcept {
        val += r.val;
        if (val >= MOD) val -= MOD;
        return *this;
    }
    modint& operator-=(const modint& r) noexcept {
        val -= r.val;
        if (val < 0) val += MOD;
        return *this;
    }
    modint& operator*=(const modint& r) noexcept {
        val = val * r.val % MOD;
        return *this;
    }

    modint& operator++() noexcept {
        return modint(*this) += 1;
    }
    modint& operator--() noexcept {
        return modint(*this) -= 1;
    }

    modint& operator/=(const modint& r) noexcept {
        long long int a = r.val, b = MOD, u = 1, v = 0;
        while (b) {
            long long int t = a / b;
            a -= t * b;
            swap(a, b);
            u -= t * v;
            swap(u, v);
        }
        val = val * u % MOD;
        if (val < 0) val += MOD;
        return *this;
    }

    bool operator==(const modint& r) const noexcept {
        return this->val == r.val;
    }
    bool operator!=(const modint& r) const noexcept {
        return this->val != r.val;
    }

    friend ostream& operator<<(ostream& os, const modint<MOD>& x) noexcept {
        return os << x.val;
    }

    friend istream& operator>>(istream& is, modint<MOD>& x) noexcept {
        long long int t;
        is >> t;
        x = modint(t);
        return (is);
    }

    friend modint<MOD> modpow(const modint<MOD>& a, long long int n) noexcept {
        if (n == 0) return 1;
        auto t = modpow(a, n / 2);
        t = t * t;
        if (n & 1) t = t * a;
        return t;
    }
};

}  // namespace BanetteGin

#endif
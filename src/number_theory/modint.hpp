#ifndef BANETTEGIN_MODINT_HPP_INCLUDED
#define BANETTEGIN_MODINT_HPP_INCLUDED

namespace BanetteGin {

template <long long int MOD>
struct modint {
    long long int val;
    constexpr modint(long long int v = 0) noexcept
        : val(v % MOD) {
        if (val < 0) val += MOD;
    }
    constexpr long long int getmod() {
        return MOD;
    }

    constexpr modint operator-() const noexcept {
        return val ? MOD - val : 0;
    }

    constexpr modint operator+(const modint& r) const noexcept {
        return modint(*this) += r;
    }
    constexpr modint operator-(const modint& r) const noexcept {
        return modint(*this) -= r;
    }
    constexpr modint operator*(const modint& r) const noexcept {
        return modint(*this) *= r;
    }
    constexpr modint operator/(const modint& r) const noexcept {
        return modint(*this) /= r;
    }

    constexpr modint& operator+=(const modint& r) noexcept {
        val += r.val;
        if (val >= MOD) val -= MOD;
        return *this;
    }
    constexpr modint& operator-=(const modint& r) noexcept {
        val -= r.val;
        if (val < 0) val += MOD;
        return *this;
    }
    constexpr modint& operator*=(const modint& r) noexcept {
        val = val * r.val % MOD;
        return *this;
    }

    constexpr modint& operator++() noexcept {
        val += 1;
        if (val >= MOD) val -= MOD;
        return *this;
    }
    constexpr modint& operator--() noexcept {
        val -= 1;
        if (val < 0) val += MOD;
        return *this;
    }

    constexpr modint& operator/=(const modint& r) noexcept {
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

    constexpr bool operator==(const modint& r) const noexcept {
        return this->val == r.val;
    }
    constexpr bool operator!=(const modint& r) const noexcept {
        return this->val != r.val;
    }

    friend constexpr ostream& operator<<(ostream& os, const modint<MOD>& x) noexcept {
        return os << x.val;
    }

    friend constexpr modint<MOD> modpow(const modint<MOD>& a, long long int n) noexcept {
        modint ret = 1;
        modint tmpa = a;
        while (n > 0) {
            if (n & 1) ret *= a;
            tmpa = tmpa * tmpa;
            n >>= 1;
        }
        return ret;
    }
};

}  // namespace BanetteGin

#endif
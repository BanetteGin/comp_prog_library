#ifndef BANETTEGIN_DYNAMIC_MODINT_HPP_INCLUDED
#define BANETTEGIN_DYNAMIC_MODINT_HPP_INCLUDED

namespace BanetteGin {

template <long long int id>
struct dynamic_modint {
    long long int val;
    constexpr dynamic_modint(long long int v = 0) noexcept
        : val(v % get_mod()) {
        if (val < 0) val += get_mod();
    }
    static long long int& get_mod() {
        static long long int MOD = 1;
        return MOD;
    }
    static void set_mod(long long int MOD_) {
        get_mod() = MOD_;
        return;
    }
    constexpr dynamic_modint operator-() const noexcept {
        return val ? get_mod() - val : 0;
    }

    constexpr dynamic_modint operator+(const dynamic_modint& r) const noexcept {
        return dynamic_modint(*this) += r;
    }
    constexpr dynamic_modint operator-(const dynamic_modint& r) const noexcept {
        return dynamic_modint(*this) -= r;
    }
    constexpr dynamic_modint operator*(const dynamic_modint& r) const noexcept {
        return dynamic_modint(*this) *= r;
    }
    constexpr dynamic_modint operator/(const dynamic_modint& r) const noexcept {
        return dynamic_modint(*this) /= r;
    }

    constexpr dynamic_modint& operator+=(const dynamic_modint& r) noexcept {
        val += r.val;
        if (val >= get_mod()) val -= get_mod();
        return *this;
    }
    constexpr dynamic_modint& operator-=(const dynamic_modint& r) noexcept {
        val -= r.val;
        if (val < 0) val += get_mod();
        return *this;
    }
    constexpr dynamic_modint& operator*=(const dynamic_modint& r) noexcept {
        val = val * r.val % get_mod();
        return *this;
    }

    constexpr dynamic_modint& operator++() noexcept {
        val += 1;
        if (val >= get_mod()) val -= get_mod();
        return *this;
    }
    constexpr dynamic_modint& operator--() noexcept {
        val -= 1;
        if (val < 0) val += get_mod();
        return *this;
    }

    constexpr dynamic_modint& operator/=(const dynamic_modint& r) noexcept {
        long long int a = r.val, b = get_mod(), u = 1, v = 0;
        while (b) {
            long long int t = a / b;
            a -= t * b;
            swap(a, b);
            u -= t * v;
            swap(u, v);
        }
        val = val * u % get_mod();
        if (val < 0) val += get_mod();
        return *this;
    }

    constexpr bool operator==(const dynamic_modint& r) const noexcept {
        return this->val == r.val;
    }
    constexpr bool operator!=(const dynamic_modint& r) const noexcept {
        return this->val != r.val;
    }

    friend constexpr ostream& operator<<(ostream& os, const dynamic_modint& x) noexcept {
        return os << x.val;
    }

    friend istream& operator>>(istream& is, dynamic_modint& x) noexcept {
        long long int t;
        is >> t;
        x = dynamic_modint(t);
        return (is);
    }

    friend constexpr dynamic_modint modpow(const dynamic_modint& a, long long int n) noexcept {
        if (n == 0) return 1LL;
        auto t = modpow(a, n / 2);
        t = t * t;
        if (n & 1) t = t * a;
        return t;
    }
};

}  // namespace BanetteGin

#endif
#ifndef BANETTEGIN_DYNAMIC_MODINT_HPP_INCLUDED
#define BANETTEGIN_DYNAMIC_MODINT_HPP_INCLUDED

namespace BanetteGin {

template <long long int id>
struct dynamic_modint {
    long long int val;
    dynamic_modint(long long int v = 0) noexcept
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
    dynamic_modint operator-() const noexcept {
        return val ? get_mod() - val : 0;
    }

    dynamic_modint operator+(const dynamic_modint& r) const noexcept {
        return dynamic_modint(*this) += r;
    }
    dynamic_modint operator-(const dynamic_modint& r) const noexcept {
        return dynamic_modint(*this) -= r;
    }
    dynamic_modint operator*(const dynamic_modint& r) const noexcept {
        return dynamic_modint(*this) *= r;
    }
    dynamic_modint operator/(const dynamic_modint& r) const noexcept {
        return dynamic_modint(*this) /= r;
    }

    dynamic_modint& operator+=(const dynamic_modint& r) noexcept {
        val += r.val;
        if (val >= get_mod()) val -= get_mod();
        return *this;
    }
    dynamic_modint& operator-=(const dynamic_modint& r) noexcept {
        val -= r.val;
        if (val < 0) val += get_mod();
        return *this;
    }
    dynamic_modint& operator*=(const dynamic_modint& r) noexcept {
        val = val * r.val % get_mod();
        return *this;
    }
    dynamic_modint& operator/=(const dynamic_modint& r) noexcept {
        long long int a = r.val, b = get_mod(), u = 1, v = 0;
        while (b) {
            long long int t = a / b;
            a -= t * b;
            std::swap(a, b);
            u -= t * v;
            std::swap(u, v);
        }
        val = val * u % get_mod();
        if (val < 0) val += get_mod();
        return *this;
    }

    dynamic_modint& operator++() noexcept {
        return dynamic_modint(*this) += 1;
    }
    dynamic_modint& operator--() noexcept {
        return dynamic_modint(*this) -= 1;
    }

    bool operator==(const dynamic_modint& r) const noexcept {
        return this->val == r.val;
    }
    bool operator!=(const dynamic_modint& r) const noexcept {
        return this->val != r.val;
    }

    friend std::ostream& operator<<(std::ostream& os, const dynamic_modint& x) noexcept {
        return os << x.val;
    }

    friend std::istream& operator>>(std::istream& is, dynamic_modint& x) noexcept {
        long long int t;
        is >> t;
        x = dynamic_modint(t);
        return (is);
    }

    friend dynamic_modint<id> modpow(const dynamic_modint& a, long long int n) noexcept {
        if (n == 0) return 1;
        auto t = modpow(a, n / 2);
        t = t * t;
        if (n & 1) t = t * a;
        return t;
    }
};

}  // namespace BanetteGin

#endif
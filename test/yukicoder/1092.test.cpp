#define PROBLEM "https://yukicoder.me/problems/no/1092"

#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (ll i = 0, n_f = (ll)(n); i < n_f; ++i)

typedef long long ll;

#include "../../src/number_theory/dynamic_modint.hpp"

int main(void) {
    ll p, n;
    cin >> p >> n;
    using mint = BanetteGin::dynamic_modint<0>;
    mint::set_mod(p);
    vector<mint> a(n);
    rep(i, n) {
        ll x;
        cin >> x;
        a[i] = x;
    }
    string s;
    cin >> s;
    mint ans = a[0];
    rep(i, s.size()) {
        if (s[i] == '+') {
            ans += a[i + 1];
        } else if (s[i] == '-') {
            ans -= a[i + 1];
        } else if (s[i] == '*') {
            ans *= a[i + 1];
        } else {
            ans /= a[i + 1];
        }
    }
    cout << ans << endl;
    return 0;
}
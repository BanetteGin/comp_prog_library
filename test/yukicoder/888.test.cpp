#define PROBLEM "https://yukicoder.me/problems/no/888"

#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (ll i = 0, n_f = (ll)(n); i < n_f; ++i)

typedef long long ll;

#include "../../src/number_theory/divisors.hpp"

int main(void) {
    ll n;
    cin >> n;
    auto a = BanetteGin::divisors(n);
    ll ans = 0;
    rep(i, a.size()) ans += a[i];
    cout << ans << endl;
    return 0;
}
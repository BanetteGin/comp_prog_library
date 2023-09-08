#define PROBLEM "https://yukicoder.me/problems/no/499"

#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (ll i = 0, n_f = (ll)(n); i < n_f; ++i)

typedef long long ll;

#include "../../src/number_theory/sundaram_sieve.hpp"

int main(void) {
    ll n;
    cin >> n;
    if (n < 2) {
        cout << 0 << endl;
        return 0;
    }
    auto a = BanetteGin::sundaram_sieve(n);
    ll ans = 1;
    for (ll i = 1; i < a.size(); ++i) {
        if (binary_search(a.begin(), a.end(), a[i] * a[i] - 2)) {
            ans += 2;
        }
    }
    cout << ans << endl;
    return 0;
}
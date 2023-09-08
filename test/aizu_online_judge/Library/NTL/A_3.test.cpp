#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_C"

#include <bits/stdc++.h>
using namespace std;

#include "../../../../src/number_theory/greatest_common_divisor.hpp"

#define rep(i, n) for (ll i = 0, n_f = (ll)(n); i < n_f; ++i)

typedef long long ll;

using namespace BanetteGin;

int main(void) {
    ll n;
    cin >> n;
    ll ans = 1;
    rep(i, n) {
        ll x;
        cin >> x;
        ans = ans * x / greatest_common_divisor(ans, x);
    }
    cout << ans << endl;
    return 0;
}
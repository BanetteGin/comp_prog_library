#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_E"

#include <bits/stdc++.h>
using namespace std;

#include "../../../../src/number_theory/extend_gcd.hpp"

#define rep(i, n) for (ll i = 0, n_f = (ll)(n); i < n_f; ++i)

typedef long long ll;

using namespace BanetteGin;

int main(void) {
    ll a, b;
    cin >> a >> b;
    ll x, y;
    extend_gcd(a, b, x, y);
    cout << x << " " << y << endl;
    return 0;
}
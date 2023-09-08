#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_B"

#include <bits/stdc++.h>
using namespace std;

#include "../../../../src/number_theory/modint.hpp"

#define rep(i, n) for (ll i = 0, n_f = (ll)(n); i < n_f; ++i)

typedef long long ll;

using namespace BanetteGin;

int main(void) {
    modint<1000000007LL> m;
    ll n;
    cin >> m >> n;
    cout << modpow(m, n) << endl;
    return 0;
}
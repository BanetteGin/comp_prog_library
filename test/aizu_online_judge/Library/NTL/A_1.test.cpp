#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_A"

#include <bits/stdc++.h>
using namespace std;

#include "../../../../src/number_theory/prime_factorization.hpp"

#define rep(i, n) for (ll i = 0, n_f = (ll)(n); i < n_f; ++i)

typedef long long ll;

using namespace BanetteGin;

int main(void) {
    ll n;
    cin >> n;
    auto a = prime_factorization(n);
    cout << n << ":";
    rep(i, a.size()) {
        rep(j, a[i].second) {
            cout << " " << a[i].first;
        }
    }
    cout << endl;
    return 0;
}
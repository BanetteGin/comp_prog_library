#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_D"

#include <bits/stdc++.h>
using namespace std;

#include "../../../../src/number_theory/euler_phi.hpp"

#define rep(i, n) for (ll i = 0, n_f = (ll)(n); i < n_f; ++i)

typedef long long ll;

using namespace BanetteGin;

int main(void) {
    ll n;
    cin >> n;
    cout << euler_phi(n) << endl;
    return 0;
}
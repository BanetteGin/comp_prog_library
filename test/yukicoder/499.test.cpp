#define PROBLEM "https://yukicoder.me/problems/no/499"

#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (ll i = 0, n_f = (ll)(n); i < n_f; ++i)

typedef long long ll;

#include "../../src/number_theory/base_change.hpp"

int main(void) {
    ll n;
    cin >> n;
    cout << BanetteGin::base_change(to_string(n), 10LL, 7LL) << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#include "../src/polynomial/formal_power_series.hpp"

#define rep(i, n) for (ll i = 0, n_f = (ll)(n); i < n_f; ++i)

typedef long long ll;

using namespace BanetteGin;

int main(void) {
    formal_power_series<long double> f, g;
    f.emplace_back(4);
    f.emplace_back(3);
    f.emplace_back(3);
    g.emplace_back(2);
    g.emplace_back(3);
    f *= g;
    rep(i, f.size()) cout << f[i] << endl;
    return 0;
}
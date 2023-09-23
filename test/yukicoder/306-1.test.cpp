#define PROBLEM "https://yukicoder.me/problems/no/306"
#define ERROR 1e-6

#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (ll i = 0, n_f = (ll)(n); i < n_f; ++i)

typedef long long ll;
typedef long double ld;

#include "../../src/analysis/ternary_search.hpp"
#include "../../src/geometry/distance.hpp"
#include "../../src/geometry/point.hpp"

using namespace BanetteGin;
int main(void) {
    ld ax, ay, bx, by;
    cin >> ax >> ay >> bx >> by;
    function<ld(ld)> func = [&](ld y) {
        return hypot(ax, y - ay) + hypot(bx, y - by);
    };
    cout << fixed << setprecision(20) << ternary_search(0.0L, 2000.0L, func) << endl;
    return 0;
}
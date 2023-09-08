#define PROBLEM "https://yukicoder.me/problems/no/306"

#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (ll i = 0, n_f = (ll)(n); i < n_f; ++i)

typedef long long ll;
typedef long double ld;

#include "../../src/analysis/ternary_search.hpp"
#include "../../src/geometry/distance.hpp"
#include "../../src/geometry/point.hpp"
#include "../../src/number_theory/base_change.hpp"

using namespace BanetteGin;
int main(void) {
    ld ax, ay, bx, by;
    cin >> ax >> ay >> bx >> by;
    point p = point(ax, ay);
    point q = point(bx, by);
    function<ld(ld)> func = [&](ld y) {
        point a = point(0.0L, y);
        return distance(a, p) + distance(a, q);
    };
    cout << fixed << setprecision(20) << ternary_search(0.0L, 10000.0L, func) << endl;
    return 0;
}
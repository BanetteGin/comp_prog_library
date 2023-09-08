#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/all/CGL_7_C"
#define ERROR 10e-6

#include <bits/stdc++.h>
using namespace std;

#include "../../../../src/geometry/circumcircle.hpp"

#define rep(i, n) for (ll i = 0, n_f = (ll)(n); i < n_f; ++i)

typedef long long ll;

using namespace BanetteGin;

int main(void) {
    long double ax, ay, bx, by, cx, cy;
    cin >> ax >> ay >> bx >> by >> cx >> cy;
    point a = point(ax, ay);
    point b = point(bx, by);
    point c = point(cx, cy);
    circle ans = circumcircle(triangle(a, b, c));
    cout << fixed << setprecision(30) << ans.p.x << " " << ans.p.y << " " << ans.r << endl;
    return 0;
}
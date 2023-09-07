#include <bits/stdc++.h>

#include "../src/all.hpp"
using namespace std;

#define rep(i, n) for (ll i = 0, n_f = (ll)(n); i < n_f; ++i)

typedef long long ll;
typedef long double ld;

using namespace BanetteGin;

random_device seed_gen;
mt19937 engine(seed_gen());
uniform_real_distribution<ld> tht_gen(0.0, M_PI);

int main(void) {
    ll n;
    cin >> n;
    ld x = 0;
    ld y = 0;
    rep(i, n) {
        ld th1 = tht_gen(engine);
        ld th2 = tht_gen(engine);
        ld th3 = tht_gen(engine);
        point a = point(cos(th1), sin(th1));
        point b = point(cos(th2), sin(th2));
        point c = point(cos(th3), sin(th3));
        point inc = incenter(triangle(a, b, c));
        x += inc.x;
        y += inc.y;
    }
    cout << fixed << setprecision(20) << x / ld(n) << " " << y / ld(n) << endl;
    return 0;
}
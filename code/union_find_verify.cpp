#define PROBLEM "https://judge.yosupo.jp/problem/unionfind"

#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (ll i = 0, n_f = (ll)(n); i < n_f; ++i)
#define frep(i, l, r)                                  \
    for (ll i = (ll)(l), l_f = (ll)(l), r_f = (ll)(r); \
         l_f <= r_f ? i <= r_f : i >= r_f; l_f <= r_f ? i++ : i--)
#define all(a) (a).begin(), (a).end()
#define pb(a) push_back(a)
#define eb(a) emplace_back(a)
#define mpa(a, b) make_pair(a, b)

typedef long long ll;
typedef __int128_t int128;
typedef double dou;
typedef long double ld;
typedef vector<long double> vld;
typedef vector<vector<long double> > vvld;
typedef vector<string> vstr;
typedef vector<bool> vbol;
typedef vector<vector<bool> > vvbol;
typedef vector<ll> vll;
typedef vector<vector<ll> > vvll;

#include "../src/union_find.hpp"
using namespace BanetteGin;

int main(void) {
    ll n, q;
    cin >> n >> q;
    union_find uf(n);
    rep(i, q) {
        ll t, u, v;
        cin >> t >> u >> v;
        if (t == 0)
            uf.unite(u, v);
        else {
            if (uf.same(u, v))
                cout << 1 << endl;
            else
                cout << 0 << endl;
        }
    }
}
#define PROBLEM "https://judge.yosupo.jp/problem/unionfind"

#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (ll i = 0, n_f = (ll)(n); i < n_f; ++i)

typedef long long ll;

#include "src/union_find.hpp"
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
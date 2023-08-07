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

template <class T>
struct union_find {
    vector<T> par, rk, sz;
    union_find(T n)
        : par(n, -1), rk(n, 0), sz(n, 1) {
    }
    T root(T& v) {
        if (par[v] == -1)
            return v;
        else
            return par[v] = root(par[v]);
    }
    bool same(T& u, T& v) {
        return root(u) == root(v);
    }
    bool unite(T& u, T& v) {
        T urt = root(u);
        T vrt = root(v);
        if (urt == vrt) return false;
        if (rk[urt] < rk[vrt]) swap(urt, vrt);
        par[vrt] = urt;
        if (rk[urt] == rk[vrt]) rk[urt]++;
        sz[urt] += sz[vrt];
        return true;
    }
    T size(T& v) {
        return sz[root(v)];
    }
};

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
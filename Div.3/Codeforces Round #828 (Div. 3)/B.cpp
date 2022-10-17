#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

void solve() {
    ll n,q;
    cin >> n >> q;
    ll a[n], total = 0;
    map<bool, ll> ty;

    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        ty[a[i]%2]++;
        total += a[i];
    }

    ll type, x;
    for (ll i = 0; i < q; i++) {
        cin >> type >> x;
        total += ty[type]*x;
        if (x%2 == 1) {
            ty[!type] = n;
            ty[type] = 0;
        }

        cout << total << endl;
    }
}

int main() {
    Andy8787_want_AC
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
}
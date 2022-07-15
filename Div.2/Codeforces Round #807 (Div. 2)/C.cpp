#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

void solve() {
    ll n,c,q;
    cin >> n >> c >> q;
    string s;
    cin >> s;
    for (ll i = 0; i < c; i++) {
        ll l, r;
        cin >> l >> r;
        s += s.substr(l-1,r-l+1);
        // cout << s << "\n";
    }
    for (ll i = 0; i < q; i++) {
        ll temp;
        cin >> temp;
        cout << s[temp-1] << "\n";
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
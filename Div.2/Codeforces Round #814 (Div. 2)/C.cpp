#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

void solve() {
    ll n,k;
    cin >> n >> k;
    ll a[n];
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    ll pr[n];
    pr[0] = a[0];
    for (ll i = 1; i < n; i++) {
        pr[i] = max(pr[i-1],a[i]);
    }

    while (k--) {
        ll x,y;
        cin >> x >> y;
        x--;
        
        if (pr[x] != a[x]) {
            cout << "0\n";
        } else {
            ll up = upper_bound(pr,pr+n,a[x])-pr;
            if (pr[x] == pr[n-1]) {
                if (!x) {
                    cout << max(0ll, y) << "\n";
                } else {
                    cout << max(0ll, y-x+1) << "\n";
                }
            } else {
                if (x) y -= (x-1);
                cout << max(0ll,min(y,(x!=0)+up-x-1)) << "\n";
            }
        }
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
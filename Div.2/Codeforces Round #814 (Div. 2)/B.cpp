#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int solve() {
    ll n,k;
    
    cin >> n >> k;
    k %= 4;

    if (k == 2) {
        cout << "YES\n";
        for (ll i = 3; i <= n; i+=4) {
            cout << i << " " << i+1 << "\n";
        }
        for (ll i = 2; i <= n; i+=4) {
            cout << i << " " << i-1 << "\n";
        }
    } else if (k == 0) {
        cout << "NO\n";
        return 0;
    } else {
        cout << "YES\n";
        for (ll i = 1; i <= n; i += 2) {
            cout << i << " " << i+1 << "\n";
        }
    }
    return 0;
}

int main() {
    Andy8787_want_AC
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
}
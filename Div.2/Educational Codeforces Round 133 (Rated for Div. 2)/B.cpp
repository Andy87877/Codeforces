#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

void solve() {
    ll n;
    cin >> n;
    cout << n << "\n";
    ll a[n];
    for (ll i = 0; i < n; i++) {
        a[i] = i+1;
    }
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < n; j++) {
            cout << a[j] << " ";
        }
        cout << "\n";
        if (i == 0) {
            swap(a[0],a[n-1]); 
        } else {
            swap(a[i-1],a[i]); 
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
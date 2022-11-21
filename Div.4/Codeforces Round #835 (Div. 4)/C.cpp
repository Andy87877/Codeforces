#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

void solve() {
    ll n, mx = -1;
    vector<ll> vec;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        mx = max(mx, a[i]);
        vec.push_back(a[i]);
    }
    sort(vec.begin(), vec.end());

    for (ll i = 0; i < n; i++) {
        if (a[i] == mx) {
            cout << a[i]-vec[vec.size()-2];
        } else {
            cout << a[i]-mx;
        }
        cout << " ";
    }
    cout << "\n";
}

int main() {
    Andy8787_want_AC
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
}
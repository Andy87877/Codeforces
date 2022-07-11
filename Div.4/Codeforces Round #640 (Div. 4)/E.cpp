#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll solve() {
    ll n;
    cin >> n;
    ll a[n], q[n];

    cin >> a[0];
    q[0] = a[0];
    for (ll i = 1; i < n; i++) {
        cin >> a[i];
        q[i] = a[i] + q[i-1];
    }
    
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        cout << solve() << "\n";
    }
}
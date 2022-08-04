#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

ll solve() {
    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    map<ll,ll> ma;
    for (ll i = n-1; i >= 0; i--) {
        ma[a[i]]++;
        if (ma[a[i]] >= 2) {
            return i+1;
        }
    }
    return 0;
}

int main() {
    Andy8787_want_AC
    ll t;
    cin >> t;
    while (t--) {
        cout << solve() << "\n";
    }
}
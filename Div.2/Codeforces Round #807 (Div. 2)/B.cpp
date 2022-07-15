#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

ll solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    bool nozero = false;
    ll zero = 0, total = 0;
    for (int i = 0; i < n-1; i++) {
        if (a[i] != 0) {
            nozero = true;
        } else if (nozero) {
            zero++;
        }
        total += a[i];
    }

    return zero+total;
}

int main() {
    Andy8787_want_AC
    ll t;
    cin >> t;
    while (t--) {
        cout << solve() << "\n";
    }
}
#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

string solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (n == 2) {
        if (a[1]%a[0] == 0) {
            return "YES";
        } else {
            return "NO";
        }
    }
    
    if (a[0] == 1) {
        return "YES";
    }


    for (ll i = 1; i < n; i++) {
        if (a[i]%a[0] != 0) {
            return "NO";
        }
    }
    return "YES";
}

int main() {
    Andy8787_want_AC
    ll t;
    cin >> t;
    while (t--) {
        cout << solve() << "\n";
    }
}
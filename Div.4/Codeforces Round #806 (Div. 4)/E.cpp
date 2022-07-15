#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll solve() {
    ll n;
    cin >> n;
    char a[n][n], b[n][n], c[n][n], d[n][n];
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    // // cout << endl;
    // for (ll i = 0; i < n; i++) {
    //     for (ll j = 0; j < n; j++) {
    //         // cout << a[i][j];
    //     }
    //     // cout << endl;
    // }
    // // cout << endl;
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < n; j++) {
            b[i][j] = a[n-j-1][i];
            // cout << b[i][j];
        }
        // cout << endl;
    }
    // cout << "\n";
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < n; j++) {
            c[i][j] = b[n-j-1][i];
            // cout << c[i][j];
        }
        // cout << "\n";
    }
    // cout << "\n";
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < n; j++) {
            d[i][j] = c[n-j-1][i];
            // cout << d[i][j];
        }
        // cout << "\n";
    }
    // cout << "\n";

    ll ans = 0;
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < n; j++) {
            char temp = a[i][j];
            if ((temp != b[i][j]) || (temp != c[i][j]) || (temp != d[i][j])) {
                ans++;
            }
        }
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        cout << solve() << "\n";
    }
}
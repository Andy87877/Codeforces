#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    ll n;
    cin >> n;

    ll a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    for (ll i = 0; i < n; i++) {
        ll num;
        cin >> num;
        string s;
        cin >> s;

        for (auto j: s) {
            if (j == 'U') {
                a[i]--;
                if (a[i] == -1) {
                    a[i] = 9;
                }
            } else {
                a[i]++;
                if (a[i] == 10) {
                    a[i] = 0;
                }
            }
        }
        cout << a[i] << " ";
    }
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        solve();
        cout << "\n";
    }
}
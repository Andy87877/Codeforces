#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

void solve() {
    ll n,l,r;
    cin >> n >> l >> r;

    if (n > r-l+1) {
        cout << "NO\n";
    } else {
        map<ll,ll> ma;
        bool flag = false;
        ll temp = l;

        for (ll j = n; j >= 1; j--) {
            bool flag = true;
            for (ll i = temp; i <= r; i++) {
                if ((i%j) == 0) {
                    if (ma[j] == 0) {
                        temp = i+1;
                        ma[j] = i;
                        flag = false;
                        break;
                    }
                }
            }
            if (flag) {
                break;
            }
        }
        if (flag) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
            for (ll i = 1; i <= n; i++) {
                cout << ma[i] << " ";
            }
            cout << "\n";
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
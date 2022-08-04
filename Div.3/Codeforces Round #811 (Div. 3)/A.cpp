#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

void solve() {
    ll n,H,M;
    cin >> n >> H >> M;
    ll h,m, temph, tempm, ansh, ansm, min = 9999999, temp;
    for (ll i = 0; i < n; i++) {
        cin >> h >> m;
        if (M > m) {
            h--;
            tempm = m-M+60;
        } else {
            tempm = m-M;
        }

        if (H > h) {
            temph = h-H+24;
        } else {
            temph = h-H;
        }
        temp = temph*60+tempm;
        if (temp < min) {
            min = temp;
            ansh = temph;
            ansm = tempm;
        }
    }
    cout << ansh << " " << ansm << "\n";
}

int main() {
    Andy8787_want_AC
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
}
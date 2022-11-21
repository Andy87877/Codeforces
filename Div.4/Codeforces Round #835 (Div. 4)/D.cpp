#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

/*
0≤l≤r≤n−1,
al=al+1=al+2=⋯=ar,
l=0 or al−1>al,
r=n−1 or ar<ar+1.
*/
string solve() {
    ll n, times = 0, now;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (ll l = 0; l < n; l++) {
        bool ok = false;
        for (ll r = l; r < n; r++) {
            //cout << l << " " << r << "\n";
            now = r;
            if (a[l] != a[r]) {
                now = r-1;
                break;
            }

            bool lbool = false;
            if (l == 0) {
                lbool = true;
            } else if (a[l-1] > a[l]) {
                lbool = true;
            }

            if (!lbool) {
                break;
            } else {
                bool rbool = false;
                if (r == n-1) {
                    rbool = true;
                } else if (a[r] < a[r+1]) {
                    rbool = true;
                }

                if (rbool) {
                    ok = true;
                    break;
                }
            }
        }
        if (ok) {
            times++;
        } else {
            l = now;
        }
    }
    if (times == 1) {
        return "YES";
    } else {
        return "NO";
    }
}

int main() {
    Andy8787_want_AC
    ll t;
    cin >> t;
    while (t--) {
        cout << solve() << "\n";
    }
}
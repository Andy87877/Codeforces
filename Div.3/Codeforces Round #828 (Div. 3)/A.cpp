#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

string solve() {
    ll n;
    cin >> n;
    ll a[n];
    map<ll, char> ma;
    map<ll, ll> manum;

    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    string s;
    cin >> s;
    for (ll i = 0; i < n; i++) {
        if (manum[a[i]] == 1) {
            if (ma[a[i]] != s[i]) {
                return "NO";
            }
        } else {
            ma[a[i]] = s[i];
            manum[a[i]] = 1;
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
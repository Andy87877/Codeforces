#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

string solve() {
    ll m, s;
    cin >> m >> s;
    vector<ll> vec(m);
    for (ll i = 0; i < m; i++) {
        cin >> vec[i];
    }
    sort(vec.begin(), vec.end());
    ll mx = vec.back();
    ll now = 0;
    ll total = 0;
    for (ll i = 1; total < s || i < mx; i++) {
        if (vec[now] != i) {
            total += i;
        } else {
            if (now < m) {
                now++;
            }
        }
    }
    if (total == s) {
        return "YES";
    }
    return "NO";
}

int main() {
    Andy8787_want_AC
    ll t;
    cin >> t;
    while (t--) {
        cout << solve() << "\n";
    }
}
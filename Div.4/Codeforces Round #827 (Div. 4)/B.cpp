#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

string solve() {
    ll n;
    cin >> n;
    map<ll,ll> ma;
    ll arr[n];
    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
    }
    if (n == 1) return "YES";
    for (auto i: arr) {
        ma[i]++;
        if (ma[i] >= 2) {
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
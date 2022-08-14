#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

string solve() {
    ll n;
    map<ll,ll> ma;
    bool flag0 = false, flag1 = false;  // 0.5 other 1.(2.4.8.6)
    cin >> n;

    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i]%5 == 0) flag0 = true;
        else flag1 = true;
        ma[a[i]]++;
    }
    if (flag0 && flag1) {
        return "No";
    }

    if (flag1) {
        return "Yes";
    }
    if (ma.size() == 2) {
        sort(a.begin(), a.end());
        if (abs(a[0]-a[a.size()-1]) == 5) {
            return "Yes";
        }
    }
    return "No";
}

int main() {
    Andy8787_want_AC
    ll t;
    cin >> t;
    while (t--) {
        cout << solve() << "\n";
    }
}
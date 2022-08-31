#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

void solve() {
    ll n, temp = 0, ans = 0;
    cin >> n;
    string s;
    cin >> s;
    vector<ll> dp;
    vector<ll> vec;
    for (ll i = 0; i < n; i++) {
        if (s[i] == 'R') {
            temp += n-i-1;
        } else {
            temp += i;
        }
        if ((i > (n-i-1)) && (s[i] == 'R')) {
            vec.push_back(i+i+1-n);
        } else if ((i < (n-i-1)) && (s[i] == 'L')) {
            vec.push_back(n-1-i-i);
        }
    }
    sort(vec.rbegin(), vec.rend());
    for (ll i = 0; i < vec.size(); i++) {
        ans += vec[i];
        cout << ans+temp << " ";
    }
    for (ll i = vec.size(); i < n; i++) {
        cout << ans+temp << " ";
    }
    cout << "\n";
}

int main() {
    Andy8787_want_AC
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
}
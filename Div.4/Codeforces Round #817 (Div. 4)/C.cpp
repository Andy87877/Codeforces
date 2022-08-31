#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

void solve() {
    ll n, a=0, b=0, c=0;
    cin >> n;
    map<string, ll> ma;
    vector<vector<string>> dp;
    for (ll i = 0; i < 3; i++) {
        vector<string> temp;
        for (ll j = 0; j < n; j++) {
            string str;
            cin >> str;
            ma[str]++;
            temp.push_back(str);
        }
        dp.push_back(temp);
    }
    for (ll i = 0; i < n; i++) {
        if (ma[dp[0][i]] ==1) a+=3;
        if (ma[dp[0][i]] ==2) a++;
    }
    for (ll i = 0; i < n; i++) {
        if (ma[dp[1][i]] ==1) b+=3;
        if (ma[dp[1][i]] ==2) b++;
    }
    for (ll i = 0; i < n; i++) {
        if (ma[dp[2][i]] ==1) c+=3;
        if (ma[dp[2][i]] ==2) c++;
    }
    cout << a << " " << b << " " << c << endl;
}

int main() {
    Andy8787_want_AC
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
}
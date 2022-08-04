#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

void solve() {
    ll n;
    cin >> n;
    
    ll temp = n;
    vector<ll> ans;
    while (temp != 0) {
        for (ll i = 9; i >= 1; i--) {
            if (temp >= i) {
                temp -= i;
                ans.push_back(i);
            }
        }
    }
    for (ll i = ans.size()-1; i >= 0; i--) {
        cout << ans[i];
    }
    cout << endl;
}

int main() {
    Andy8787_want_AC
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
}
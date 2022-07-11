#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    vector<ll> u;
    unordered_map <ll,ll> judge1;
    unordered_map <ll,ll> judge2;
    ll n,k,temp;
    cin >> n >> k;
    for (ll i = 0; i < n; i++) {
        cin >> temp;
        u.push_back(temp);
        judge2[u[i]] = i+1;
    }


    for (ll i = n-1; i >= 0; i--) {
        judge1[u[i]] = i+1;
    }


    for (ll i = 0; i < k; i++) {
        ll a,b;
        cin >> a >> b;
        if (judge1[a]*judge1[b]) {
            if (judge1[a] < judge2[b]) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        } else {
            cout << "NO\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
}
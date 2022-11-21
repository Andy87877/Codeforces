#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

ll solve() {
    vector<ll> v(3);
    cin >> v[0] >> v[1] >> v[2];
    sort(v.begin(), v.end());
    return v[1];
}

int main() {
    Andy8787_want_AC
    ll t;
    cin >> t;
    while(t--) {
        cout << solve() << endl;
    }
}
#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll solve() {
    ll n, temp;
    cin >> n;
    ll a[n];
    map<ll, ll> ma;
    for (ll i = 0; i < n; i++) {
        cin >> a[n];
        ma[a[n]]++;
    }
    
    vector<ll> times;
    for (auto i: ma) {
        times.push_back(i.second);
    }
    ll odd = 0, even = 0, ans;
    for (auto i: times) {
        if (i%2) {
            odd++;
        } else {
            even++;
        }
    }
    odd%=2;
    even%=2;
    ans = times.size()-even;
    
    if ((times.size() == 1) && (even == 1)) {
        return 0;
    } else if (ans <= 1) {
        return 1;
    } else {
        return ans;
    }
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        cout << solve() << "\n";
    }
}
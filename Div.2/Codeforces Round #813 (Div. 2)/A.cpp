#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

ll solve() {
    ll n,k;
    cin >> n >> k;
    vector<ll> vec(n+1);
    vector<ll> b;
    for (ll i = 1; i <= n; i++) {
        cin >> vec[i];
    }

    ll total = 0, temp = 0;
    for (ll i = 1; i <= k; i++) {
        temp += vec[i];
    }
    for (ll i = k+1; i <= n; i++) {
        b.push_back(vec[i]);
    }
    sort(b.begin(), b.end());

    for (ll i = 1; i <= k; i++) {
        if (temp <= total) {
            break;
        }
        if (vec[i] > k) {
            temp -= vec[i];
            temp += vec[b[0]];
            swap(vec[i],b[0]);
            total++;
            sort(b.begin(), b.end());
        }
    }
    // for (auto i: vec) {
    //     cout << i << " ";
    // }
    // cout << "\n";
    return total;
}

int main() {
    Andy8787_want_AC
    ll t;
    cin >> t;
    while (t--) {
        cout << solve() << "\n";
    }
}
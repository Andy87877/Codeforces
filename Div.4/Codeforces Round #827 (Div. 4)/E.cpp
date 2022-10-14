#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

void solve() {
    ll n,q;
    cin >> n >> q;
    ll a[n], sum[n], mi = 9999999999999, mx = -1;
    map<ll,ll> ma;
    vector<ll> all;

    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        ma[a[i]]++;
        if (mi > a[i]) mi = a[i];
        if (mx < a[i]) mx = a[i];
    }

    sum[0] = a[0];
    for (ll i = 1; i < n; i++) {
        sum[i] = a[i]+sum[i-1];
    }
    for (auto i: ma) {
        all.push_back(i.first);
    }
    sort(all.begin(), all.end());
    
    map<ll,ll> temp;
    for (auto i: all) {
        
        for (ll j = 0; j < n; j++) {
            if (i < a[j]) {
                temp[i] = j;
                break;
            }
        }
    }

    // for (auto i : temp) {
    //     cout << i.first << ":" << i.second << endl;
    // }

    ll k[q];
    for (ll i = 0; i < q; i++) {
        cin >> k[i];
    }

    for (ll i = 0; i < q; i++) {
        if (mi > k[i]) {
            cout << 0 << " ";
        } else if (mx <= k[i]) {
            cout << sum[n-1] << " ";
        } else {
            for (auto j: temp) {
                if (j.first > k[i]) {
                    // cout << j.first << ":" << sum[j.second-2] << " ";
                    cout << sum[j.second-2] << " ";
                    break;
                }
                if (j.first == k[i]) {
                    cout << sum[j.second-1] << " ";
                    break;
                }
            }
        }   
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
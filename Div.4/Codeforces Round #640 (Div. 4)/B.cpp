#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    ll n,k;
    cin >> n >> k;
    if (n < k) {
        cout << "NO\n";
    } else if (n == k) {
        cout << "YES\n";
        for (ll i = 0; i < n; i++) {
            cout << "1 ";
        }
        cout << "\n";
    } else {
        vector<ll> vec;
        bool flag = true;
        for (ll i = 0; i < k-1; i++) {
            vec.push_back(1);
        }
        vec.push_back(n-k+1);

        if (vec[vec.size()-1]%2) {
            cout << "YES\n";
            flag = false;
        } else {
            vec.clear();
            for (ll i = 0; i < k-1; i++) {
                vec.push_back(2);
            }
            vec.push_back(n-k*2+2);
            if ((vec[vec.size()-1]%2 == 0) && (vec[vec.size()-1] >= 2)) {
                cout << "YES\n";
                flag = false;
            }
        }
        if (flag) {
            cout << "NO\n";
        } else {
            for (ll i = 0; i < k-1; i++) {
                cout << vec[i] << " ";
            }
            cout << vec[vec.size()-1] << "\n";
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
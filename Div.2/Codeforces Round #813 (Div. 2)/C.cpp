#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

ll solve() {
    ll n;
    cin >> n;
    ll temp = n;
    vector<ll> vec(n);
    for (ll i = 0; i < n; i++) {
        cin >> vec[i];
    }
    for (ll i = n-1; i >= 0; i--) {
        bool flag = false;
        map<ll,ll> ma;
        for (ll j = i-1; j >= 0; j--) {
            if (vec[i] == vec[j]) {
                flag = true;
            }
            ma[vec[j]]++;
            if (vec[i] > vec[j]) {
                flag = true;
            }
        }
        temp--;
        if (flag) {
            return ma.size();
        }
    }
    return 0;
}

int main() {
    Andy8787_want_AC
    ll t;
    cin >> t;
    while (t--) {
        cout << solve() << "\n";
    }
}
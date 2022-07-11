#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    string n;
    vector<ll> a;
    cin >> n;
    for (ll i = 0; i < n.size(); i++) {
        ll temp = int(n[i])-48, hi;
        string m;
        if (temp != 0) {
            hi = temp*pow(10,(n.size()-i-1));
            m = to_string(hi);
            if (hi != 9) {
                if (m[m.size()-1] == '9') {
                    hi++;
                } 
            }
            a.push_back(hi);
        }
    }

    cout << a.size() << "\n";
    for (auto i: a) {
        cout << i << " ";
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
}
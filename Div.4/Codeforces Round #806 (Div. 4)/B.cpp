#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll solve() {
    ll n;
    cin >> n;
    string s;
    cin >> s;
    map <char, ll> ma;

    ll total = n;
    for (auto i: s) {
        ma[i]++;
    }

    for (auto i :ma) {
        total ++;
    }
    return total;
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        cout << solve() << "\n";
    }
}
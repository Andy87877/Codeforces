#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

string solve() {
    ll n, temp;
    cin >> n;

    vector<ll> a;
    map<ll,ll> ma;
    for (ll i = 0; i < n; i++) {
        cin >> temp;
        ma[temp]++;
        a.push_back(temp);
    }

    for (ll i = 0; i < 200000; i++) {
        for (ll j = 0; j < n; j++) {
            sort(a.begin(), a.end());
            ma[a[0]]--;
            a.erase(a.begin());
            a[0] = (a[0] + (a[0]%10));
            ma[a[0]]++;
            a.push_back(a[0]);
            if (ma[a[0]] == n) {
                return "Yes";
            }
        }
    }

    return "No";
}

int main() {
    Andy8787_want_AC
    ll t;
    cin >> t;
    while (t--) {
        cout << solve() << "\n";
    }
}
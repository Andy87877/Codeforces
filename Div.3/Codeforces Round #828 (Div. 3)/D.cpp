#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

ll solve() {
    ll n;
    cin >> n;
    ll a;
    ll total = 0, ans = 0;

    for (ll i = 0; i < n; i++) {
        cin >> a;
        while (a%2 == 0) {
            total++;
            a /= 2;
        }
    }

    if (total == n) {
        return ans;
    } 

    ll temp = n-total;

    
    return -1;
}

int main() {
    Andy8787_want_AC
    ll t;
    cin >> t;
    while (t--) {
        cout << solve() << "\n";
    }
}
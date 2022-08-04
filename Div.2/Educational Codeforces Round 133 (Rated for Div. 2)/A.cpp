#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

ll solve() {
    ll x;
    cin >> x;
    if (x == 1) {
        return 2;
    }

    if (x%3 == 0) {
        return x/3;
    } else if (x%3 == 1) {
        return (x/3)+1;
    } else {
        return (x/3)+1;
    }
}

int main() {
    Andy8787_want_AC
    ll t;
    cin >> t;
    while (t--) {
        cout << solve() << "\n";
    }
}
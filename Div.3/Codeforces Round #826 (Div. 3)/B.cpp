#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

void solve() {
    ll n;
    cin >> n;
    if (n == 3) {
        cout << -1;
    } else if (n == 2){
        cout << "2 1";
    } else {
        cout << n-1 << " " << n << " ";
        for (int i = 1; i <= n-2; i++) {
            cout << i << " ";
        }
    }
}

int main() {
    Andy8787_want_AC
    ll t;
    cin >> t;
    while (t--) {
        solve();
        cout << "\n";
    }
}
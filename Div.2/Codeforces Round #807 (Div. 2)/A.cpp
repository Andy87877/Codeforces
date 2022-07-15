#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

string solve() {
    ll n,x, temp = 0;
    cin >> n >> x;
    vector<ll> arr(2*n);
    for (ll i = 0; i < 2*n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());

    for (ll i = 0; i < n; i++) {
        if ((arr[i+n]) >= (arr[i]+x)) {
            temp++;
        }
    }
    if(temp==n) {
        return "YES";
    } else {
        return "NO";
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
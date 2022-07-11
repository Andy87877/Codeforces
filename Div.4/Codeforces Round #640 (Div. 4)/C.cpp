#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll solve() {
    ll n,k, ans;
    cin >> n >> k;
    if (n > k) {
        return k;
    }
    ans = ((k-1)/(n-1))+k;
    return ans;
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        cout << solve() << "\n";
    }
}
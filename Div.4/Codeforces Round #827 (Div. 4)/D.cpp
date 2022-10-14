#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

bool judge(ll a, ll b) {
    return (__gcd(a, b) == 1);
}

ll solve() {
    ll n;
    cin >> n;
    ll a[n+1];
    map<ll, ll> ma;
    for (ll i = 1; i <= n; i++){
        cin >> a[i];
    }

    ll mx = -1;
    for (ll i = n; i >= 1; i--){
        ma[a[i]]++;
        if (ma[a[i]] == 1) {
            for (ll j = n; j >= i; j--){
                // cout << i << " " << j << "\n";
                if (judge(a[i],a[j])) {
                    return i+j;
                }
            }
        }
    }
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
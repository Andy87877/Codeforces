#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;

        ll a[n];
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }

        ll ans = a[0];
        for (ll i = 1; i < n; i++){
            if (ans < a[i]) {
                ans = a[i];
            } else {
                ll k = 1, tmp = a[i];
                while (a[i] <= ans){
                    a[i] = tmp*k;
                    k++;
                }
                ans = a[i];
            }
        }
        cout << ans << endl;

    }
    
}
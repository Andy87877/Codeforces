#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

void judge(){
    ll n,x,y;
    cin >> n >> x >> y;
    ll a[n];
    for(ll i=0;i<n;i++){cin >> a[i];}

    ll total = 0;
    for (ll i = 0; i < n; i++){
        for (ll j = i+1; j < n; j++){
            ll one = (a[i]+a[j])/x, two = (a[i]-a[j])/y;
            if (one*x == (a[i]+a[j]) && two*y == (a[i]-a[j])){
                total++;
            }
        }
    }
    cout << total << endl;
}

int main() {
    Andy8787_want_AC
    ll t;
    cin >> t;
    while(t--){
        judge();
    }
}
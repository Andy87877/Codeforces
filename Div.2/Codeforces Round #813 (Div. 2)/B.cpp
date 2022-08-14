#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

ll gcd(ll a,ll b){
    if(b==0)return a;
    else return gcd(b,a%b);
}
ll lcm(ll a,ll b){
    return a*b/gcd(a,b);
}

void solve() {
    ll n;
    cin >> n;
    vector<ll> ans;
    for (ll i = n; i >= 2; i -= 2) {
        ans.push_back(i-1);
        ans.push_back(i);
        // cout << i-1 << " " << i << " ";
    }
    if (n%2) {
        // cout << 1;
        ans.push_back(1);
    }
    for (ll i = n-1; i >= 0; i--) {
        cout << ans[i] << " ";
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
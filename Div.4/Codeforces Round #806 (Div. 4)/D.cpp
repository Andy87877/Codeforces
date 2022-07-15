#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool judge(string a[10001],ll n, ll i, ll mx, ll mi) {
    if (a[i].size() <= mi*2-1) {
        return false;
    }
    for (ll j = 0; j < n/2; j++) {
        if (a[j].size()+mi <= mx) {
            for (ll k = 0; k < n/2; k++) {
                if (a[k].size()+a[j].size() == a[i].size()) {
                    if (a[j]+a[k] == a[i]) {
                        return true;
                    } else if (a[j]+a[k] == a[i]) {
                        return true;
                    }
                }
            }
        } 
        
    }
    return false;
}

string solve() {
    string ans = "";
    ll n,mx = 0,mi = 999999999;
    cin >> n;
    string a[n];

    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        if(mx < a[i].size()) mx = a[i].size();
        if (mi > a[i].size()) mi = a[i].size();
    }
    for (ll i = 0; i < n; i++) {
        if(judge(a,n,i,mx,mi)) {
            ans += "1";
        } else {
            ans += "0";
        }
    }

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
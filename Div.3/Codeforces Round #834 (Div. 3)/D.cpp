#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

ll check(string s) {
    ll checkans = 0;
    for (ll z = s.size()-1; z >= 0; z--) {
        if (s[z] != '0') {
            break;
        }
        checkans++;
    }
    return checkans;
}

ll solve() {
    ll n,m, mx, zeromx = 0;
    cin >> n >> m;
    ll times = to_string(m).size();
    mx = n*m;
    
    for (ll i = m; i >= pow(10,times-2); i--) {
        string checkstr = to_string(n*i);
        if (check(checkstr) >= zeromx) {
            if (check(checkstr) == zeromx) {
                mx = max(mx, n*i);
            } else {
                zeromx = check(checkstr);
                mx = n*i;
            }
        } 
    }
    return mx;
}

int main() {
    Andy8787_want_AC
    ll t;
    cin >> t;
    while (t--) {
        cout << solve() << "\n";
    }
}
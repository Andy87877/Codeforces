#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

ll solve() {
    ll n;
    char c;
    cin >> n >> c;
    string s;
    cin >> s;
    if (c == 'g') {
        return 0;
    }

    ll mx = -1, temp = 0, firs = 0;
    bool flag = false, flagfirst = true;
    for (ll i = 0; i < n; i++) {
        if (s[i] == 'g') {
            if (temp > mx) mx = temp;
            temp = 0;
            flag = false;
            flagfirst = false;
        } else if (s[i] == c) {
            flag = true;
            temp++;
        } else {
            if (flag) {
                temp++;
            }
        }
        if (flagfirst) firs++;
    }
    if (temp != 0) {
        if (temp+firs > mx) mx = temp+firs;
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
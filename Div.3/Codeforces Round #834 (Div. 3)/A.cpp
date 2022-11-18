#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

string solve() {
    string an = "Yes";
    ll now = 0;
    string s;
    cin >> s;
    for (ll i = 0; i < an.size(); i++) {
        if (s[0] != 'Y' && s[0] != 'e' && s[0] != 's') {
            return "NO";
        }
        if (s[0] == an[i]) {
            now = i;
            break;
        }
    }

    for (auto str: s) {
        if (str != 'Y' && str != 'e' && str != 's') {
            return "NO";
        }
        if (an[now%3] == str) {
            now++;
        } else {
            return "NO";
        }
    }
    return "YES";
}

int main() {
    Andy8787_want_AC
    ll t;
    cin >> t;
    while (t--) {
        cout << solve() << "\n";
    }
}
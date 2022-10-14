#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

string solve() {
    ll a,b,c;
    cin >> a >> b >> c;
    if (a+b == c) return "YES";
    if (a+c == b) return "YES";
    if (c+b == a) return "YES";
    return "NO";
}

int main() {
    Andy8787_want_AC
    ll t;
    cin >> t;
    while (t--) {
        cout << solve() << "\n";
    }
}
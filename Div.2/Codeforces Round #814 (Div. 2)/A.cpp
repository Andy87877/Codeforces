#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

string solve() {
    ll n,m;
    cin >> n >> m;
    if ((n+m)%2) {
        return "Burenka";
    }
    return "Tonya";
}

int main() {
    Andy8787_want_AC
    ll t;
    cin >> t;
    while(t--) {
        cout << solve() << endl;
    }
}
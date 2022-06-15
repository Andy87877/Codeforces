#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll solve() {
    ll a,b,c,d,total = 0;
    cin >> a >> b >> c >> d;
    if (a<b) {
        total++;
    }
    if (a<c) {
        total++;
    }
    if (a<d) {
        total++;
    }
    return total;
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    ll t;
    cin >> t;
    while(t--) {
        cout << solve() << "\n";
    }
}
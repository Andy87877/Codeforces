#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

ll solve() {
    ll a,b,c;
    cin >> a >> b >> c;
    ll temp1 = a-1, temp2 = abs(c-b)+c-1;
    if (temp1 < temp2) {
        return 1;
    } 
    if (temp1 == temp2) {
        return 3;
    }
    return 2;
}

int main() {
    Andy8787_want_AC
    ll t;
    cin >> t;
    while (t--) {
        cout << solve() << "\n";
    }
}
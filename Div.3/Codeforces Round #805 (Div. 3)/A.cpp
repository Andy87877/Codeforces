#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll solve() {
    ll n;
    string str;
    cin >> n;
    str = to_string(n);
    
    ll ans = 0;
    if (str.size() >= 2) {
        ans = n-(pow(10,str.size()-1));
    } else {
        ans = n-1;
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
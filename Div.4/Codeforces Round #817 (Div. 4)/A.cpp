#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

string solve() {
    ll n;
    cin >> n;
    string str;
    cin >> str;
    map<char, ll> ma;
    for (auto i: str) {
        ma[i]++;
    }
    if ((ma['T'] == 1) && (ma['i'] == 1) && (ma['m'] == 1) && (ma['u'] == 1) && (ma['r'] == 1)) {
        return "YES";
    } 
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
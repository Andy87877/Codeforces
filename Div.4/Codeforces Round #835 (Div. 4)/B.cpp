#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int solve() {
    int a, mx = -1;
    cin >> a;
    string s;
    cin >> s;
    for (char i: s) {
        mx = max(mx, int(i)-96);
    }
    return mx;
}
int main() {
    Andy8787_want_AC
    int t;
    cin >> t;
    while (t--) {
        cout << solve() << "\n";
    }
}
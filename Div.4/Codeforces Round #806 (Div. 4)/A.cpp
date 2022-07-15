#include <bits/stdc++.h>
#define ll long long
using namespace std;

string solve() {
    string a;
    cin >> a;
    if (!((a[0] == 'Y') || (a[0] == 'y'))) {
        return "NO";
    } else if (!((a[1] == 'E') || (a[1] == 'e'))) {
        return "NO";
    } else if (!((a[2] == 'S') || (a[2] == 's'))) {
        return "NO";
    }
    return "YES";
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        cout << solve() << "\n";
    }
}
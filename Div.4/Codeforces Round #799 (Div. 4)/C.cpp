#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll solve() {
    char a[8][8];
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            if (a[i][j] == '#') {
                if (a[i+1][j+1] == '#') {
                    if (a[i+2][j] == '#') {
                        cout << i+2 << " " << j+2 << "\n";
                        return 1;
                    }
                }
            }
        }
    }
    return 1;
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
}
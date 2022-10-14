#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

string solve() {
    char arr[8][8];
    for (ll i = 0; i < 8; i++) {
        for (ll j = 0; j < 8; j++) {
            cin >> arr[i][j];
        }
    }

    // 橫
    for (ll i = 0; i < 8; i++) {
        bool flag = true;
        if (arr[i][0] == 'R') {
            for (ll j = 1; j < 8; j++) {
                if (arr[i][j] != 'R') {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                return "R";
            }
        }
    }

    for (ll i = 0; i < 8; i++) {
        bool flag = true;
        if (arr[0][i] == 'B') {
            for (ll j = 1; j < 8; j++) {
                if (arr[j][i] != 'B') {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                return "B";
            }
        } 
    }
}

int main() {
    Andy8787_want_AC
    ll t;
    cin >> t;
    while (t--) {
        cout << solve() << "\n";
    }
}
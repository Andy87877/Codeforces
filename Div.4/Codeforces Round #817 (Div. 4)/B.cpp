#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

string solve() {
    string str1, str2;
    ll n;
    cin >> n;
    cin >> str1 >> str2;
    
    for (ll i = 0; i < n; i++) {
        if (str1[i] != str2[i]) {
            if (((str1[i] == 'G') && (str2[i] == 'B')) || (str1[i] == 'B') && (str2[i] == 'G')) {

            } else {
                return "No";
            }
        }
    }
    return "Yes";
}

int main() {
    Andy8787_want_AC
    ll t;
    cin >> t;
    while (t--) {
        cout << solve() << endl;
    }
}
#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

string judge(){
    string str;
    cin >> str;
    if (str.size() <= 2) return "NO";

    if (str[0] != '1' || str[1] != '0') return "NO";

    if (str.size() == 3 && str[2] == '1') return "NO";

    if (str[2] == '0') return "NO";

    return "YES";
}

int main() {
    Andy8787_want_AC

    ll t;
    cin >> t;
    while (t--){
        cout << judge() << "\n";
    }
}
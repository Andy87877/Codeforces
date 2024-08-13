#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

string judge(){
    ll n;
    cin >> n;

    ll arr[n];
    for (ll i = 0; i < n; i++){
        cin >> arr[i];
    }

    ll m;
    cin >> m;

    // judge
    string str;
    while(m--){
        cin >> str;

        if (str.size() != n) {
            cout << "NO\n";
        } else {
            unordered_map<int, char> mapIntToChar;
            unordered_map<char, int> mapCharToInt;
            bool flag = true;

            for (int i = 0; i < n; i++){
                ll num = arr[i];
                char c = str[i];
                if (mapIntToChar.count(num) == 0 && mapCharToInt.count(c) == 0) {
                    mapIntToChar[num] = c;
                    mapCharToInt[c] = num;
                } else if (mapIntToChar[num] != c || mapCharToInt[c] != num) {
                    cout << "NO\n";
                    flag = false;
                    break;
                }
            }

            if (flag) cout << "YES\n";
        }
    }
}

int main() {
    Andy8787_want_AC

    ll t;
    cin >> t;
    while (t--){
        judge();
    }
}
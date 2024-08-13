#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        string s;
        cin >> s;

        ll ans = 0;
        bool flag = true;
        for (ll i = 0; i < n-1; i++){
            if (s[i] == '@'){
                ans++;
            }
            if(s[i] == '*' && s[i+1] == '*'){
                flag = false;
                break;
            }
        }
        if(flag){
            if(s[n-1] == '@') ans++;
        }

        cout << ans << "\n";
    }
}
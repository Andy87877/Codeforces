#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

string judge(){
    int n, s, m;
    // Alex 已經計劃好的時間間隔數、Alex 洗澡的時間以及每天的分鐘數。
    cin >> n >> s >> m;

    int l, r;
    int shower = 0;
    int last = 0;
    
    bool flag = false;
    for (ll i = 0; i < n; i++){
        cin >> l >> r;

        shower = (l - last);
        // cout << shower << "\n";
        if (shower >= s){
            flag = true;
        }
        last = r;
    }

    shower = (m-last);
    // cout << shower << "\n";
    if (shower >= s){
        flag = true;
    }

    if (flag){
        return "YES";
    }

    return "NO";
}

int main() {
    Andy8787_want_AC
    ll t;
    cin >> t;
    while (t--){
        cout << judge() << "\n";
    }
}
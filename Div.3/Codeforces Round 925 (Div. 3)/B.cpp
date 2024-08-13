#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

bool judge() {
    ll n;
    cin >> n;
    ll a[n], total = 0;
    for (ll i = 0; i < n; i++){
        cin >> a[i];
        total += a[i];
    }
    ll avg = total / n;
    ll b[n];

    for (ll i = 0; i < n; i++){
        b[i] = a[i]-avg;
    }


    ll mx = -1, mi = 999999;
    while(mx != mi){
        bool flag = false;
        mx = -1, mi = 999999;

        for (ll i = 0; i < n; i++){
            mx = max(mx, b[i]);
            mi = min(mi, b[i]);
            if(b[i] > 0){
                for (ll j = i+1; j < n; j++){
                    mx = max(mx, b[i]);
                    mi = min(mi, b[i]);
                    if(b[j] < 0){
                        flag = true;
                        b[i]--;
                        b[j]++;
                        break;
                    }
                }
                if(flag) break;
            } else if (b[i] < 0){
                return false;
            }
        }
    }
    return true;
}

int main() {
    Andy8787_want_AC
    ll t;
    cin >> t;
    while(t--){
        if(judge()){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}
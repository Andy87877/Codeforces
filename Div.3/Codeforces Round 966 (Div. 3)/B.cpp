#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

string judge(){
    ll n;
    cin >> n;
    
    ll a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    ll arr[n+2]; // 1~ n
    memset(arr, 0, sizeof(arr));
    
    arr[a[0]] = 1;
    for (int i = 1; i < n; i++){
        if (arr[a[i]+1] == 1 || arr[a[i]-1] == 1){
            arr[a[i]] = 1;
        } else {
            return "NO";
        }
    }

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
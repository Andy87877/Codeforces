#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

ll judge(){
    ll n;
    cin >> n;

    vector<ll> arr(n);
    vector<ll> vec(n);

    cin >> arr[0];
    vec[0] = arr[0];
    for (ll i = 1; i < n; i++){
        cin >> arr[i];
        vec[i] = arr[i] + vec[i-1];
    }

    string str;
    cin >> str;

    ll L_index = 0, R_index = n-1;
    ll ans = 0;

    while (L_index < R_index) {
        while (L_index < n && str[L_index] != 'L') {
            L_index++;
        }

        while (R_index >= 0 && str[R_index] != 'R') {
            R_index--;
        }
        if (L_index >= R_index) break;

        ans += (vec[R_index]-vec[L_index]+arr[L_index]);
        
        L_index++;
        R_index--;
    }

    return ans;
}

int main() {
    Andy8787_want_AC
    ll t;
    cin >> t;

    while (t--){
        cout << judge() << "\n";
    }
}

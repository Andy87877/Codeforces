#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

ll judge(){
    ll n,m,k;
    cin >> n >> m >> k;

    ll w;
    cin >> w;
    vector<ll> arr(w);
    for (ll i = 0 ; i < w; i++){
        cin >> arr[i];
    }
    sort(arr.rbegin(), arr.rend());

    vector<ll> row(n), col(m);
    for (ll i = 0; i < n; i++){
        row[i] = 0;
    }
    for (ll i = 0; i < m; i++){
        col[i] = 0;
    }

    for (ll i = 0; i < n-k+1; i++){
        for (ll j = i; j < i+k; j++){
            row[j]++;
        }
    }
    for (ll i = 0; i < m-k+1; i++){
        for (ll j = i; j < i+k; j++){
            col[j]++;
        }
    }
    sort(row.rbegin(), row.rend());
    sort(col.rbegin(), col.rend());
    vector<ll> tmp;

    for (ll i = 0; i < n; i++){
        for (ll j = 0; j < m; j++){
            tmp.push_back(row[i]*col[j]);
            // cout << row[i]*col[j] << " ,";
        }
    }

    sort(tmp.rbegin(), tmp.rend());

    ll ans = 0;
    for (ll i = 0; i < min(w, m*n); i++){
        ans += (tmp[i]*arr[i]);
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
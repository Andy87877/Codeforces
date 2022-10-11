#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

void solve() {
    string str;
    cin >> str;
    ll arr[str.size()];
    vector<ll> so;
    for (ll i = 0; i < str.size(); i++) {
        arr[i] = int(str[i]);
        so.push_back(arr[i]);
    }
    sort(so.begin(), so.end());
    ll hi = 0;
    for (ll i = 0; i < so.size(); i++) {
        if (so[i] == arr[0]) {
            hi = i;
            break;
        }
    }
    vector<ll> ans;
    ll want = abs(arr[str.size() - 1]-arr[0]);
    bool up = true;
    if (arr[str.size() - 1] < arr[0]) {
        up = false;
    }

    ll ind = 1;
    for (ll i = 0; i < want; i++) {
        if (up) {
            hi++;
            if (hi >= so.size()) {
                break;
            }
        } else {
            hi--;
            if (hi <= -1) {
                break;
            }
        }
        for (ll j = 0; j < str.size(); j++) {
            if (so[hi] == arr[j]) {
                ind = j+1;
                break;
            }
        }
        arr[ind-1] = 0;
        ans.push_back(ind);
    }

    cout << want << " " << ans.size() << "\n";
    for (auto i: ans) {
        cout << i << " ";
    }
    cout << "\n";
}

int main() {
    Andy8787_want_AC
    ll t;
    cin >> t;
    while(t--) {
        solve();
    }
}
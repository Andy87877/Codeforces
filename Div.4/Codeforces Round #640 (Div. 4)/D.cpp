#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    ll n, num;
    cin >> n;
    vector<ll> vec;
    for (int i = 0; i < n; i++) {
        cin >> num;
        vec.push_back(num);
    }

    ll A = 0, B = 0, total = 0, mx = 0;
    while (!vec.empty()) {
        ll temp = 0;
        bool flag = true;
        for (ll i = 0; i < vec.size(); i++) {
            temp += vec[i];
            if (temp > mx) {
                A += temp;
                mx = temp;
                vec.erase(vec.begin(),vec.begin()+i+1);
                flag = false;
                break;
            }
        }
        total++;
        if (flag) {
            A += temp;
            vec.clear();
            break;
        }
        if (vec.empty()) {
            break;
        }

        ll QQ = 0;
        temp = 0;
        flag = true;
        for (ll i = vec.size()-1; i >= 0; i--) {
            QQ++;
            temp += vec[i];
            if (temp > mx) {
                B += temp;
                mx = temp;
                vec.erase(vec.end()-QQ,vec.end());
                flag = false;
                break;
            }
        }
        total++;
        if (flag) {
            B += temp;
            vec.clear();
            break;
        }
    }
    cout << total << " " << A << " " << B << "\n";
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
}
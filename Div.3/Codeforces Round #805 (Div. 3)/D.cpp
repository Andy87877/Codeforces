#include <bits/stdc++.h>
#define ll long long
using namespace std;

string solve() {
    vector<ll> vec;
    map<char,ll> ma;
    string s;
    ll p;
    cin >> s;
    cin >> p;

    ll total = 0;
    for (auto i: s) {
        ma[i]++;
        vec.push_back(int(i)-96);
        total += (int(i)-96);
    }
    sort(vec.rbegin(),vec.rend());

    ll temp, end = vec.size();
    for (ll j = 0; j < end; j++) {
        bool flag = false;
        for (ll i = 0; i <= vec.size(); i++) {
            if (total-vec[i] == p) {
                ma[char(vec[i]+96)]--;
                total -= vec[i];
                flag = true;
            }
        }
        if (flag) {
            break;
        }

        flag = true;
        for (ll i = 0; i <= vec.size(); i++) {
            if (total-vec[i] > p) {
                ma[char(vec[i]+96)]--;
                total -= vec[i];
                flag = false;
                break;
            }
        }
        if (flag) return "";
    }

    string ans = "";
    
    for (auto i: s) {
        if(ma[i]) {
            ans += i;
            ma[i]--;
        }
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        cout << solve() << "\n";
    }
}
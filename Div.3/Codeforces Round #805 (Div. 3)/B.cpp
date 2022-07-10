#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll solve() {
    string s;
    cin >> s;

    ll total = 1;
    vector<char> vec;
    for (auto i: s) {
        bool flag = true;
        for (auto j: vec) {
            if (i == j) {
                flag = false;
            }
        }
        if (flag) {
            if (vec.size() == 3) {
                vec.clear();
                total++;
            }
            vec.push_back(i);
        }
    }
    return total;
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        cout << solve() << "\n";
    }
}
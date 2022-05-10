#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdio>

#define ll long long
using namespace std;

void judge() {
    ll n, q, judgenum, temp;
    cin >> n >> q;
    vector<ll> vec;

    for (int i = 0; i < n; i++) {
        cin >> temp;
        vec.push_back(temp);
    }
    sort(vec.begin(), vec.end(), greater<int>());

    vector<ll> ans;
    ans.push_back(vec[0]);
    for (int i = 1; i < n; i++) {
        ans.push_back(ans[i-1]+vec[i]);
    }

    for (int i = 0; i < q; i++) {
        cin >> temp;
        if (ans[n-1] < temp) {
            cout << -1;
        } else {
            for (int j = 0; j < n; j++) {
                if (temp <= ans[j]) {
                    cout << j+1;
                    break;
                }
            }
        }
        cout << endl;
    }
}

int main() {
    cout.sync_with_stdio(false);
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll t;
    cin >> t;
    while(t--) {
        judge();
    }
}
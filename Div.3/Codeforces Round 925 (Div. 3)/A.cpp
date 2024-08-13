#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

void judge(){
    ll n, total = 0, haha;
    string ans = "";
    vector<int> v;
    cin >> n;

    haha = n;
    while (n >= 28) {
        v.push_back(26);
        total += 26;
        n -= 26;
    }
    if (v.size() == 3) {
    } else if (v.size() == 2) {
        v.push_back(haha-total);
    } else if (v.size() == 1) {
        v.push_back(1);
        v.push_back(n-1);
    } else {
        v.push_back(1);
        v.push_back(1);
        v.push_back(n-2);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++) {
        cout << char(v[i]+96);
    }
    cout << "\n";
    
}

int main() {
    Andy8787_want_AC
    ll t;
    cin >> t;
    while(t--){
        judge();
    }
}
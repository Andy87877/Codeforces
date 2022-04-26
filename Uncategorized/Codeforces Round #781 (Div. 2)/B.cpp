#include <iostream>
#include <map>
#include <cmath>
#include <vector>
#define int long long

using namespace std;

void judge() {
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> map;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        map[a[i]]++;
    }

    int Ele = -1e18, Frq = -1e18;
    for (auto it: map) {
        if (it.second <= Frq) continue;
        Ele = it.first;
        Frq = it.second;
    }

    int req = n - Frq, ans = 0;
    while(req > 0) {
        ans++;
        if (Frq < req) {
            req -= Frq;
            ans += Frq;
            Frq *=2;
        } else {
            ans += (req);
            break;
        }
    }
    cout << ans << endl;
}

signed main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        judge();
    }
}
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

ll judge() {
    ll times;
    cin >> times;
    vector<ll> v;
    ll num, min = 999999999999999;
    for (int i = 0; i < times; i++) {
        cin >> num;
        if (num < min) {
            min = num;
        }
        v.push_back(num);
    }

    ll ans = 0;
    for (int i = 0; i < times; i++) {
        ans += v[i]-min;
    }
    return ans;
}

int main() {
    ll t;
    cin >> t;
    while(t--) {
        cout << judge() << endl;
    }
}
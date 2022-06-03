#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

ll t, n, odd, even, total, temp, ans, Minnum;

ll Reduction(ll num) {
    total = 0;
    while((num % 2) == 0) {
        num /= 2;
        total++;
    }
    return total;
}


ll judge() {
    cin >> n;
    ll a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    odd = 0;
    even = 0;

    for (int i = 0; i < n; i++) {
        if (a[i]%2) {
            odd++;
        } else {
            even++;
        }
    }
    // cout << odd << " " << even << "\n";
    if (odd >= 1) {
        return even;
    }

    Minnum = a[0];
    for (int i = 0; i < n; i++) {
        temp = Reduction(a[i]);
        if (temp < Minnum) {
            Minnum = temp;
        }
    }
    ans = Minnum + even-1;
    return ans;
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    cin >> t;
    while (t--) {
        cout << judge() << "\n";
    }
}
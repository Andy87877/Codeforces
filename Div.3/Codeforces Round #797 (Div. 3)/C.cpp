#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <map>
#include <string>
#include <algorithm>
#include <vector>
#define ll long long
using namespace std;

ll n, t;
bool flag;

void judge() {
    cin >> n;
    ll s[n], f[n];
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> f[i];
    }

    for (int i = 0; i < n-1; i++) {
        if (f[i] >= f[i+1]) { //全覆蓋
            s[i+1] = s[i];
            f[i+1] = f[i];
        } else if (f[i] >= s[i+1]) {//半覆蓋
            s[i+1] = f[i];
        }
    }

    if (n == 1) {
        cout << f[0]-s[0] << " ";
    } else {
        for (int i = 0; i < n-1; i++) {
            if ((f[i] != f[i+1]) || (s[i] != s[i+1])) {
                cout << f[i]-s[i] << " ";
            }
        }

        if (f[n-1] != f[n-2]) {
            cout << f[n-1]-s[n-1] << " ";
        }
    }
    

    cout << "\n";
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    cin >> t;
    while (t--) {
        judge();
    }
}
#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <map>
#include <string>
#include <algorithm>
#include <vector>
#define ll long long
using namespace std;

ll t,n, temp, zero, mx;
bool flag, havezero, nosamezero;
string judge() {
    cin >> n;
    ll a[n], b[n];
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++) {
        cin >> b[i];
    }

    flag = false;
    havezero = false;
    zero = 0; // b[i] = 0;
    temp = 0;
    for (ll i = 0; i < n; i++) {
        if (b[i] > a[i]) {
            return "NO";
        }
        if (b[i] != 0) {
            if (flag) {
                if (temp != (a[i]-b[i])) {
                    return "NO";
                }
            } else {
                temp = a[i]-b[i];
                flag = true;
            }
        } else {
            if (havezero) {
                if (zero != a[i]) {
                    if (zero < a[i]) {
                        zero = a[i];
                    }
                }
            } else {
                zero = a[i];
                havezero = true;
            }
        }
    }

    if (flag) { //b[i] = 0
        if (zero > temp) {
            return "NO";
        }
    }
    return "YES";
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    cin >> t;
    while(t--) {
        cout << judge() << "\n";
    }
}
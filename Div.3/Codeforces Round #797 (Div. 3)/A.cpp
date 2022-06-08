#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <map>
#include <string>
#include <algorithm>
#include <vector>
#define ll long long
using namespace std;

ll t, n,a,b,c;

void judge() {
    cin >> n;
    b = n/3;
    a = b-1;
    c = n-b-a;
    while ((a >= b) || (c >= a) || (c >= b)) {
        if (c >= a) {
            c--;
            a++;
        } else {
            a--;
            b++;
        }
    }
    cout << a << " " << b << " " << c << endl;
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    cin >> t;
    while(t--) {
        judge();
    }
}
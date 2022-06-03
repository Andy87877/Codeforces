#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
#define ll long long
using namespace std;

ll t, n;
string s;

string judge() {
    cin >> n;
    string arrstr[n];
    for (int i = 0; i < n; i++) {
        cin >> arrstr[i];
    }
    return arrstr[0];
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    cin >> t;
    while(t--) {
        cout << judge() << "\n";
    }
}
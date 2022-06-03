#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

ll t, x, y;
bool judgeAnd, judgeXor;
string strx, stry;

string Binary(ll num){
    string s = "";
    while(num != 0) {
        if (num % 2) {
            s += "1";
        } else {
            s += "0";
        }
        num /= 2;
    }
    return s;
}

ll judge() {
    y = 1;
    cin >> x;
    strx = Binary(x);
    while (true) {
        stry = Binary(y);
        judgeAnd = false;
        if (strx.size() == stry.size()) {
            judgeXor = false;
            for (int i = 0; i < stry.size(); i++) {
                if ((strx[i] == stry[i]) && (strx[i] == '1')) {
                    judgeAnd = true;
                } else if (strx[i] != stry[i]) {
                    judgeXor = true;
                }
                if ((judgeAnd) && (judgeXor)) {
                    return y;
                }
            } 
        } else {
            for (int i = 0; i < min(strx.size(),stry.size()); i++) {
                if ((strx[i] == stry[i]) && (strx[i] == '1')) {
                    judgeAnd = true;
                }
                if (judgeAnd) {
                    return y;
                }
            }
        }
        if (y == 1) {
            y++;
        } else if ((y-1)%2 == 0) {
            y = ((y-1)*2);
        } else {
            y++;
        }
    }
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    cin >> t;
    while(t--) {
        cout << judge() << "\n";
    }
}
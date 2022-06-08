#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <map>
#include <string>
#include <algorithm>
#include <vector>
#define ll long long
using namespace std;

ll t,n,k, ans, temp, temp1 = 0,mx,mxindex;
string str;
bool flag, first, addtwo;

ll judge() {
    cin >> n >> k;
    cin >> str;
    ans = 0;
    while (true) {
        temp = 0;
        temp1 = 0;
        first = true;
        addtwo = false;
        mx = 0;
        mxindex = 0;
        for (int i = 0; i < n; i++) {
            if (str[i] == 'W') {
                temp1 += temp;
                if (!first) {
                    if (mx < temp1) {
                        mx = temp1;
                        mxindex = i;
                    }
                } else {
                    first = false;
                }
                temp = 0;
                if (addtwo) {
                    addtwo = false;
                    temp1 = temp;
                } else {
                    addtwo = true;
                }
            }
            temp++;
        }
        temp1 += temp;
        if (temp1 >= k) {
             return ans;
        }
        str[mxindex] = 'B';
        ans++;
        
    }
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    cin >> t;
    while (t--) {
        cout << judge() << "\n";
    }
}
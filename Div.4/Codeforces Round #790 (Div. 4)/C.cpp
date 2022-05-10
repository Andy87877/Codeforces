#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define ll long long
using namespace std;

ll judge() {
    ll ans = 0, n, m;
    string temp, temp1;
    cin >> n >> m;

    vector<string> s;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        s.push_back(temp);
    }

    ll tempnum, minnum = 999999999999999;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j) {
                tempnum = 0;
                temp = s[i];
                temp1 = s[j];
                for (int k = 0; k < m; k++) {
                    tempnum += abs(int(temp[k])-int(temp1[k]));
                }
                if (tempnum < minnum) {
                    minnum = tempnum;
                }
            }
        }
    }
    return minnum;
}

int main() {
    ll t;
    cin >> t;
    while(t--) {
        cout << judge() << endl;
    }
}
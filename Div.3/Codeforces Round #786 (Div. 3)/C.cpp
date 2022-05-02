#include <iostream>
#include <string>
#include <cmath>
#define ll long long
using namespace std;

ll judge() {
    string s, t;
    cin >> s;
    cin >> t;
    bool flagA = false, flagNotA = false;
    for (auto i: t) {
        if (i == 'a') {
            flagA = true;
        } else {
            flagNotA = true;
        }
    }

    if ((flagA) && (flagNotA)) {
        return -1;
    } else if ((flagA) && (!flagNotA)) { // only A
        return 1;
    } else {// no A
        ll ans = pow(2, s.size());
        return ans;
    }
}

int main() {
    ll timesssssss;
    cin >> timesssssss;
    while (timesssssss--) {
        cout << judge() << endl;
    }
}
/*
1 2
2 4
3 8
4 
*/
#include <iostream>
#include <vector>
#include <string>
#define ll long long
using namespace std;

ll judge() {
    string s;
    cin >> s;
    ll yes = 0, no = 0, idk = 0, len = s.size(), total = 0, max = 0;
    bool flag = true; // false = 0 true = 1
    if (len == 1) {
        return 1;
    } else if (s[0] == '0') {
        return 1;
    } else if (s[s.size() - 1] == '1') {
        return 1;
    }
    
    for (auto i: s) {
        if (i == '?') {
            idk++;
            total++;
        } else if (i == '0') {
            no++;
            if(flag) {
                total++;
            } else {
                total = 1;
            }
            flag = false;
        } else { // 1
            yes++;
            if (!flag) {
                total++;
            } else {
                total = 1;
            }
            flag = true;
        }
        if (max < total) {
            max = total;
        }
    }

    if (no+yes == 0) {
        return idk;
    } else if (yes == 0) {
        return len;
    } else if (no == 0) {
        return len;
    }
    return max;
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        cout << judge() << endl;
    }
}
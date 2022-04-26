#include <iostream>
#include <vector>
using namespace std;

string judge() {
    long long n,temp,hi;
    cin >> n;
    vector<long long> a;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        a.push_back(temp);
    }

    temp = 0;
    while(true) {
        bool flag = true;
        for (int i = 0; i < a.size(); i++) {
            if (a[i] != 1) {
                hi = int(a[i]/2);
                if (((a[i])%2) == 0) {
                    a.push_back(hi);
                    a.push_back(hi);
                } else {
                    a.push_back(hi);
                    a.push_back(hi+1);
                }   
                a[i] = 1;
                flag = false;
                temp++;
            }
        }
        if (flag) {
            if ((temp % 2) != 0) {
                return "errorgorn";
            } else {
                return "maomao90";
            }
        }
    }
    
}

signed main() {
    long long t;
    cin >> t;
    while (t--) {
        cout << judge() << endl;
    }
}
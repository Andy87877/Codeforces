#include <iostream>
#include <string>
#define int long long
using namespace std;

string judge() {
    string s;
    cin >> s;
    int a=0,b=0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'B'){
            b++;
        } else {
            a++;
        }
        if (b > a) {
            return "NO";
        }
    }
    if (s[s.size()-1] == 'A'){
        return "NO";
    }
    return "YES";
}

signed main() {
    int t;
    cin >> t;
    while (t--) {
        cout << judge() << endl;
    }
}
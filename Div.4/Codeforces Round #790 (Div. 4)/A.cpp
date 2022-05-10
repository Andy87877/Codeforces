#include <iostream>
#include <string>
#define ll long long
using namespace std;

string judge() {
    string s;
    cin >> s;
    if ((int(s[0])+int(s[1])+int(s[2])) == (int(s[3])+int(s[4])+int(s[5]))) {
        return "YES";
    } else {
        return "NO";
    }
}

int main() {
    ll t;
    cin >> t;
    while(t--) {
        cout << judge() << endl;
    }
}
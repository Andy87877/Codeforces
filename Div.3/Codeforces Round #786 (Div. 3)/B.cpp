#include <iostream>
#include <string>
#define ll long long
using namespace std;

ll judge() {
    string s;
    cin >> s;
    ll total = 0;
    total = (int(s[0]) - int('a'))*25 + (int(s[1]) - int('a'))+1;
    if (int(s[0]) <= int(s[1])) {
        total--;
    }
    return total;
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        cout << judge() << endl;
    }
}
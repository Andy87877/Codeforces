#include <iostream>
#include <string>
#define ll long long
using namespace std;

ll judge() {
    ll times, total = 0;
    cin >> times;
    string s[times];
    

    for (int i = 0; i < times; i++) {
        cin >> s[i];
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
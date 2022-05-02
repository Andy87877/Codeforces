#include <iostream>
#include <string>
#define ll long long
using namespace std;

void judge() {
    ll x, y, b;
    cin >> x >> y;
    b = y/x;
    if ((y % x) != 0) {
        cout << "0 0";
    } else {
        cout << 1 << " " << b;
    }
    cout << endl;
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        judge();
    }
}
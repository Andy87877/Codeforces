#include <iostream>
#include <vector>
#include <string>
#define ll long long
using namespace std;

string judge() {
    ll a,b,c,x,y;
    cin >> a >> b >> c >> x >> y;
    if (x > a+c) {
        return "NO";
    }

    if (x-a > 0) {
        c -= x-a;
    }

    if (y > b+c) {
        return "NO";
    }
    return "YES";
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        cout << judge() << endl;
    }
}
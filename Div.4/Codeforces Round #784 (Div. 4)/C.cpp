#include <iostream>
#define ll long long
using namespace std;

string judge() {
    ll n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    ll odd = a[0], even = a[1]; 
    for (int i = 0; i < n; i++) {
        if ((i % 2) == 0) {
            if ((a[i]%2) != (odd%2)) {
                return "NO";
            }
        } else {
            if ((a[i]%2) != (even%2)) {
                return "NO";
            }
        }
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
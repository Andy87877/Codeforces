#include <iostream>
#include <vector>
#include <string>
#define ll long long
using namespace std;

ll judge() {
    ll n, total = 0, temp;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = n-i-2; j >= 0; j--) {
            while (a[j] > a[j+1]) {
                a[j] /= 2;
                total++;
            }
            if (a[j] == a[j+1]) {
                a[j] /= 2;
                total++;
                if (a[j] == a[j+1]) {
                    return -1;
                }
            }
        }
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
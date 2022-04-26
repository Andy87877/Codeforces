#include <iostream>
#define ll long long
using namespace std;

int main() {
    ll t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        if (n <= 1399) {
            cout << "Division 4";
        } else if (n <= 1599) {
            cout << "Division 3";
        } else if (n <= 1899) {
            cout << "Division 2";
        } else {
            cout << "Division 1";
        }
        cout << endl;
    }
}
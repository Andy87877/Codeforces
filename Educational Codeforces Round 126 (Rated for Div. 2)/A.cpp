#include <iostream>
#include <vector>
#define int long long
using namespace std;
void judge() {
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    int total = 0, n1, n2, anum = a[0], bnum = b[0];
    for (int i = 1; i < n; i++) {
        n1 = abs(a[i]-anum)+abs(b[i]-bnum);
        n2 = abs(b[i]-anum)+abs(a[i]-bnum);
        if (n1 > n2) {
            total += n2;
            anum = b[i];
            bnum = a[i];
        } else {
            total += n1;
            anum = a[i];
            bnum = b[i];
        }
    }
    cout << total << endl;
}

signed main() {
    int times;
    cin >> times;
    for (int i = 0; i < times; i++) {
        judge();
    }
}
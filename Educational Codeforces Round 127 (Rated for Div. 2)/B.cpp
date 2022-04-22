#include <iostream>
#include <string>
#define int long long
using namespace std;

string judge() {
    int times;
    cin >> times;
    int l[times];
    for (int i = 0; i < times; i++) {
        cin >> l[i];
    }

    if (times <= 3) {
        return "YES";
    }

    int temp = l[1] - l[0];
    if ((l[2]-l[1]) == (temp)) {
        for (int i = 1; i < times; i++) {
            if ((l[i]-l[i-1]) != temp) {
                return "NO";
            }
        }
        return "YES";
    } else {
        int delta = l[2] - l[1] - temp, now = temp;
        for (int i = 1; i < times; i++) {
            now += delta;
            if (l[i]-l[i-1] != now) {
                return "NO";
            }
        }
        return "YES";
    }
}

signed main() {
    int t;
    cin >> t;
    while (t--) {
        cout << judge() << endl;
    }
}
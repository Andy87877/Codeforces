#include <iostream>
#include <map>
#define ll long long
using namespace std;

ll judge() {
    ll n, num;
    cin >> n;
    map<int, int> ans;
    for (int i = 0; i < n; i++) {
        cin >> num;
        if (ans.count(num) == 0) {
            ans[num] = 0;
        }
        ans[num]++;
    }
    for (auto i: ans) {
        if (i.second >= 3) {
            return i.first;
        }
    }
    return -1;
}
int main() {
    ll t;
    cin >> t;
    while (t--) {
        cout << judge() << endl;
    }
}
#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

ll solve() {
    ll l,r,x,a,b; // a->b  |a-b|≥x l≤b≤r  change >= x
    cin >> l >> r >> x;
    cin >> a >> b;
    ll now = a, ans = 1;
    if (a == b) {
        return 0;
    }

    bool flag = false;
    while (ans <= 3) {
        if (now+x <= b || now-x >= b) {
            return ans;
        }
        if (flag) {
            now = l;
            if (now+x <= b || now-x >= b) {
                return ans;
            }
        }
        flag = false;
        ans++;
        if (now+x > r) {
            if (now-x < l) {
                return -1;
            } else {
                now = l;
            }
        } else {
            if (now-x < l) {
                now = r;
            } else {
                now = r;
                flag = true;
            }
        }

        
    }
    return -1;
}

int main() {
    Andy8787_want_AC
    ll t;
    cin >> t;
    while(t--) {
        cout << solve() << "\n";
    }
}
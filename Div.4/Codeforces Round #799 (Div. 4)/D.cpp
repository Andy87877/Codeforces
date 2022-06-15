#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll solve() {
    string s, strh, strm;
    ll x, h, m, changeh, changem, nowh, nowm, ans = 0;
    cin >> s;
    cin >> x;
    
    h = (int(s[0])-int('0'))*10 + (int(s[1])-int('0'));
    m = (int(s[3])-int('0'))*10 + (int(s[4])-int('0'));
    x%=1440;
    changeh = x/60;
    changem = x%60;
    nowh = h;
    nowm = m;
    do {
        nowh += changeh;
        nowm += changem;
        if (nowm >= 60) {
            nowh += nowm/60;
            nowm %= 60;
        }

        if (nowh >= 24) {
            nowh %= 24;
        }
        
        if (nowh <= 9) {
            strh = "0";
        } else {
            strh = "";
        }
        if (nowm <= 9) {
            strm = "0";
        } else {
            strm = "";
        }
        strh += to_string(nowh);
        strm += to_string(nowm);
        if ((nowh%10) == 0) {
            strh += "0";
        }
        if ((nowm%10) == 0) {
            strm += "0";
        }


        if ((strh[0] == strm[1]) && (strh[1] == strm[0])) {
            ans++;
        }
        // cout << strh << ":" << strm << " " << ans << endl;
    } while ((nowh != h) || (nowm != m));
    return ans;
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        cout << solve() << "\n";
    }
}
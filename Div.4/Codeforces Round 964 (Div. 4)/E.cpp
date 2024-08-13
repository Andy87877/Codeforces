#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

// 找除的數量
/*
1~2 1次
3~8 2次
power(3,n) ~ power(3,n+1)-1 n+1次
*/
ll judge(){
    ll l, r, check = 1;
    cin >> l >> r;
    
    ll ans = 0;
    bool flag = false;
    ll left = l, right = l+1;
    for (ll i = 0; i < 15; i++){
        if (left <= check){
            flag = true;
            if (right <= check){
                ans = i*3;
            } else {
                ans = (i+1)*3;
            }
        }

        if (flag){ // 到底了
            break;
        }

        check *= 3;
    }


    // cout << ans << "\n";
    l += 2;
    if (l > r) return ans;


    left = l, right = r;
    check = 1;
    flag = false;

    
    for (ll i = 0; i < 15; i++){
        if (l <= check){
            left = l;
            if (l <= check/3){ //算過了
                left = check;
            }
            right = (check*3)-1;
            if (r <= check*3){ // 到底了
                right = r;
                flag = true;
            }

            if (right < left) break;
            // cout << "(" <<right << "-" << left << "+1)*" << i+1 << "\n";
            
            ans += (right-left+1)*(i+1);
            
        }

        if (flag){ // 到底了
            break;
        }

        check *= 3;
    }

    return ans;
}

int main() {
    Andy8787_want_AC
    ll t;
    cin >> t;
    while (t--){
        cout << judge() << "\n";
    }
}
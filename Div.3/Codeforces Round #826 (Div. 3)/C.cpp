#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

ll solve() {
    ll n;
    cin >> n;
    ll arr[n];
    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
    }

    ll temptotal, temp, tempans, temptempans, ans = n;
    for (ll i = 0; i < n-1; i++) {
        bool flag = true;
        temptotal = 0;
        tempans = 0;
        temp = 0;
        temptempans = 0;
        for (ll j = 0; j < i+1; j++) {
            temptotal += arr[j];
            tempans++;
        }
        // cout << temptotal << "\n";
        for (ll j = i+1; j < n; j++) {
            if (temptotal > temp) {
                temp += arr[j];
                temptempans++;
            } 
            if (temptotal < temp) {
                flag = false;
                break;
            }
            if (temptotal == temp) {
                if (temptempans > tempans) {
                    tempans = temptempans;
                }
                temp = 0;
                temptempans = 0;
            } 
            // cout << temp << " ";
        }
        // cout << tempans << "\n\n";
        if (flag) {
            if (temp != 0) flag = false;
        }
        if (flag) {
            // cout << "OKKKKKKKK\n";
            if (temptempans > tempans) {
                tempans = temptempans;
            }
            if (tempans < ans) {
                ans = tempans;
            }
        }
    }
    return ans;
}

int main() {
    Andy8787_want_AC
    ll t;
    cin >> t;
    while (t--) {
        cout << solve() << "\n";
    }
}
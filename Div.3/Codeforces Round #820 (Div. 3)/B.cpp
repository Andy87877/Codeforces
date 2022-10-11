#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

string solve() {
    string ans = "", strnum, temp = "";
    ll n;
    cin >> n;
    cin >> strnum;
    for (ll i = 0; i < n; i++) {
        if ((strnum[i] == '0' ) && (temp == "")) {
        } else {
        temp += strnum[i];
        if (n-i >= 3) {
            if (strnum[i+1] == '0') {
                if (strnum[i+2] == '0') { // 100
                    temp += strnum[i+1];
                    ans += char(stoi(temp)+96);
                    i += 2;
                    temp = "";
                } else { // 101
                    ans += char(stoi(temp)+96);
                    i++;
                    temp = "";
                }
            } else if (strnum[i+2] == '0'){
                if (strnum[i+3] == '0') {
                    ans += char(stoi(temp)+96);
                    temp = "";
                } else {
                    temp += strnum[i+1];
                    ans += char(stoi(temp)+96);
                    i+=2;
                    temp = "";
                }
            } else {
                ans += char(stoi(temp)+96);
                temp = "";
            }
        } else if (n-i == 2) {
            if (strnum[i+1] == '0') {
                if (strnum[i+2] == '0') { // 100
                    temp += strnum[i+1];
                    ans += char(stoi(temp)+96);
                    i += 2;
                    temp = "";
                } else { // 101
                    ans += char(stoi(temp)+96);
                    i++;
                    temp = "";
                }
            } else if (strnum[i+2] == '0'){
                    temp += strnum[i+1];
                    ans += char(stoi(temp)+96);
                    i+=2;
                    temp = "";
            } else {
                ans += char(stoi(temp)+96);
                temp = "";
            }
        } else if (n-i == 1) {
            if (strnum[i+1] == '0') {
                
                    ans += char(stoi(temp)+96);
                    i++;
                    temp = "";
                
            } else {
                ans += char(stoi(temp)+96);
                temp = "";
            }
        } else {
            ans += char(stoi(temp)+96);
            temp = "";
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
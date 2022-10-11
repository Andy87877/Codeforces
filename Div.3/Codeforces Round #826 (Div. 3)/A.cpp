#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

string solve() {
    string a,b;
    cin >> a >> b;
    if (a == b) return "=";
    if (a[a.size()-1] == 'S') {
        if (b[b.size()-1] == 'S') {
            if (a.size() > b.size()) {
                return "<";
            } else {
                return ">";
            }
        } else {
            return "<";
        }
    } 

    if (a[a.size()-1] == 'M'){
        if (b[b.size()-1] == 'S') {
            return ">";
        } else {
            return "<";
        }
    }

    if (b[b.size()-1] == 'L') {
        if (a.size() > b.size()) {
            return ">";
        } else {
            return "<";
        }
    } else {
        return ">";
    }
}

int main() {
    Andy8787_want_AC
    ll t;
    cin >> t;
    while (t--) {
        cout << solve() << "\n";
    }
}
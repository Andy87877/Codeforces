#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll solve() {
    ll n,s;
    cin >> n >> s;
    ll a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    ll left[n], right[n], sum;
    left[0] = a[0];
    for (int i = 1; i < n; i++) {
        left[i] = left[i-1]+a[i];
    }

    right[0] = a[n-1];
    for (int i = n-2; i >= 0; i--) {
        right[n-i-1] = right[n-i-2]+a[i];
    }
    sum = left[n-1];
    if (sum < s) {
        return -1;
    } 
    if (sum == s) {
        return 0;
    }

    ll mi = n, temp = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (s == (sum-((left[i]-left[temp])+(right[j]-right[temp])))) {
                if (mi > i+j) {
                    mi = i+j;
                }
                temp++;
                break;
            }
        }
    }
    return mi;
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        cout << solve() << "\n";
    }
}
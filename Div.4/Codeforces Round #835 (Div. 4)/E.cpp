// #include <bits/stdc++.h>
// #define ll long long
// #define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
// using namespace std;

// ll solve() {
//     ll n;
//     cin >> n;
    
//     ll a[n], b[n], c[n];
//     for (ll i = 0; i < n; i++){
//         cin >> a[i];
//         b[i] = a[i];
//         c[i] = a[i];
//     }

//     // ll ans1 = 0;
//     // for (ll i = 0; i < n; i++){
//     //     for (ll j = i+1; j < n; j++){
//     //         if (a[i] > a[j]) {
//     //             ans1++;
//     //         }
//     //     }
//     // }
    
//     for (ll i = 0; i < n; i++){
//         if (b[i] == 0) {
//             b[i] = 1;
//             break;
//         }
//     }
//     ll ans2 = 0;
//     for (ll i = 0; i < n; i++){
//         for (ll j = i+1; j < n; j++){
//             if (b[i] > b[j]) {
//                 ans2++;
//             }
//         }
//     }

//     for (ll i = n-1; i >= 0; i++){
//         if (c[i] == 1) {
//             c[i] = 0;
//             break;
//         }
//     }
//     ll ans3 = 0;
//     for (ll i = 0; i < n; i++){
//         for (ll j = i+1; j < n; j++){
//             if (c[i] > c[j]) {
//                 ans3++;
//             }
//         }
//     }
//     // cout << ans1 << " " << ans2 << " " << ans3 << endl;
//     return max(ans2,ans3);
// }

// int main() {
//     Andy8787_want_AC
//     ll t;
//     cin >> t;
//     while (t--) {
//         cout << solve() << "\n";
//     }
// }
// #include <iostream>
// #include <vector>
// #define int long long
// using namespace std;

// int test(int num, int total, int n) {
//     if (total > (32768-n)) {
//         return -1;
//     }
//     if (num == 32768) {
//         return n;
//     } else {
//         num *= 2;
//         if (num > 32768) {
//             num %= 32768;
//         }
//         return test(num, total+1, n);
//     }
    
// }
// // int judge(int num, int total) {
// //     if ((num % 32768) == 0) {
// //         return total;
// //     } else if (num < 32760) {
// //         return judge((num*2)%32768,total+1);
// //     } else {
// //         return judge((num+1)%32768,total+1);
// //     }
// // }

// signed main() {
//     vector <int> yes;
//     int n;
//     for (int i = 1; i <= 32768; i++) {
//         n = test(i,0,i);
//         if (n != -1) {
//             yes.push_back(n);
//         }
//     }
//     for (int i = 0; i < yes.size(); i++) {
//         cout << yes[i] << endl;
//     }
//     // int n;
//     // cin >> n;
//     // for (int i = 0; i < n; i++) {
//     //     int num, times = 0;
//     //     cin >> num;
//     //     times = judge(num,0);
//     //     cout << times << endl;
//     // }
// }
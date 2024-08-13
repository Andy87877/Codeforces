#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

void judge(){
    string str;
    string test;

    bool flag_end = false;

    cin >> str;
    cin >> test;

    ll last_dig = 0;
    for (int i = 0; i < test.size(); i++){
        bool flag = true;

        for (int j = last_dig; j < str.size(); j++){
            if (str[j] == '?'){
                str[j] = test[i];
            }

            if (str[j] == test[i]){
                flag = false;
                last_dig = j+1;
                break;
            }
        }

        if (flag){
            flag_end = true;
            break;
        }
    }


    if (flag_end) {
        cout << "NO\n";
        return;
    }


    for (int j = 0; j < str.size(); j++){
        if (str[j] == '?'){
            str[j] = 'a';
        }
    }

    cout << "YES\n";
    cout << str << "\n";
    return;
}

int main() {
    Andy8787_want_AC
    ll t;
    cin >> t;
    while (t--){
       judge();
    }
}
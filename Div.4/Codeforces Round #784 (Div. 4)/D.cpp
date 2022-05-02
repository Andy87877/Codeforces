#include <iostream>
#include <string>
#include <vector>
#define ll long long
using namespace std;

string judge() {
    ll times;
    string s, temp = "";
    vector<string> strjudge;
    cin >> times;
    cin >> s;
    
    for (auto i: s) {
        if ((i == 'W') && (temp != "")) {
            strjudge.push_back(temp);
            temp = "";
        } else if (i != 'W'){
            temp += i;
        }
    }

    if (temp != "") {
        strjudge.push_back(temp);
    } 

    if (strjudge.size() == 0) {
        return "YES";
    }

    for (auto str: strjudge) {
        //cout << str << endl;
        bool flagB = false, flagR = false;
        for (int j = 0; j < str.size(); j++) {
            if (str[j] == 'B') {
                flagB = true;
            } else {
                flagR = true;
            }
        }
        if (!flagB || !flagR) {
            return "NO";
        }
    }
    return "YES";
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        cout << judge() << endl;
    }
}
#include <iostream>
#include <string>
using namespace std;

string judge() {
    string s;
    cin >> s;
    if (s.size() == 1) {
        return "NO";
    } else if (s.size() == 2) {
        if (s[0] == s[1]) {
            return "YES";
        } else {
            return "NO";
        }
    }
    for (int i = 2; i < s.size(); i++) {
        if ((s[i] != s[i - 1]) && (s[i - 1] != s[i - 2])) {
            return "NO";
        }
    }
    if (s[s.size()-1] != s[s.size()-2]) {
        return "NO";
    } else if (s[0] != s[1]) {
        return "NO";
    }
    return "YES";
}
int main() {
    int times;
    cin >> times;
    while (times--) {
        cout << judge() << endl;
    }
}
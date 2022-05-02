#include <iostream>
#include <string>
#include <vector>
#define ll long long
using namespace std;

string judge() {
    ll times, temp;
    cin >> times;
    vector<ll> a;
    vector<ll> b;
    vector<ll> c;


    for (ll i = 0; i < times; i++) {
        cin >> temp;
        a.push_back(temp);
    }

    for (ll i = times-1; i >= 0; i--) {
        temp = a[i];
        b.insert(b.begin() + b.size()/2, temp);
    }

    for (ll i = 0; i < times; i++) {
        cout << b[i] << " ";
    }
    return "YES";
}

int main() {
    ll timessssssssssssssssssssssssssssssssssss;
    cin >> timessssssssssssssssssssssssssssssssssss;
    while (timessssssssssssssssssssssssssssssssssss--) {
        cout << judge() << endl;
    }
}
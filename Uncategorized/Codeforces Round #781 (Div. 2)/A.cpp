#include <iostream>
#include <cmath>
using namespace std;

int gcd(int x, int y) {
    if(y==0)
        return x;
    return gcd(y, x%y);
}

int lcm(int x, int y) {
    return abs(x*y)/gcd(x,y);
}

int judge() {
    int a,b,c,d,n; //(a,b) (c,d)
    cin >> n;
    for (a = 1; a < n; a++) {
        for (b = 1; b < n-a; b++) {
            for (c = 1; c < n-b; c++) {
                d = n-a-b-c;
                if ((gcd(c,d)) == (lcm(a,b))) {
                    cout << c << " " << d << " " << a << " " << b << endl;
                    return a;
                }
            }
            
        }
    }
}

int main() {
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++) {
        n = judge();
    }
}
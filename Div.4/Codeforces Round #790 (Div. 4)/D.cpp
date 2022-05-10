#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

ll judge() {
    ll n, m;
    cin >> n >> m;
    ll array[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> array[i][j];
        }
    }

    ll temp, tempX, tempY, max = -1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            temp = array[i][j];
            tempX = i;
            tempY = j;
            //左上
            while ((tempX > 0) && (tempY > 0)) {
                tempX--;
                tempY--;
                temp += array[tempX][tempY];
            }   
            tempX = i;
            tempY = j;
            //左下
            while ((tempX < n-1) && (tempY > 0)) {
                tempX++;
                tempY--;
                temp += array[tempX][tempY];
            }   
            tempX = i;
            tempY = j;
            //右上
            while ((tempX > 0) && (tempY < m-1)) {
                tempX--;
                tempY++;
                temp += array[tempX][tempY];
            }   
            tempX = i;
            tempY = j;
            //右下
            while ((tempX < n-1) && (tempY < m-1)) {
                tempX++;
                tempY++;
                temp += array[tempX][tempY];
            }   
            if (temp > max) {
                max = temp;
            }
        }
    }
    return max;
}

int main() {
    ll t;
    cin >> t;
    while(t--) {
        cout << judge() << endl;
    }
}
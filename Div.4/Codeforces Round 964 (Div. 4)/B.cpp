#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;

        int suneetWins = 0;


        int suneetRounds = 0, slavicRounds = 0;
        if (a1 > b1) suneetRounds++;
        if (a2 > b2) suneetRounds++;
        if (a1 < b1) slavicRounds++;
        if (a2 < b2) slavicRounds++;
        if (suneetRounds > slavicRounds) suneetWins++;

        suneetRounds = 0, slavicRounds = 0;
        if (a1 > b2) suneetRounds++;
        if (a2 > b1) suneetRounds++;
        if (a1 < b2) slavicRounds++;
        if (a2 < b1) slavicRounds++;
        if (suneetRounds > slavicRounds) suneetWins++;

        suneetRounds = 0, slavicRounds = 0;
        if (a2 > b1) suneetRounds++;
        if (a1 > b2) suneetRounds++;
        if (a2 < b1) slavicRounds++;
        if (a1 < b2) slavicRounds++;
        if (suneetRounds > slavicRounds) suneetWins++;

        suneetRounds = 0, slavicRounds = 0;
        if (a2 > b2) suneetRounds++;
        if (a1 > b1) suneetRounds++;
        if (a2 < b2) slavicRounds++;
        if (a1 < b1) slavicRounds++;
        if (suneetRounds > slavicRounds) suneetWins++;

        cout << suneetWins << endl;
    }

    return 0;
}

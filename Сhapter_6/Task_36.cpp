#include <iostream>
using namespace std;

int main() {
    int n, a, x, y;
    cin >> n >> a >> x >> y;

    int countA = 0;
    int sumGreaterA = 0;
    int sumEven = 0;
    int countXY = 0;

    int temp = n;
    while (temp > 0) {
        int digit = temp % 10;

        if (digit == a) countA++;
        if (digit > a) sumGreaterA += digit;
        if (digit % 2 == 0) sumEven += digit;
        if (digit == x || digit == y) countXY++;

        temp /= 10;
    }

    cout << "a) " << countA << endl;
    cout << "б) " << sumGreaterA << endl;
    cout << "в) " << sumEven << endl;
    cout << "г) " << countXY << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count3 = 0;
    int lastDigit = n % 10;
    int countLast = 0;
    int countEven = 0;
    int sumGreater5 = 0;
    int productGreater7 = 1;
    int count05 = 0;

    int temp = n;
    while (temp > 0) {
        int digit = temp % 10;

        if (digit == 3) count3++;
        if (digit == lastDigit) countLast++;
        if (digit % 2 == 0) countEven++;
        if (digit > 5) sumGreater5 += digit;
        if (digit > 7) productGreater7 *= digit;
        if (digit == 0 || digit == 5) count05++;

        temp /= 10;
    }

    cout << "a) " << count3 << endl;
    cout << "б) " << countLast << endl;
    cout << "в) " << countEven << endl;
    cout << "г) " << sumGreater5 << endl;
    cout << "д) " << productGreater7 << endl;
    cout << "е) " << count05 << endl;

    return 0;
}
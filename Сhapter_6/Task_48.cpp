#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int maxOdd = -1;
    int minDigit = 10;
    int minPos = 0;
    int position = 1;

    while (n > 0) {
        int digit = n % 10;

        if (digit % 2 == 1 && digit > maxOdd) {
            maxOdd = digit;
        }

        if (digit < minDigit) {
            minDigit = digit;
            minPos = position;
        }

        position++;
        n /= 10;
    }

    if (maxOdd == -1) {
        cout << "а) Нет нечетных цифр" << endl;
    }
    else {
        cout << "а) " << maxOdd << endl;
    }

    cout << "б) " << minPos << endl;

    return 0;
}
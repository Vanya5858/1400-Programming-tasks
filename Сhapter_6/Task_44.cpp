#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int maxDigit = 0;
    int minDigit = 9;

    while (n > 0) {
        int digit = n % 10;
        if (digit > maxDigit) maxDigit = digit;
        if (digit < minDigit) minDigit = digit;
        n /= 10;
    }

    int diff = maxDigit - minDigit;
    if (diff % 2 == 0) {
        cout << "Да" << endl;
    }
    else {
        cout << "Нет" << endl;
    }

    return 0;
}
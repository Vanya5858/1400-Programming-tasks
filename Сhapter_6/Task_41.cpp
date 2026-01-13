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

    cout << "а) " << maxDigit << endl;
    cout << "б) " << minDigit << endl;

    return 0;
}
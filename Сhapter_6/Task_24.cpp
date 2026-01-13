#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum1 = 0, sum2 = 0;
    int sign = 1;
    int position = 0;

    while (n > 0) {
        int digit = n % 10;

        if (position % 2 == 0) {
            sum1 += digit;
            sum2 += digit * sign;
        }
        else {
            sum1 -= digit;
            sum2 -= digit * sign;
        }

        sign = -sign;
        position++;
        n /= 10;
    }

    cout << sum1 << endl;
    cout << sum2 << endl;
    return 0;
}
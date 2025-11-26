#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int sign = -1; // начинаем с минуса

    for (int i = 1; i <= 10; i++) {
        sign = -sign; // меняем знак
        sum += sign * i * i;
    }

    cout << "-1^2 + 2^2 - 3^2 + ... + 10^2 = " << sum << endl;

    return 0;
}
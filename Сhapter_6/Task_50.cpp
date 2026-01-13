#include <iostream>
using namespace std;

int main() {
    int n, a, b, k, m;
    cin >> n >> a >> b >> k >> m;

    int sum = 0, product = 1, count = 0;
    int firstDigit = 0;

    int temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        sum += digit;
        product *= digit;
        count++;

        if (temp < 10) {
            firstDigit = digit;
        }

        temp /= 10;
    }

    // а) сумма цифр меньше a
    if (sum < a) cout << "Да" << endl;
    else cout << "Нет" << endl;

    // б) произведение цифр больше b
    if (product > b) cout << "Да" << endl;
    else cout << "Нет" << endl;

    // в) число k-значное
    int lower = 1;
    for (int i = 1; i < k; i++) {
        lower *= 10;
    }
    int upper = lower * 10 - 1;

    if (n >= lower && n <= upper) cout << "Да" << endl;
    else cout << "Нет" << endl;

    // г) первая цифра превышает m
    if (firstDigit > m) cout << "Да" << endl;
    else cout << "Нет" << endl;

    return 0;
}
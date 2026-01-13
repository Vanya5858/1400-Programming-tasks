#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int n, a;
    cout << "Введите натуральное число n: ";
    cin >> n;
    cout << "Введите цифру a для удаления: ";
    cin >> a;

    int reversed = 0;
    int temp = n;
    while (temp > 0) {
        reversed = reversed * 10 + (temp % 10);
        temp /= 10;
    }
    cout << "а) Число наоборот: " << reversed << endl;

    int withTwos = 2;
    temp = n;
    while (temp > 0) {
        withTwos = withTwos * 10 + (temp % 10);
        temp /= 10;
    }
    withTwos = withTwos * 10 + 2;

    int result = 0;
    temp = withTwos;
    while (temp > 0) {
        result = result * 10 + (temp % 10);
        temp /= 10;
    }
    cout << "б) С двойками в начале и конце: " << result << endl;

    int withoutA = 0;
    int multiplier = 1;
    temp = n;

    while (temp > 0) {
        int digit = temp % 10;
        if (digit != a) {
            withoutA = withoutA + digit * multiplier;
            multiplier *= 10;
        }
        temp /= 10;
    }
    cout << "в) Без цифр " << a << ": " << withoutA << endl;

    if (n < 10) {
        cout << "г) Число осталось тем же: " << n << endl;
    }
    else {
        int lastDigit = n % 10;
        int firstDigit = n;
        int digitsCount = 0;

        while (firstDigit >= 10) {
            firstDigit /= 10;
            digitsCount++;
        }

        int middle = n % (int)pow(10, digitsCount);
        middle /= 10;

        int swapped = lastDigit * pow(10, digitsCount) + middle * 10 + firstDigit;
        cout << "г) С переставленными первой и последней цифрами: " << swapped << endl;
    }

    int doubled = n;
    temp = n;
    int digits = 0;

    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    doubled = n * pow(10, digits) + n;
    cout << "д) Удвоенное число: " << doubled << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите натуральное число (все цифры различны): ";
    cin >> n;

    int max1 = -1, max2 = -1;
    int min1 = 10, min2 = 10;
    int temp = n;

    while (temp > 0) {
        int digit = temp % 10;

        // Находим две максимальные цифры
        if (digit > max1) {
            max2 = max1;
            max1 = digit;
        }
        else if (digit > max2 && digit < max1) {
            max2 = digit;
        }

        // Находим две минимальные цифры
        if (digit < min1) {
            min2 = min1;
            min1 = digit;
        }
        else if (digit < min2 && digit > min1) {
            min2 = digit;
        }

        temp /= 10;
    }

    cout << "а) Две максимальные цифры: " << max1 << " и " << max2 << endl;
    cout << "б) Две минимальные цифры: " << min1 << " и " << min2 << endl;

    return 0;
}
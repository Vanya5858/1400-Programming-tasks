#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int n;
    cout << "Введите натуральное число: ";
    cin >> n;

    int lastDigit = n % 10;
    int temp = n;
    bool allSame = true;
    bool hasTwoSame = false;

    while (temp > 0) {
        int digit = temp % 10;

        if (digit != lastDigit) {
            allSame = false;
        }

        if (temp > 9) {
            int nextDigit = (temp / 10) % 10;
            if (digit == nextDigit) {
                hasTwoSame = true;
            }
        }

        temp /= 10;
    }

    cout << "а) Все цифры одинаковые: " << (allSame ? "Да" : "Нет") << endl;
    cout << "б) Есть две одинаковые цифры подряд: " << (hasTwoSame ? "Да" : "Нет") << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n, a, b, k;

    cout << "Введите число n: ";
    cin >> n;
    cout << "Введите цифры a, b и число k: ";
    cin >> a >> b >> k;

    bool hasA = false, hasB = false;
    int countA = 0;
    int temp = n;

    while (temp > 0) {
        int digit = temp % 10;
        if (digit == a) {
            hasA = true;
            countA++;
        }
        if (digit == b) hasB = true;
        temp /= 10;
    }

    cout << "а) Есть ли цифра " << a << ": " << (hasA ? "Да" : "Нет") << endl;
    cout << "б) Нет ли цифры " << b << ": " << (!hasB ? "Да" : "Нет") << endl;
    cout << "в) Цифра " << a << " встречается более " << k << " раз: "
        << (countA > k ? "Да" : "Нет") << endl;
    cout << "г) Есть ли цифры " << a << " и " << b << ": "
        << (hasA && hasB ? "Да" : "Нет") << endl;

    return 0;
}
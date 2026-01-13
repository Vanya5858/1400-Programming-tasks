#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n, a, b;

    cout << "Введите число n: ";
    cin >> n;
    cout << "Введите цифры a и b для сравнения: ";
    cin >> a >> b;

    int countA = 0, countB = 0;
    int temp = n;

    while (temp > 0) {
        int digit = temp % 10;
        if (digit == a) countA++;
        if (digit == b) countB++;
        temp /= 10;
    }

    cout << "Цифра " << a << " встречается " << countA << " раз" << endl;
    cout << "Цифра " << b << " встречается " << countB << " раз" << endl;
    cout << "Цифра " << a << " встречается реже, чем " << b << ": ";

    if (countA < countB) {
        cout << "Да" << endl;
    }
    else {
        cout << "Нет" << endl;
    }

    return 0;
}
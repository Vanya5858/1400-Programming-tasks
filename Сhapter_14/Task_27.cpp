#include <iostream>
using namespace std;

int countDigits(int num) {
    if (num == 0) return 1;

    num = abs(num);  // Работаем с положительными числами
    int count = 0;

    while (num > 0) {
        count++;
        num /= 10;
    }

    return count;
}

int main() {
    setlocale(LC_ALL, "RU");

    int a, b;

    cout << "Введите два натуральных числа:" << endl;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;

    int countA = countDigits(a);
    int countB = countDigits(b);

    cout << "\nРезультат:" << endl;
    cout << "Количество цифр в числе " << a << " = " << countA << endl;
    cout << "Количество цифр в числе " << b << " = " << countB << endl;

    if (countA > countB) {
        cout << "Больше цифр в числе " << a << endl;
    }
    else if (countB > countA) {
        cout << "Больше цифр в числе " << b << endl;
    }
    else {
        cout << "Количество цифр одинаково" << endl;
    }

    return 0;
}
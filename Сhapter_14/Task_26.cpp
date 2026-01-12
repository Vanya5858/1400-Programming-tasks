#include <iostream>
using namespace std;

int sumOfDigits(int num) {
    num = abs(num);  // Работаем с положительными числами
    int sum = 0;

    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }

    return sum;
}

int main() {
    setlocale(LC_ALL, "RU");

    int a, b;

    cout << "Введите два натуральных числа:" << endl;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;

    int sumA = sumOfDigits(a);
    int sumB = sumOfDigits(b);

    cout << "\nРезультат:" << endl;
    cout << "Сумма цифр числа " << a << " = " << sumA << endl;
    cout << "Сумма цифр числа " << b << " = " << sumB << endl;

    if (sumA > sumB) {
        cout << "Сумма цифр больше в числе " << a << endl;
    }
    else if (sumB > sumA) {
        cout << "Сумма цифр больше в числе " << b << endl;
    }
    else {
        cout << "Суммы цифр равны" << endl;
    }

    return 0;
}
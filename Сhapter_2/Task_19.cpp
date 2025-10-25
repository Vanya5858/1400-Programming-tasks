#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    double a, x, b, y;

    cout << "\t\tПрограмма для вычисления функций\n";

    //Первая функция x
    cout << "Решение 1 функции x\n";
    cout << "Введите значение a и b через пробел: ";
    cin >> a >> b;

    //Условия
    if ( b <= 0) {
        cout << "Ошибка. Под корнем должно быть не отрицательлное число.\n\n";
    }
    else {
        x = ((2 / (pow(a, 2) + 25)) + b) / (sqrt(b) + ((a + b) / 2));
        cout << "Ответ: x = " << x << "\n\n";
    }

    //Вторая функция y
    cout << "Решение 2 функции y\n";
    cout << "Введите значение a и b через пробел: ";
    cin >> a >> b;

    //Решение функции
    if (a == 0) {
        cout << "Ошибка. Нельзя делить на 0.\n\n";
    }
    else {
        y = (fabs(a) + 2 * sin(b)) / (5.5 * a);
        cout << "Ответ: y = " << y << "\n\n";
    }
    return 0;
}
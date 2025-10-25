#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    double z, x, y, q;

    cout << "\t\tПрограмма для вычисления функций\n";

    //Первая функция Z
    cout << "Решение 1 функции z\n";
    cout << "Введите значение x и y через пробел: ";
    cin >> x >> y;
    
    //Условия
    if ( pow(x, 2) == 0) {
        cout << "Ошибка. Делить на ноль нельзя.\n\n";
    }
    else{
        z = (x + (2 + y) / pow(x, 2)) / (y + (1 / (sqrt(pow(x, 2) + 10))));
        cout << "Ответ: z = " << z << "\n\n";
    }

    //Вторая функция q
    cout << "Решение 2 функции q\n";
    cout << "Введите значение x и y через пробел: ";
    cin >> x >> y;

    //Решение функции
    q = 7.25 * sin(x) - fabs(y);
    cout << "Ответ: q = " << q << "\n\n";
    return 0;
}
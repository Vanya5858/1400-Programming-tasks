#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    double e, f, g, h, a, b, c;

    cout << "\t\tПрограмма для вычисления функций\n";

    //Ввод данных пользователя
    cout << "Введите значения для вычисления функций:\ne = ";
    cin >> e;
    cout << "f = ";
    cin >> f;
    cout << "g = ";
    cin >> g;
    cout << "h = ";
    cin >> h;
    
    //Первая функция a
    cout << "\nРешение 1 функции a\n";

    //Условия
    if ((pow(e - (3 / f), 3) + g) <= 0) {
        cout << "Ошибка. Под корнем должно быть неотрицательное число.\n\n";
    }
    else if (f == 0) {
        cout << "Ошибка. Делить на ноль нельзя.\n\n";
    }
    else {
        a = sqrt((pow(e - (3 / f), 3) + g));
        cout << "Ответ: a = " << a << "\n\n";
    }

    //Вторая функция b
    cout << "Решение 2 функции b\n";

    //Решение функции
    b = sin(e) + pow(cos(h), 2);
    cout << "Ответ: b = " << b << "\n\n";
    
    //Третья функция c
    cout << "Решение 3 функции с\n";

    //Условия
    if (((e * f) - 3) == 0) {
        cout << "Ошибка. Делить на ноль нельзя.\n\n";
    }
    else {
        c = (33 * g) / ((e * f) - 3);
        cout << "Ответ: c = " << c << "\n\n";
    }
    return 0;
}
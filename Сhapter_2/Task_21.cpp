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

    //Решение функции
    a = (e + (f / 2)) / 3;
    cout << "Ответ: a = " << a << "\n\n";

    //Вторая функция b
    cout << "Решение 2 функции b\n";

    //Решение функции
    b = fabs(pow(h, 2) - g);
    cout << "Ответ: b = " << b << "\n\n";

    //Третья функция c
    cout << "Решение 3 функции с\n";

    //Условия
    if (pow((g - h), 2) - (3 * sin(e)) <= 0) {
        cout << "Ошибка. Под корнем должно быть неотрицательное число.\n\n";
    }
    else {
        c = sqrt(pow((g - h), 2) - (3 * sin(e)));
        cout << "Ответ: c = " << c << "\n\n";
    }
    return 0;
}
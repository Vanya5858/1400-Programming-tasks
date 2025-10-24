#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    double x, y, result_1, a, b, result_2;
    //Решение первой функции
    cout << "а) Вычислить значения функции z = 2x^3 - 3.44xy + 2.3x^2 - 7.1y + 2\n";
    cout << "Введите значения для х и у через пробел: ";
    cin >> x >> y;
    result_1 = (2 * x * x * x) - (3.44 * x * y) + (2.3 * x * x) - (7.1 * y) + 2;
    cout << "Ответ: " << result_1 << "\n\n";

    //Решение второй функции
    cout << "б) Вычислить значение функции x = 3.14(a + b)^3 + 2.75b^2 - 12.7a - 4.1\n";
    cout << "Введите значения для a и b через пробел: ";
    cin >> a >> b;
    result_2 = (3.14 * pow((a + b), 3) + (2.75 * pow(b, 2)) - 12.7 * a - 4.1);
    cout << "Ответ: " << result_2 << "\n\n";
    return 0;
}
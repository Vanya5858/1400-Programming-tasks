#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    int a;
    double res;
    cout << "Программа для вычисления функции\n\n" << "a) y = a^2 + 10/(sqrt(a^2 + 1))\n" << "Введите значени a: ";
    cin >> a;
    if (sqrt(a * a + 1) < 0) {
        cout << "Ошибка. Корень и знаменатель не могут быть отрицательными числами.";
    }
    else {
        res = (a * a + 10) / (sqrt(a * a + 1));
        cout << "Ответ: " << res;
    }
    return 0;
}
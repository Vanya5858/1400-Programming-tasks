#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    int x, a, res_1, res_2;
    cout << "Программа для вычисления функций\n\n" << "a) y = 17x^2 - 6x + 13\n" << "Введите значени х: ";
    cin >> x;
    res_1 = 17 * x * x - 6 * x + 13;
    cout << "Ответ: " << res_1;
    cout << "\n\nб) y = 3a^2 + 5a - 21\n" << "Введите значени a: ";
    cin >> a;
    res_2 = 3 * a * a + 5 * a - 21;
    cout << "Ответ: " << res_2;
    return 0;
}
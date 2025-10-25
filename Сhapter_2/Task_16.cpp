#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    double a, b, c, P;
    cout << "\t\t\tНахождение Периметра прямоугольного треугольника через катеты\n";
    cout << "Введите 1 катет(a): ";
    cin >> a;
    cout << "Введите 2 катет(b): ";
    cin >> b;

    // Проверка катетов на отрицание
    if ((a < 0) or (b < 0)) {
        cout << "\nВы ввели отрицательное значение.\n";
        return 1;
    }
    else {
        c = sqrt(pow(a, 2) + pow(b, 2));
    }
    P = a + b + c;
    cout << "\nОтвет: Периметр P = " << P << "\n";
    return 0;
}
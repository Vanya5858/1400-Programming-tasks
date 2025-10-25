#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double a, b;
    cout << "\t\t\tРешение линейного уравнения ax + b = 0" << endl;
    cout << "Введите коэффициент a (a != 0): ";
    cin >> a;

    // Проверка, что a не равно 0
    if (a == 0) {
        cout << "Ошибка: коэффициент (a) не может быть равен 0!" << endl;
        cout << "Это не линейное уравнение." << endl;
        return 1;
    }

    cout << "Введите коэффициент b: ";
    cin >> b;

    double x = -b / a;

    cout << "Решение уравнения:" << endl;
    cout << a << "x + " << b << " = 0" << endl;
    cout << "x = " << x << endl;

    return 0;
}
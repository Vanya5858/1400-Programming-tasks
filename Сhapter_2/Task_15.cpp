#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double R, r;
    const double PI = 3.141592;

    cout << "\t\tВычисление площади кольца" << "\n";
    cout << "Введите внешний радиус R: ";
    cin >> R;
    cout << "Введите внутренний радиус r: ";
    cin >> r;

    // Проверка корректности данных
    if (R <= 0 || r <= 0) {
        cout << "Ошибка: радиусы должны быть положительными!" << "\n";
        return 1;
    }

    if (r >= R) {
        cout << "Ошибка: внешний радиус должен быть больше внутреннего!" << "\n";
        return 1;
    }

    double S = PI * (R * R - r * r);

    cout << "\nРезультат:" << "\n";
    cout << "Внешний радиус R = " << R << "\n";
    cout << "Внутренний радиус r = " << r << "\n";
    cout << "Площадь кольца S = Pi * (R^2 - r^2) = " << S << "\n";
    return 0;
}
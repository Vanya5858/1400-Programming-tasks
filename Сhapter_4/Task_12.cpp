#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double radius, side;
    const double PI = 3.14159265358979323846;

    cout << "Введите радиус круга: ";
    cin >> radius;
    cout << "Введите сторону квадрата: ";
    cin >> side;

    // Проверка на неотрицательность
    if (radius < 0 || side < 0) {
        cout << "Ошибка! Радиус и сторона не могут быть отрицательными.\n";
        return 1;
    }

    // Вычисляем площади
    double circle_area = PI * radius * radius;
    double square_area = side * side;

    // Сравниваем площади
    cout << "\nРезультаты:\n";
    cout << "Площадь круга: " << circle_area << endl;
    cout << "Площадь квадрата: " << square_area << endl;
    cout << endl;

    if (circle_area > square_area) {
        cout << "Площадь круга БОЛЬШЕ площади квадрата\n";
    }
    else if (square_area > circle_area) {
        cout << "Площадь квадрата БОЛЬШЕ площади круга\n";
    }
    else {
        cout << "Площади РАВНЫ\n";
    }

    return 0;
}
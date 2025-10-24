#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const double EARTH_RADIUS = 6350.0; // радиус Земли в км
    double height;

    cout << "\t\t\tРасчет расстояния до линии горизонта\n";
    cout << "Радиус Земли: " << EARTH_RADIUS << " км\n\n";

    // Ввод высоты
    cout << "Введите высоту над Землей (в км): ";
    cin >> height;

    // Проверка корректности ввода
    if (height < 0) {
        cout << "Ошибка: высота не может быть отрицательной!\n";
        return 1;
    }

    // Вычисление расстояния до горизонта
    double distance = sqrt((2 * EARTH_RADIUS * height) + (height * height));

    // Вывод результатов
    cout << fixed << setprecision(3) << "\n";
    cout << "РЕЗУЛЬТАТЫ:\n";
    cout << "Высота над Землей: " << height << " км\n";
    cout << "Расстояние до горизонта: " << distance << " км\n";
    return 0;
}
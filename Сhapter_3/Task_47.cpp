#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int h, m, s;

    cout << "Введите время (часы, минуты, секунды - через пробел): ";
    cin >> h >> m >> s;

    // Проверка корректности ввода
    if (h <= 0 || h > 23 || m < 0 || m > 59 || s < 0 || s > 59) {
        cout << "Ошибка! Часы: 1-23, Минуты: 0-59, Секунды: 0-59\n";
        return 1;
    }

    // Вычисляем общее время в часах
    double total_hours = h + m / 60.0 + s / 3600.0;

    // Вычисляем угол (12 часов = 360°, 1 час = 30°)
    double angle = total_hours * 30.0;

    // Нормализуем угол в диапазон [0, 360)
    angle = fmod(angle, 360.0);

    cout << "Время: " << h << ":" << m << ":" << s << endl;
    cout << "Общее время в часах: " << fixed << setprecision(6) << total_hours << " ч\n";
    cout << "Угол часовой стрелки: " << fixed << setprecision(2) << angle << " градусов\n";

    return 0;
}
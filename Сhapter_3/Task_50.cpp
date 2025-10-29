#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int h, m;

    cout << "Введите время (часы, минуты через пробел): ";
    cin >> h >> m;

    // Проверка корректности ввода
    if (h <= 0 || h > 12 || m < 0 || m > 59) {
        cout << "Ошибка! Часы: 1-12, Минуты: 0-59\n\n";
        return 1;
    }

    // Начальные углы в градусах
    double minute_angle = 6 * m;                    // 6° за минуту
    double hour_angle = 30 * h + 0.5 * m;          // 30° за час + 0.5° за минуту

    // Разность углов (нормализованная)
    double diff = fabs(hour_angle - minute_angle);
    diff = min(diff, 360 - diff);

    // а) Время до совпадения стрелок
    double t_coincide;
    if (hour_angle >= minute_angle) {
        t_coincide = (360 - (hour_angle - minute_angle)) / 5.5;
    }
    else {
        t_coincide = (minute_angle - hour_angle) / 5.5;
    }

    // б) Время до перпендикулярного положения
    double t_perp1 = (90 - diff) / 5.5;
    double t_perp2 = (90 + diff) / 5.5;

    // Выбираем наименьшее положительное время
    double t_perp = min(t_perp1, t_perp2);
    if (t_perp < 0) t_perp = max(t_perp1, t_perp2);

    cout << "Время: " << h << ":" << (m < 10 ? "0" : "") << m << endl;
    cout << "а) До совпадения стрелок: " << static_cast<int>(t_coincide + 0.5) << " минут\n";
    cout << "б) До перпендикулярного положения: " << static_cast<int>(t_perp + 0.5) << " минут\n";

    return 0;
}
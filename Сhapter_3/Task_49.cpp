#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const double PI = 3.14159265358979323846;
    double y, m, hours_all, gradus_minutes, gradus_second, gradus_all, minutes_all;
    int hours, minutes, second;
    cout << "Введите значение (0 < y <= 2п): ";
    cin >> y;

    if (y <= 0 || y > 2 * PI) {
        cout << "Ошибка. Не входит в радиус по PI\n\n";
        return 1;
    }
    hours_all = y / (PI / 6);
    hours = y / (PI / 6);

    minutes_all = (hours_all - hours) * 60;
    minutes = (hours_all - hours) * 60;

    second = (minutes_all - minutes) * 60;

    gradus_minutes = minutes * 6; // за 1 минуту проходит 6 градусов
    gradus_second = (second * 3.6) / 200.0;
    gradus_all = gradus_minutes + fmod(gradus_second, 1.0);

    cout << "Градус минутной стрелки от луча составляет: " << gradus_all << " градусов" << endl;
    cout << "C начала суток прошло: " << hours << " часов; " << minutes << " минут; " << second << " секунд.\n\n";
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double kmh, ms;
    const double KMH_TO_MS = 1000.0 / 3600.0;  // 5/18 = 0.27778
    const double MS_TO_KMH = 3600.0 / 1000.0;  // 3.6

    cout << "Введите скорость в км/ч: ";
    cin >> kmh;
    cout << "Введите скорость в м/с: ";
    cin >> ms;

    // Проверка на неотрицательность
    if (kmh < 0 || ms < 0) {
        cout << "Ошибка! Скорости не могут быть отрицательными.\n";
        return 1;
    }

    // Переводим обе скорости в м/с
    double speed_kmh_ms = kmh * KMH_TO_MS;
    double speed_ms_ms = ms;

    // Сравниваем скорости
    cout << "\nРезультаты сравнения:\n";
    cout << kmh << " км/ч = " << speed_kmh_ms << " м/с\n";
    cout << ms << " м/с = " << ms << " м/с\n\n";

    if (speed_kmh_ms > speed_ms_ms) {
        cout << "Скорость в км/ч БОЛЬШЕ, чем в м/с\n";
    }
    else if (speed_ms_ms > speed_kmh_ms) {
        cout << "Скорость в м/с БОЛЬШЕ, чем в км/ч\n";
    }
    else {
        cout << "Скорости РАВНЫ\n";
    }

    return 0;
}
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int CARS = 25;
    double distance[CARS]; // путь в км
    double time[CARS];     // время в часах

    cout << "Введите данные о " << CARS << " автомобилях:\n";
    for (int i = 0; i < CARS; i++) {
        cout << "Автомобиль " << i + 1 << ":\n";
        cout << "  Путь (км): ";
        cin >> distance[i];
        cout << "  Время (часы): ";
        cin >> time[i];
    }

    // Способ 1: Без дополнительного массива
    cout << fixed << setprecision(2);
    cout << "\nСпособ 1 (без доп. массива):\n";

    double minSpeed1 = distance[0] / time[0];
    int minIndex1 = 0;

    for (int i = 1; i < CARS; i++) {
        double speed = distance[i] / time[i];
        if (speed < minSpeed1) {
            minSpeed1 = speed;
            minIndex1 = i;
        }
    }

    cout << "Минимальная скорость: " << minSpeed1 << " км/ч\n";
    cout << "Автомобиль " << minIndex1 + 1 << ": путь=" << distance[minIndex1]
        << " км, время=" << time[minIndex1] << " ч\n";

    // Способ 2: С дополнительным массивом
    cout << "\nСпособ 2 (с доп. массивом):\n";

    double speedArray[CARS];

    for (int i = 0; i < CARS; i++) {
        speedArray[i] = distance[i] / time[i];
    }

    double minSpeed2 = speedArray[0];
    int minIndex2 = 0;

    for (int i = 1; i < CARS; i++) {
        if (speedArray[i] < minSpeed2) {
            minSpeed2 = speedArray[i];
            minIndex2 = i;
        }
    }

    cout << "Минимальная скорость: " << minSpeed2 << " км/ч\n";
    cout << "Автомобиль " << minIndex2 + 1 << ": путь=" << distance[minIndex2]
        << " км, время=" << time[minIndex2] << " ч\n";

    return 0;
}
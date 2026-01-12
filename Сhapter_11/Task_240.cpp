#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int ITEMS = 20;
    double mass[ITEMS];   // масса в кг
    double volume[ITEMS]; // объем в см³

    cout << "Введите данные о " << ITEMS << " предметах:\n";
    for (int i = 0; i < ITEMS; i++) {
        cout << "Предмет " << i + 1 << ":\n";
        cout << "  Масса (кг): ";
        cin >> mass[i];
        cout << "  Объем (см^3): ";
        cin >> volume[i];
    }

    // Способ 1: Без дополнительного массива
    cout << fixed << setprecision(3);
    cout << "\nСпособ 1 (без доп. массива):\n";

    double maxDensity1 = 0;
    int maxIndex1 = 0;

    for (int i = 0; i < ITEMS; i++) {
        double density = mass[i] * 1000 / volume[i]; // г/см³
        if (density > maxDensity1) {
            maxDensity1 = density;
            maxIndex1 = i;
        }
    }

    cout << "Максимальная плотность: " << maxDensity1 << " г/см^3\n";
    cout << "Предмет " << maxIndex1 + 1 << ": масса=" << mass[maxIndex1]
        << " кг, объем=" << volume[maxIndex1] << " см^3\n";

    // Способ 2: С дополнительным массивом
    cout << "\nСпособ 2 (с доп. массивом):\n";

    double densityArray[ITEMS];

    for (int i = 0; i < ITEMS; i++) {
        densityArray[i] = mass[i] * 1000 / volume[i]; // г/см³
    }

    double maxDensity2 = densityArray[0];
    int maxIndex2 = 0;

    for (int i = 1; i < ITEMS; i++) {
        if (densityArray[i] > maxDensity2) {
            maxDensity2 = densityArray[i];
            maxIndex2 = i;
        }
    }

    cout << "Максимальная плотность: " << maxDensity2 << " г/см^3\n";
    cout << "Предмет " << maxIndex2 + 1 << ": масса=" << mass[maxIndex2]
        << " кг, объем=" << volume[maxIndex2] << " см³\n";

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int JAN_DAYS = 31;
    const int MAR_DAYS = 31;

    double january[JAN_DAYS];
    double march[MAR_DAYS];

    cout << "Осадки за январь (31 день):\n";
    for (int i = 0; i < JAN_DAYS; i++) {
        cout << "Январь, день " << i + 1 << ": ";
        cin >> january[i];
    }

    cout << "\nОсадки за март (31 день):\n";
    for (int i = 0; i < MAR_DAYS; i++) {
        cout << "Март, день " << i + 1 << ": ";
        cin >> march[i];
    }

    double totalJan = 0, totalMar = 0;

    for (int i = 0; i < JAN_DAYS; i++) {
        totalJan += january[i];
    }

    for (int i = 0; i < MAR_DAYS; i++) {
        totalMar += march[i];
    }

    cout << "\nРезультат:\n";
    cout << "Январь: " << totalJan << " мм\n";
    cout << "Март: " << totalMar << " мм\n";

    if (totalJan > totalMar) {
        cout << "В январе выпало больше осадков\n";
    }
    else if (totalMar > totalJan) {
        cout << "В марте выпало больше осадков\n";
    }
    else {
        cout << "Осадков выпало одинаково\n";
    }

    return 0;
}
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int FIGURES = 15;
    double length[FIGURES];
    double width[FIGURES];
    double height[FIGURES];

    cout << "Введите размеры " << FIGURES << " параллелепипедов:\n";
    for (int i = 0; i < FIGURES; i++) {
        cout << "Фигура " << i + 1 << ":\n";
        cout << "  Длина: ";
        cin >> length[i];
        cout << "  Ширина: ";
        cin >> width[i];
        cout << "  Высота: ";
        cin >> height[i];
    }

    // Способ 1: Без дополнительного массива
    cout << fixed << setprecision(2);
    cout << "\n=== Способ 1 (без доп. массива) ===\n";

    double maxVol1 = length[0] * width[0] * height[0];
    double minVol1 = maxVol1;
    int maxIndex1 = 0, minIndex1 = 0;

    for (int i = 1; i < FIGURES; i++) {
        double vol = length[i] * width[i] * height[i];
        if (vol > maxVol1) {
            maxVol1 = vol;
            maxIndex1 = i;
        }
        if (vol < minVol1) {
            minVol1 = vol;
            minIndex1 = i;
        }
    }

    cout << "а) Максимальный объем: " << maxVol1 << endl;
    cout << "б) Минимальный объем: " << minVol1 << endl;
    cout << "в) Фигура с макс. объемом: №" << maxIndex1 + 1 << endl;
    cout << "г) Фигура с мин. объемом: №" << minIndex1 + 1 << endl;

    // Способ 2: С дополнительным массивом
    cout << "\n=== Способ 2 (с доп. массивом) ===\n";

    double volume[FIGURES];

    for (int i = 0; i < FIGURES; i++) {
        volume[i] = length[i] * width[i] * height[i];
    }

    double maxVol2 = volume[0];
    double minVol2 = volume[0];
    int maxIndex2 = 0, minIndex2 = 0;

    for (int i = 1; i < FIGURES; i++) {
        if (volume[i] > maxVol2) {
            maxVol2 = volume[i];
            maxIndex2 = i;
        }
        if (volume[i] < minVol2) {
            minVol2 = volume[i];
            minIndex2 = i;
        }
    }

    cout << "а) Максимальный объем: " << maxVol2 << endl;
    cout << "б) Минимальный объем: " << minVol2 << endl;
    cout << "в) Фигура с макс. объемом: №" << maxIndex2 + 1 << endl;
    cout << "г) Фигура с мин. объемом: №" << minIndex2 + 1 << endl;

    return 0;
}
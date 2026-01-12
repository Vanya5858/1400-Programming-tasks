#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int FIGURES = 12;
    double length[FIGURES];   // длина
    double width[FIGURES];    // ширина
    double height[FIGURES];   // высота

    cout << "Введите размеры " << FIGURES << " параллелепипедов:\n";
    for (int i = 0; i < FIGURES; i++) {
        cout << "\nПараллелепипед " << i + 1 << ":\n";
        cout << "  Длина: ";
        cin >> length[i];
        cout << "  Ширина: ";
        cin >> width[i];
        cout << "  Высота: ";
        cin >> height[i];
    }

    // Способ 1: Без дополнительного массива
    cout << fixed << setprecision(2);
    cout << "\n===================================\n";
    cout << "СПОСОБ 1: БЕЗ ДОПОЛНИТЕЛЬНОГО МАССИВА\n";
    cout << "===================================\n\n";

    double totalVolume1 = 0;

    cout << "ОБЪЕМЫ ПАРАЛЛЕЛЕПИПЕДОВ:\n";
    cout << "-------------------------\n";

    for (int i = 0; i < FIGURES; i++) {
        double volume = length[i] * width[i] * height[i];
        cout << "Фигура " << setw(2) << i + 1 << ": "
            << setw(8) << volume << " куб.ед.\n";
        totalVolume1 += volume;
    }

    cout << "\nОБЩИЙ ОБЪЕМ: " << totalVolume1 << " куб.ед.\n";
    cout << "СРЕДНИЙ ОБЪЕМ: " << totalVolume1 / FIGURES << " куб.ед.\n";

    // Способ 2: С дополнительным массивом
    cout << "\n\n===================================\n";
    cout << "СПОСОБ 2: С ДОПОЛНИТЕЛЬНЫМ МАССИВОМ\n";
    cout << "===================================\n\n";

    double volumeArray[FIGURES];  // дополнительный массив для объемов

    // Заполняем массив объемов
    for (int i = 0; i < FIGURES; i++) {
        volumeArray[i] = length[i] * width[i] * height[i];
    }

    // Рассчитываем общие показатели
    double totalVolume2 = 0;
    int largestIndex = 0, smallestIndex = 0;

    for (int i = 0; i < FIGURES; i++) {
        totalVolume2 += volumeArray[i];
        if (volumeArray[i] > volumeArray[largestIndex]) largestIndex = i;
        if (volumeArray[i] < volumeArray[smallestIndex]) smallestIndex = i;
    }

    cout << "ОБЪЕМЫ ПАРАЛЛЕЛЕПИПЕДОВ:\n";
    cout << "-------------------------\n";

    for (int i = 0; i < FIGURES; i++) {
        cout << "Фигура " << setw(2) << i + 1 << ": "
            << setw(8) << volumeArray[i] << " куб.ед.";

        if (i == largestIndex) cout << " ← НАИБОЛЬШИЙ";
        if (i == smallestIndex) cout << " ← НАИМЕНЬШИЙ";
        cout << "\n";
    }

    double averageVolume = totalVolume2 / FIGURES;

    cout << "\nСТАТИСТИКА:\n";
    cout << "Общий объем: " << totalVolume2 << " куб.ед.\n";
    cout << "Средний объем: " << averageVolume << " куб.ед.\n";
    cout << "Наибольший объем: фигура " << largestIndex + 1
        << " (" << volumeArray[largestIndex] << " куб.ед.)\n";
    cout << "Наименьший объем: фигура " << smallestIndex + 1
        << " (" << volumeArray[smallestIndex] << " куб.ед.)\n";
    cout << "Разница: " << volumeArray[largestIndex] - volumeArray[smallestIndex]
        << " куб.ед.\n";

    // Дополнительно: выводим размеры фигур с наибольшим и наименьшим объемом
    cout << "\nПОДРОБНАЯ ИНФОРМАЦИЯ:\n";
    cout << "Фигура с наибольшим объемом (#" << largestIndex + 1 << "):\n";
    cout << "  Длина: " << length[largestIndex]
        << ", Ширина: " << width[largestIndex]
        << ", Высота: " << height[largestIndex] << endl;

    cout << "Фигура с наименьшим объемом (#" << smallestIndex + 1 << "):\n";
    cout << "  Длина: " << length[smallestIndex]
        << ", Ширина: " << width[smallestIndex]
        << ", Высота: " << height[smallestIndex] << endl;

    return 0;
}
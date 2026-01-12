#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int DISTRICTS = 20;
    double area[DISTRICTS];   // площади в гектарах
    double harvest[DISTRICTS]; // урожай в центнерах

    cout << "Введите данные для " << DISTRICTS << " районов:\n";
    for (int i = 0; i < DISTRICTS; i++) {
        cout << "\nРайон " << i + 1 << ":\n";
        cout << "  Площадь (га): ";
        cin >> area[i];
        cout << "  Урожай (ц): ";
        cin >> harvest[i];
    }

    // Способ 1: Без дополнительного массива
    cout << fixed << setprecision(2);
    cout << "\n===================================\n";
    cout << "СПОСОБ 1: БЕЗ ДОПОЛНИТЕЛЬНОГО МАССИВА\n";
    cout << "===================================\n\n";

    double totalArea = 0, totalHarvest = 0;

    cout << "СРЕДНЯЯ УРОЖАЙНОСТЬ ПО РАЙОНАМ:\n";
    cout << "--------------------------------\n";

    for (int i = 0; i < DISTRICTS; i++) {
        double yield = harvest[i] / area[i];  // ц/га
        cout << "Район " << setw(2) << i + 1 << ": "
            << setw(6) << yield << " ц/га\n";

        totalArea += area[i];
        totalHarvest += harvest[i];
    }

    double averageYield = totalHarvest / totalArea;
    cout << "\nСРЕДНЯЯ УРОЖАЙНОСТЬ ПО ОБЛАСТИ: "
        << averageYield << " ц/га\n";
    cout << "Общая площадь: " << totalArea << " га\n";
    cout << "Общий урожай: " << totalHarvest << " ц\n";

    // Способ 2: С дополнительным массивом
    cout << "\n\n===================================\n";
    cout << "СПОСОБ 2: С ДОПОЛНИТЕЛЬНЫМ МАССИВОМ\n";
    cout << "===================================\n\n";

    double yieldArray[DISTRICTS];  // дополнительный массив для урожайности

    // Заполняем массив урожайности
    for (int i = 0; i < DISTRICTS; i++) {
        yieldArray[i] = harvest[i] / area[i];
    }

    // Рассчитываем общие показатели заново
    double totalArea2 = 0, totalHarvest2 = 0, totalYield = 0;

    for (int i = 0; i < DISTRICTS; i++) {
        totalArea2 += area[i];
        totalHarvest2 += harvest[i];
        totalYield += yieldArray[i];
    }

    cout << "СРЕДНЯЯ УРОЖАЙНОСТЬ ПО РАЙОНАМ:\n";
    cout << "--------------------------------\n";

    // Ищем лучший и худший районы
    int bestDistrict = 0, worstDistrict = 0;
    for (int i = 1; i < DISTRICTS; i++) {
        if (yieldArray[i] > yieldArray[bestDistrict]) bestDistrict = i;
        if (yieldArray[i] < yieldArray[worstDistrict]) worstDistrict = i;
    }

    for (int i = 0; i < DISTRICTS; i++) {
        cout << "Район " << setw(2) << i + 1 << ": "
            << setw(6) << yieldArray[i] << " ц/га";

        if (i == bestDistrict) cout << " ← НАИЛУЧШИЙ";
        if (i == worstDistrict) cout << " ← НАИХУДШИЙ";
        cout << "\n";
    }

    double averageYield2 = totalHarvest2 / totalArea2;
    double averageByDistricts = totalYield / DISTRICTS;

    cout << "\nСРЕДНЯЯ УРОЖАЙНОСТЬ ПО ОБЛАСТИ:\n";
    cout << "По общей площади: " << averageYield2 << " ц/га\n";
    cout << "Среднее по районам: " << averageByDistricts << " ц/га\n";

    cout << "\nЛУЧШИЙ РАЙОН: №" << bestDistrict + 1
        << " (" << yieldArray[bestDistrict] << " ц/га)\n";
    cout << "ХУДШИЙ РАЙОН: №" << worstDistrict + 1
        << " (" << yieldArray[worstDistrict] << " ц/га)\n";
    cout << "Разница: " << yieldArray[bestDistrict] - yieldArray[worstDistrict]
        << " ц/га\n";

    return 0;
}
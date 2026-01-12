#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int DISTRICTS = 10;
    double area[DISTRICTS];      // площади в гектарах
    double yield[DISTRICTS];     // урожайность в ц/га

    cout << "Введите данные для " << DISTRICTS << " районов:\n";
    for (int i = 0; i < DISTRICTS; i++) {
        cout << "\nРайон " << i + 1 << ":\n";
        cout << "  Площадь (га): ";
        cin >> area[i];
        cout << "  Урожайность (ц/га): ";
        cin >> yield[i];
    }

    // Способ 1: Без дополнительного массива
    cout << fixed << setprecision(2);
    cout << "\n===================================\n";
    cout << "СПОСОБ 1: БЕЗ ДОПОЛНИТЕЛЬНОГО МАССИВА\n";
    cout << "===================================\n\n";

    double totalArea = 0, totalWheat = 0;

    cout << "УРОЖАЙ ПО РАЙОНАМ:\n";
    cout << "------------------\n";

    for (int i = 0; i < DISTRICTS; i++) {
        double wheat = area[i] * yield[i];  // урожай в районе (ц)
        cout << "Район " << setw(2) << i + 1 << ": "
            << setw(8) << wheat << " ц\n";

        totalArea += area[i];
        totalWheat += wheat;
    }

    double averageYield = totalWheat / totalArea;
    cout << "\nИТОГО ПО ОБЛАСТИ:\n";
    cout << "Общая площадь: " << totalArea << " га\n";
    cout << "Общий урожай: " << totalWheat << " ц\n";
    cout << "Средняя урожайность: " << averageYield << " ц/га\n";

    // Способ 2: С дополнительным массивом
    cout << "\n\n===================================\n";
    cout << "СПОСОБ 2: С ДОПОЛНИТЕЛЬНЫМ МАССИВОМ\n";
    cout << "===================================\n\n";

    double wheatArray[DISTRICTS];  // дополнительный массив для урожая по районам

    // Заполняем массив урожая
    for (int i = 0; i < DISTRICTS; i++) {
        wheatArray[i] = area[i] * yield[i];
    }

    // Рассчитываем общие показатели
    double totalArea2 = 0, totalWheat2 = 0;
    for (int i = 0; i < DISTRICTS; i++) {
        totalArea2 += area[i];
        totalWheat2 += wheatArray[i];
    }

    cout << "УРОЖАЙ ПО РАЙОНАМ:\n";
    cout << "------------------\n";

    // Ищем лучший и худший районы по урожаю
    int bestDistrict = 0, worstDistrict = 0;
    for (int i = 1; i < DISTRICTS; i++) {
        if (wheatArray[i] > wheatArray[bestDistrict]) bestDistrict = i;
        if (wheatArray[i] < wheatArray[worstDistrict]) worstDistrict = i;
    }

    for (int i = 0; i < DISTRICTS; i++) {
        cout << "Район " << setw(2) << i + 1 << ": "
            << setw(8) << wheatArray[i] << " ц";

        if (i == bestDistrict) cout << " ← НАИБОЛЬШИЙ УРОЖАЙ";
        if (i == worstDistrict) cout << " ← НАИМЕНЬШИЙ УРОЖАЙ";
        cout << "\n";
    }

    double averageYield2 = totalWheat2 / totalArea2;

    cout << "\nИТОГО ПО ОБЛАСТИ:\n";
    cout << "Общая площадь: " << totalArea2 << " га\n";
    cout << "Общий урожай: " << totalWheat2 << " ц\n";
    cout << "Средняя урожайность: " << averageYield2 << " ц/га\n";

    // Дополнительная информация
    cout << "\nАНАЛИЗ РЕЗУЛЬТАТОВ:\n";
    cout << "Лучший район: №" << bestDistrict + 1
        << " (урожай: " << wheatArray[bestDistrict] << " ц)\n";
    cout << "Худший район: №" << worstDistrict + 1
        << " (урожай: " << wheatArray[worstDistrict] << " ц)\n";
    cout << "Разница: " << wheatArray[bestDistrict] - wheatArray[worstDistrict]
        << " ц\n";

    // Урожайность по районам для сравнения
    cout << "\nУРОЖАЙНОСТЬ ПО РАЙОНАМ (ц/га):\n";
    for (int i = 0; i < DISTRICTS; i++) {
        cout << "Район " << i + 1 << ": " << yield[i] << " ц/га\n";
    }
    cout << "Средняя по области: " << averageYield2 << " ц/га\n";

    return 0;
}
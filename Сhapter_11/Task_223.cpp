#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int DAYS_JULY = 31;
    const int DAYS_AUGUST = 31;
    const int TOTAL_DAYS = DAYS_JULY + DAYS_AUGUST;

    double shop1[TOTAL_DAYS], shop2[TOTAL_DAYS];

    cout << "Введите стоимость проданных товаров за ИЮЛЬ и АВГУСТ:\n\n";

    // Ввод данных для июля (дни 1-31)
    cout << "=== ИЮЛЬ (31 день) ===\n";
    for (int i = 0; i < DAYS_JULY; i++) {
        cout << "День " << i + 1 << " июля:\n";
        cout << "  Магазин 1: ";
        cin >> shop1[i];
        cout << "  Магазин 2: ";
        cin >> shop2[i];
    }

    // Ввод данных для августа (дни 32-62)
    cout << "\n=== АВГУСТ (31 день) ===\n";
    for (int i = 0; i < DAYS_AUGUST; i++) {
        cout << "День " << i + 1 << " августа:\n";
        cout << "  Магазин 1: ";
        cin >> shop1[DAYS_JULY + i];
        cout << "  Магазин 2: ";
        cin >> shop2[DAYS_JULY + i];
    }

    // Расчеты
    double totalShop1 = 0, totalShop2 = 0, totalFirm = 0;
    double totalJuly = 0, totalAugust = 0;

    for (int i = 0; i < TOTAL_DAYS; i++) {
        totalShop1 += shop1[i];
        totalShop2 += shop2[i];

        if (i < DAYS_JULY) {
            totalJuly += shop1[i] + shop2[i];
        }
        else {
            totalAugust += shop1[i] + shop2[i];
        }
    }

    totalFirm = totalShop1 + totalShop2;

    // Вывод результатов
    cout << fixed << setprecision(2);
    cout << "\n===================================\n";
    cout << "ОТЧЕТ О ПРОДАЖАХ ЗА ИЮЛЬ-АВГУСТ\n";
    cout << "===================================\n\n";

    cout << "ОБЩАЯ СТОИМОСТЬ ПРОДАННЫХ ТОВАРОВ:\n";
    cout << "-----------------------------------\n";
    cout << "Магазин 1: " << totalShop1 << " руб.\n";
    cout << "Магазин 2: " << totalShop2 << " руб.\n";
    cout << "Фирма (общая): " << totalFirm << " руб.\n\n";

    cout << "ПО МЕСЯЦАМ:\n";
    cout << "-----------------------------------\n";
    cout << "Июль: " << totalJuly << " руб.\n";
    cout << "Август: " << totalAugust << " руб.\n\n";

    cout << "СРЕДНЕДНЕВНАЯ ВЫРУЧКА:\n";
    cout << "-----------------------------------\n";
    cout << "Магазин 1: " << totalShop1 / TOTAL_DAYS << " руб./день\n";
    cout << "Магазин 2: " << totalShop2 / TOTAL_DAYS << " руб./день\n";
    cout << "Фирма: " << totalFirm / TOTAL_DAYS << " руб./день\n";

    return 0;
}
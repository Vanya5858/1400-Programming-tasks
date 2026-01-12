#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int DISKS = 22;
    int capacity[DISKS];   // вместимость в ГБ
    double price[DISKS];   // стоимость в рублях

    cout << "Введите данные о " << DISKS << " типах жестких дисков:\n";
    for (int i = 0; i < DISKS; i++) {
        cout << "\nДиск " << i + 1 << ":\n";
        cout << "  Вместимость (ГБ): ";
        cin >> capacity[i];
        cout << "  Стоимость (руб.): ";
        cin >> price[i];
    }

    double minPrice;
    cout << "\nВведите минимальную стоимость s (руб.): ";
    cin >> minPrice;

    cout << fixed << setprecision(2);
    cout << "\n===================================\n";
    cout << "ЖЕСТКИЕ ДИСКИ СТОИМОСТЬЮ > " << minPrice << " РУБ.\n";
    cout << "===================================\n\n";

    int count = 0;
    double totalCapacity = 0;
    double totalPrice = 0;
    double minGBPrice = 1e9;  // минимальная цена за 1 ГБ
    int bestValueIndex = -1;

    cout << "Список жестких дисков:\n";
    cout << "----------------------\n";

    for (int i = 0; i < DISKS; i++) {
        if (price[i] > minPrice) {
            count++;
            totalCapacity += capacity[i];
            totalPrice += price[i];

            double pricePerGB = price[i] / capacity[i];

            cout << "Диск " << setw(2) << i + 1 << ":\n";
            cout << "  Вместимость: " << setw(6) << capacity[i] << " ГБ\n";
            cout << "  Стоимость: " << setw(10) << price[i] << " руб.\n";
            cout << "  Цена за 1 ГБ: " << setw(8) << pricePerGB << " руб./ГБ\n\n";

            // Находим лучшую цену за 1 ГБ
            if (pricePerGB < minGBPrice) {
                minGBPrice = pricePerGB;
                bestValueIndex = i;
            }
        }
    }

    if (count == 0) {
        cout << "Нет жестких дисков стоимостью больше " << minPrice << " руб.\n";
    }
    else {
        cout << "СТАТИСТИКА:\n";
        cout << "----------------------------------------\n";
        cout << "Количество дисков: " << count << " из " << DISKS << endl;
        cout << "Общая вместимость: " << totalCapacity << " ГБ\n";
        cout << "Общая стоимость: " << totalPrice << " руб.\n";
        cout << "Средняя стоимость: " << totalPrice / count << " руб.\n";
        cout << "Средняя вместимость: " << totalCapacity / count << " ГБ\n";

        if (bestValueIndex != -1) {
            cout << "\nНАИЛУЧШЕЕ СООТНОШЕНИЕ ЦЕНА/КАЧЕСТВО:\n";
            cout << "Диск " << bestValueIndex + 1 << ":\n";
            cout << "  Вместимость: " << capacity[bestValueIndex] << " ГБ\n";
            cout << "  Стоимость: " << price[bestValueIndex] << " руб.\n";
            cout << "  Цена за 1 ГБ: " << minGBPrice << " руб./ГБ\n";
        }

        // Дополнительно: диски стоимостью ≤ s рублей
        int cheapCount = 0;
        double cheapTotalCapacity = 0;

        for (int i = 0; i < DISKS; i++) {
            if (price[i] <= minPrice) {
                cheapCount++;
                cheapTotalCapacity += capacity[i];
            }
        }

        if (cheapCount > 0) {
            cout << "\nСРАВНЕНИЕ С ДИСКАМИ ≤ " << minPrice << " РУБ.:\n";
            cout << "Дисков ≤ " << minPrice << " руб.: " << cheapCount << endl;
            cout << "Общая вместимость дешевых дисков: " << cheapTotalCapacity << " ГБ\n";
            cout << "Средняя вместимость дешевых дисков: "
                << cheapTotalCapacity / cheapCount << " ГБ\n";
            cout << "Средняя вместимость дорогих дисков (> " << minPrice
                << " руб.): " << totalCapacity / count << " ГБ\n";
        }
    }

    return 0;
}
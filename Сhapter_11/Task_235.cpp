#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int CARS = 30;
    double power[CARS];   // мощность в л.с.
    double price[CARS];   // стоимость в рублях

    cout << "Введите данные о " << CARS << " автомобилях:\n";
    for (int i = 0; i < CARS; i++) {
        cout << "\nАвтомобиль " << i + 1 << ":\n";
        cout << "  Мощность (л.с.): ";
        cin >> power[i];
        cout << "  Стоимость (руб.): ";
        cin >> price[i];
    }

    cout << fixed << setprecision(2);
    cout << "\n========================================\n";
    cout << "АВТОМОБИЛИ С МОЩНОСТЬЮ > 100 Л.С.\n";
    cout << "========================================\n\n";

    double totalPrice = 0;
    int count = 0;
    double maxPrice = 0, minPrice = 1e9;
    int mostExpensiveIndex = -1, cheapestIndex = -1;

    cout << "№   | Мощность (л.с.) | Стоимость (руб.)\n";
    cout << "----------------------------------------\n";

    for (int i = 0; i < CARS; i++) {
        if (power[i] > 100) {
            count++;
            totalPrice += price[i];

            if (price[i] > maxPrice) {
                maxPrice = price[i];
                mostExpensiveIndex = i;
            }
            if (price[i] < minPrice) {
                minPrice = price[i];
                cheapestIndex = i;
            }

            printf("%2d  | %13.0f | %14.2f\n",
                i + 1, power[i], price[i]);
        }
    }

    if (count == 0) {
        cout << "Нет автомобилей с мощностью более 100 л.с.\n";
    }
    else {
        cout << "\nИТОГО:\n";
        cout << "Количество автомобилей: " << count << " из " << CARS << endl;
        cout << "Общая стоимость: " << totalPrice << " руб.\n";
        cout << "Средняя стоимость: " << totalPrice / count << " руб.\n";

        if (mostExpensiveIndex != -1) {
            cout << "\nСамый дорогой автомобиль (>100 л.с.):\n";
            cout << "  Автомобиль №" << mostExpensiveIndex + 1 << endl;
            cout << "  Мощность: " << power[mostExpensiveIndex] << " л.с.\n";
            cout << "  Стоимость: " << price[mostExpensiveIndex] << " руб.\n";
        }

        if (cheapestIndex != -1) {
            cout << "\nСамый дешевый автомобиль (>100 л.с.):\n";
            cout << "  Автомобиль №" << cheapestIndex + 1 << endl;
            cout << "  Мощность: " << power[cheapestIndex] << " л.с.\n";
            cout << "  Стоимость: " << price[cheapestIndex] << " руб.\n";
        }

        // Сравнение с автомобилями ≤ 100 л.с.
        int weakCars = 0;
        double weakTotalPrice = 0;

        for (int i = 0; i < CARS; i++) {
            if (power[i] <= 100) {
                weakCars++;
                weakTotalPrice += price[i];
            }
        }

        if (weakCars > 0) {
            cout << "\nСРАВНЕНИЕ:\n";
            cout << "Автомобили >100 л.с.: " << count
                << " шт., ср. цена: " << totalPrice / count << " руб.\n";
            cout << "Автомобили <= 100 л.с.: " << weakCars
                << " шт., ср. цена: " << weakTotalPrice / weakCars << " руб.\n";
        }
    }

    return 0;
}
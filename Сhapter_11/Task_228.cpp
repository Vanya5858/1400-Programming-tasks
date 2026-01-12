#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int CARS = 30;
    double power[CARS];    // мощность в л.с.
    double price[CARS];    // стоимость

    cout << "Введите данные о " << CARS << " марках автомобилей:\n";
    for (int i = 0; i < CARS; i++) {
        cout << "\nАвтомобиль " << i + 1 << ":\n";
        cout << "  Мощность двигателя (л.с.): ";
        cin >> power[i];
        cout << "  Стоимость (руб.): ";
        cin >> price[i];
    }

    cout << fixed << setprecision(2);
    cout << "\n===================================\n";
    cout << "АВТОМОБИЛИ С МОЩНОСТЬЮ ДО 80 Л.С.\n";
    cout << "===================================\n\n";

    int count = 0;
    double totalPrice = 0;
    double minPrice = 1e9, maxPrice = 0;
    int cheapestIndex = -1, mostExpensiveIndex = -1;

    cout << "Список автомобилей (мощность ≤ 80 л.с.):\n";
    cout << "----------------------------------------\n";

    for (int i = 0; i < CARS; i++) {
        if (power[i] <= 80) {
            count++;
            totalPrice += price[i];

            cout << "Автомобиль " << setw(2) << i + 1 << ":\n";
            cout << "  Мощность: " << setw(6) << power[i] << " л.с.\n";
            cout << "  Стоимость: " << setw(10) << price[i] << " руб.\n\n";

            // Находим самый дешевый и самый дорогой
            if (price[i] < minPrice) {
                minPrice = price[i];
                cheapestIndex = i;
            }
            if (price[i] > maxPrice) {
                maxPrice = price[i];
                mostExpensiveIndex = i;
            }
        }
    }

    if (count == 0) {
        cout << "Нет автомобилей с мощностью до 80 л.с.\n";
    }
    else {
        cout << "ИТОГО:\n";
        cout << "Найдено автомобилей: " << count << " из " << CARS << endl;
        cout << "Общая стоимость: " << totalPrice << " руб.\n";
        cout << "Средняя стоимость: " << totalPrice / count << " руб.\n";

        if (cheapestIndex != -1) {
            cout << "\nСамый дешевый автомобиль (≤80 л.с.):\n";
            cout << "  Автомобиль " << cheapestIndex + 1 << endl;
            cout << "  Мощность: " << power[cheapestIndex] << " л.с.\n";
            cout << "  Стоимость: " << price[cheapestIndex] << " руб.\n";
        }

        if (mostExpensiveIndex != -1) {
            cout << "\nСамый дорогой автомобиль (≤80 л.с.):\n";
            cout << "  Автомобиль " << mostExpensiveIndex + 1 << endl;
            cout << "  Мощность: " << power[mostExpensiveIndex] << " л.с.\n";
            cout << "  Стоимость: " << price[mostExpensiveIndex] << " руб.\n";
        }

        // Дополнительно: автомобили с мощностью > 80 л.с.
        int powerfulCount = 0;
        double powerfulTotalPrice = 0;

        for (int i = 0; i < CARS; i++) {
            if (power[i] > 80) {
                powerfulCount++;
                powerfulTotalPrice += price[i];
            }
        }

        if (powerfulCount > 0) {
            cout << "\nСРАВНЕНИЕ С АВТОМОБИЛЯМИ >80 Л.С.:\n";
            cout << "Автомобилей >80 л.с.: " << powerfulCount << endl;
            cout << "Средняя стоимость автомобилей >80 л.с.: "
                << powerfulTotalPrice / powerfulCount << " руб.\n";
            cout << "Средняя стоимость автомобилей ≤80 л.с.: "
                << totalPrice / count << " руб.\n";
        }
    }

    return 0;
}
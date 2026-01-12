#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int COUNTRIES = 28;
    double population[COUNTRIES];  // население в млн
    double area[COUNTRIES];        // площадь в млн кв.км

    cout << "Введите данные о " << COUNTRIES << " государствах:\n";
    for (int i = 0; i < COUNTRIES; i++) {
        cout << "\nГосударство " << i + 1 << ":\n";
        cout << "  Население (млн. чел.): ";
        cin >> population[i];
        cout << "  Площадь (млн. кв.км): ";
        cin >> area[i];
    }

    cout << fixed << setprecision(2);
    cout << "\n===================================\n";
    cout << "ГОСУДАРСТВА С ПЛОЩАДЬЮ > 5 млн кв.км\n";
    cout << "===================================\n\n";

    double totalPopulation = 0;
    int count = 0;

    cout << "№   | Население (млн) | Площадь (млн км²) | Плотность (чел/км²)\n";
    cout << "----------------------------------------------------------------\n";

    for (int i = 0; i < COUNTRIES; i++) {
        if (area[i] > 5.0) {
            count++;
            totalPopulation += population[i];

            double density = (population[i] * 1000000) / (area[i] * 1000000);

            printf("%2d  | %13.2f | %16.2f | %15.2f\n",
                i + 1, population[i], area[i], density);
        }
    }

    if (count == 0) {
        cout << "Нет государств с площадью более 5 млн кв.км\n";
    }
    else {
        cout << "\nИТОГО:\n";
        cout << "Количество государств: " << count << " из " << COUNTRIES << endl;
        cout << "Общая численность населения: " << totalPopulation << " млн чел.\n";
        cout << "Средняя численность: " << totalPopulation / count << " млн чел.\n";

        // Также показываем государства с площадью <= 5 млн кв.км
        int smallCountries = 0;
        double smallPopulation = 0;

        for (int i = 0; i < COUNTRIES; i++) {
            if (area[i] <= 5.0) {
                smallCountries++;
                smallPopulation += population[i];
            }
        }

        if (smallCountries > 0) {
            cout << "\nСРАВНЕНИЕ:\n";
            cout << "Государства >5 млн км²: " << count
                << " стран, " << totalPopulation << " млн чел.\n";
            cout << "Государства <=5 млн км²: " << smallCountries
                << " стран, " << smallPopulation << " млн чел.\n";
        }
    }

    return 0;
}
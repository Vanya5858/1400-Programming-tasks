#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Country {
    string name;
    double population; // население в млн чел.
    double area; // площадь в тыс. кв. км
};

double calculateDensity(Country country) {
    return country.population / country.area; // млн чел. / тыс. кв. км
}

double findMaxPopulationDensity(Country countries[], int n) {
    double maxDensity = 0.0;

    for (int i = 0; i < n; i++) {
        double density = calculateDensity(countries[i]);
        if (density > maxDensity) {
            maxDensity = density;
        }
    }

    return maxDensity;
}

int main() {
    setlocale(LC_ALL, "RU");

    Country countries[28] = {
        {"Россия", 146.7, 17098.2}, {"Китай", 1402.0, 9596.9}, {"Индия", 1380.0, 3287.3},
        {"США", 331.0, 9834.6}, {"Индонезия", 273.5, 1910.9}, {"Пакистан", 220.9, 881.9},
        {"Бразилия", 213.0, 8515.8}, {"Нигерия", 206.1, 923.8}, {"Бангладеш", 164.7, 147.6},
        {"Россия", 146.7, 17098.2}, {"Мексика", 128.9, 1964.4}, {"Япония", 125.8, 377.9},
        {"Филиппины", 109.6, 300.0}, {"Египет", 102.3, 1002.5}, {"Вьетнам", 97.3, 331.2},
        {"Турция", 84.3, 783.6}, {"Иран", 83.9, 1648.2}, {"Германия", 83.2, 357.0},
        {"Таиланд", 69.8, 513.1}, {"Великобритания", 67.9, 242.5}, {"Франция", 65.3, 551.7},
        {"Италия", 60.4, 301.3}, {"Южная Африка", 59.3, 1219.1}, {"Кения", 53.8, 580.4},
        {"Колумбия", 50.9, 1141.7}, {"Испания", 47.4, 505.4}, {"Аргентина", 45.4, 2780.4},
        {"Украина", 44.1, 603.5}
    };

    double maxDensity = findMaxPopulationDensity(countries, 28);

    cout << "Максимальная плотность населения: "
        << fixed << setprecision(2) << maxDensity << " млн чел./тыс. кв. км" << endl;

    // Вывод стран с максимальной плотностью населения
    cout << "\nСтраны с максимальной плотностью населения:" << endl;
    cout << "============================================" << endl;
    for (int i = 0; i < 28; i++) {
        if (calculateDensity(countries[i]) == maxDensity) {
            cout << countries[i].name << ": "
                << fixed << setprecision(2) << maxDensity
                << " млн чел./тыс. кв. км" << endl;
        }
    }

    return 0;
}
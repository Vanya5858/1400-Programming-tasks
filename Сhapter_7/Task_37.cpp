#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double population, area, totalPopulation = 0, totalArea = 0;

    cout << "Введите данные по 12 районам (население в тыс., площадь в км^2):\n";

    for (int i = 0; i < 12; i++) {
        cin >> population >> area;
        totalPopulation += population;
        totalArea += area;
    }

    cout << "Средняя плотность населения по области = "
        << totalPopulation / totalArea << " тыс. чел./км^2";

    return 0;
}
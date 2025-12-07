#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double population, density, totalArea = 0;

    cout << "Введите данные по 12 районам (население в тыс., плотность в тыс.чел./км^2):\n";

    for (int i = 0; i < 12; i++) {
        cin >> population >> density;
        totalArea += population / density;
    }

    cout << "Общая площадь территории области = " << totalArea << " км^2";

    return 0;
}
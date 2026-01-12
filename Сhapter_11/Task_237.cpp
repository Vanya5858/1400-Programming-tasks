#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int COUNTRIES = 28;
    double population[COUNTRIES];
    double area[COUNTRIES];

    cout << "Введите данные о " << COUNTRIES << " государствах:\n";
    for (int i = 0; i < COUNTRIES; i++) {
        cout << "Государство " << i + 1 << ":\n";
        cout << "  Население (млн): ";
        cin >> population[i];
        cout << "  Площадь (тыс.км^2): ";
        cin >> area[i];
    }

    double A;
    cout << "\nВведите A (тыс.км^2): ";
    cin >> A;

    double totalPopulation = 0;
    int count = 0;

    for (int i = 0; i < COUNTRIES; i++) {
        if (area[i] <= A) {
            count++;
            totalPopulation += population[i];
        }
    }

    cout << "\nГосударства с площадью ≤ " << A << " тыс.км^2:\n";
    cout << "Количество: " << count << " из " << COUNTRIES << endl;
    cout << "Общая численность населения: " << totalPopulation << " млн чел.\n";

    if (count > 0) {
        cout << "Средняя численность: " << totalPopulation / count << " млн чел.\n";
    }

    return 0;
}
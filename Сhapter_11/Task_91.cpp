#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 25;
    double weights[n];

    cout << "Введите массу " << n << " человек (кг):\n";
    for (int i = 0; i < n; i++) cin >> weights[i];

    double sumFull = 0, sumOther = 0;
    int countFull = 0, countOther = 0;

    for (int i = 0; i < n; i++) {
        if (weights[i] > 100) {
            sumFull += weights[i];
            countFull++;
        }
        else {
            sumOther += weights[i];
            countOther++;
        }
    }

    if (countFull > 0)
        cout << "Средняя масса полных людей: " << sumFull / countFull << " кг\n";
    else
        cout << "Нет полных людей.\n";

    if (countOther > 0)
        cout << "Средняя масса остальных: " << sumOther / countOther << " кг\n";
    else
        cout << "Все люди полные.\n";

    return 0;
}
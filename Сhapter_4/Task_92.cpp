#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double t;
    cout << "Введите время в минутах с начала часа: ";
    cin >> t;

    // Цикл: 3 мин зеленый, 1 мин желтый, 2 мин красный
    int cycle_time = (int)t % 6;

    if (cycle_time < 3) {
        cout << "Горит зеленый сигнал\n";
    }
    else if (cycle_time < 4) {
        cout << "Горит желтый сигнал\n";
    }
    else {
        cout << "Горит красный сигнал\n";
    }

    return 0;
}
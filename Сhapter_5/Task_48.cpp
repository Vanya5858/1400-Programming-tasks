#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int cells = 1; // начальное количество амеб

    cout << "Количество амеб через:\n";
    for (int hours = 3; hours <= 24; hours += 3) {
        cells *= 2; // каждые 3 часа количество удваивается
        cout << hours << " часов: " << cells << " клеток\n";
    }

    return 0;
}
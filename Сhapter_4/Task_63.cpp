#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double a, b, c, d;
    cout << "Введите размеры конверта (a b) в мм: ";
    cin >> a >> b;
    cout << "Введите размеры открытки (c d) в мм: ";
    cin >> c >> d;

    // Учитываем зазор 1 мм с каждой стороны
    if ((c + 2 <= a && d + 2 <= b) || (c + 2 <= b && d + 2 <= a)) {
        cout << "Открытка помещается в конверт\n";
    }
    else {
        cout << "Открытка не помещается в конверт\n";
    }

    return 0;
}
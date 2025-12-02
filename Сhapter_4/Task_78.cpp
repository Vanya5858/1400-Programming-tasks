#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int a, b, c, d;
    cout << "Введите координаты двух полей (a b c d): ";
    cin >> a >> b >> c >> d;

    // Поля одного цвета, если сумма координат одинаковой четности
    if ((a + b) % 2 == (c + d) % 2) {
        cout << "Поля одного цвета\n";
    }
    else {
        cout << "Поля разного цвета\n";
    }

    return 0;
}
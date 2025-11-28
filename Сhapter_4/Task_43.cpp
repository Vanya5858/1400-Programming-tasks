#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double x, y;
    cout << "Введите координаты точки (x y): ";
    cin >> x >> y;

    // Область I
    if (x > 3 && y > 2) {
        cout << "Точка попадает в область I\n";
    }
    else {
        cout << "Точка не попадает в область I\n";
    }

    return 0;
}
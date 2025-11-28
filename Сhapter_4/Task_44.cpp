#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double x, y;
    cout << "Введите координаты точки (x y): ";
    cin >> x >> y;

    // Область I: x > 5(первый квадрант)
    // Область III: x < -1(третий квадрант)
    if (x < -1 || x > 5) {
        cout << "Точка попадает в область I или III\n";
    }
    else {
        cout << "Точка не попадает в область I или III\n";
    }

    return 0;
}
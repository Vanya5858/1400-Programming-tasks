#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double x, y;
    cout << "Введите координаты точки (x y): ";
    cin >> x >> y;

    // a) Область I
    if (x > 2 && y > 2) {
        cout << "a)Точка попадает в область I\n";
    }
    else {
        cout << "a)Точка не попадает в область I\n";
    }

    // б) Область I
    if (x < -2 && y < -4) {
            cout << "б)Точка попадает в область I\n";
    }
    else {
            cout << "б)Точка не попадает в область I\n";
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double x, y;
    cout << "Введите координаты точки (x y): ";
    cin >> x >> y;

    if (y > 3) {
        cout << "Точка находится в области I\n";
    }
    else {
        cout << "Точка находится в области II\n";
    }
    return 0;
}
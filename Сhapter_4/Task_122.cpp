#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double x, y;
    cout << "Введите координаты точки (x y): ";
    cin >> x >> y;

    if (y > 5.0) {
        cout << "Точка в области I\n";
    }
    else if (y > 2.5) {
        cout << "Точка в области II\n";
    }
    else {
        cout << "Точка в области III\n";
    }

    return 0;
}
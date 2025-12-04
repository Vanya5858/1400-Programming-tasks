#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double x, y;
    cout << "Введите координаты точки (x y): ";
    cin >> x >> y;

    if (x < 1) {
        cout << "Точка в области I\n";
    }
    else if (x < 5) {
        cout << "Точка в области II\n";
    }
    else {
        cout << "Точка в области III\n";
    }

    return 0;
}
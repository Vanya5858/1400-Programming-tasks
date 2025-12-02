#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double a, b, c;
    cout << "Введите стороны треугольника: ";
    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a) {
        cout << "Треугольник существует\n";
    }
    else {
        cout << "Треугольник не существует\n";
    }

    return 0;
}
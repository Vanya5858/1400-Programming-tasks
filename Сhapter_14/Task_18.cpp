#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double triangleAreaByCoords(double x1, double y1, double x2, double y2, double x3, double y3) {
    return 0.5 * abs((x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1));
}

int main() {
    setlocale(LC_ALL, "RU");

    double x[5], y[5];

    cout << "Введите координаты вершин пятиугольника:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Вершина " << i + 1 << " (x" << i + 1 << " y" << i + 1 << "): ";
        cin >> x[i] >> y[i];
    }

    // Разбиваем пятиугольник на треугольники от вершины (x1,y1)
    double totalArea = 0;
    for (int i = 1; i < 4; i++) {
        totalArea += triangleAreaByCoords(x[0], y[0], x[i], y[i], x[i + 1], y[i + 1]);
    }

    cout << fixed << setprecision(2);
    cout << "\nПлощадь пятиугольника = " << totalArea << endl;

    return 0;
}
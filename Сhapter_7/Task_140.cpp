#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    const double M_PI = 3.1415926535;
    cout << "Введите количество кругов: ";
    cin >> n;

    double minRadius = 1e9, area, radius;

    for (int i = 0; i < n; i++) {
        cin >> area;
        radius = sqrt(area / M_PI);
        if (radius < minRadius) {
            minRadius = radius;
        }
    }

    cout << "Радиус самого маленького круга: " << minRadius << endl;
    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double alpha, v0, R, H, P;
    const double g = 9.8;

    cout << "Введите угол A (в радианах): ";
    cin >> alpha;
    cout << "Введите начальную скорость v0: ";
    cin >> v0;
    cout << "Введите расстояние до цели R: ";
    cin >> R;
    cout << "Введите высоту цели H: ";
    cin >> H;
    cout << "Введите высоту цели P: ";
    cin >> P;

    // Время полета до цели
    double t = R / (v0 * cos(alpha));

    // Высота снаряда в момент времени t
    double y = v0 * t * sin(alpha) - (g * t * t) / 2;

    if (y >= H && y <= H + P) {
        cout << "Снаряд поразит цель\n";
    }
    else {
        cout << "Снаряд не поразит цель\n";
    }

    return 0;
}
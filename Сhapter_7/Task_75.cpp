#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    double alpha, v0, R, H, P;
    const double g = 9.8;
    int hits = 0;

    cout << "Введите количество выстрелов n: ";
    cin >> n;
    cout << "Введите параметры цели (R, H, P): ";
    cin >> R >> H >> P;

    cout << "Введите " << n << " пар значений (угол A в радианах, начальная скорость v0):\n";

    for (int i = 0; i < n; i++) {
        cin >> alpha >> v0;

        // Время полёта до цели на расстоянии R
        double t = R / (v0 * cos(alpha));

        // Высота снаряда в этот момент
        double y = v0 * t * sin(alpha) - g * t * t / 2;

        // Попадание, если высота снаряда между H и H+P
        if (y >= H && y <= H + P)
            hits++;
    }

    double percentage = (double)hits / n * 100;
    cout << "Процент попаданий: " << percentage << "%";

    return 0;
}
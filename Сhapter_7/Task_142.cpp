#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int N = 20;
    double maxDensity = 0;

    cout << "Введите массу (кг) и объем (см^3) 20 тел:\n";
    for (int i = 0; i < N; i++) {
        double mass, volume;
        cin >> mass >> volume;

        double density = mass / (volume * 1e-6);
        if (density > maxDensity) {
            maxDensity = density;
        }
    }

    cout << "Максимальная плотность материала: " << maxDensity << " кг/м^3\n";
    return 0;
}
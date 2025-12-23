#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int N = 16;
    double minDensity = 1e9;

    cout << "Введите численность (млн) и площадь (тыс. км^2) 16 государств:\n";
    for (int i = 0; i < N; i++) {
        double population, area;
        cin >> population >> area;

        double density = population / area; // млн/тыс.км² = тыс.чел/км²
        if (density < minDensity) {
            minDensity = density;
        }
    }

    cout << "Минимальная плотность населения: " << minDensity << " тыс.чел/км^2";
    return 0;
}
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const double R = 6350.0; // радиус Земли в км

    cout << "Расстояние до линии горизонта:\n";
    cout << "Радиус Земли: " << R << " км\n\n";
    cout << "Высота (км)  Расстояние (км)\n";
    cout << "----------------------------\n";

    for (int height = 1; height <= 10; height++) {
        double distance = sqrt(height * height + 2 * R * height);
        cout << setw(6) << height << "      " << fixed << setprecision(2) << setw(8) << distance << endl;
    }

    return 0;
}
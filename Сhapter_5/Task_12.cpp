#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const double p0 = 1.29;    
    const double z = 1.25e-4;   

    cout << "Зависимость плотности воздуха от высоты:\n";
    cout << "Высота (м)  Плотность (кг/м³)\n";
    cout << "-----------------------------\n";

    for (int h = 0; h <= 1000; h += 100) {
        double density = p0 * exp(-h * z);
        cout << setw(6) << h << "      " << fixed << setprecision(4) << setw(8) << density << endl;
    }

    return 0;
}
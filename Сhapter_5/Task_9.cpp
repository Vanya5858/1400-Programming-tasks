#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const double INCH_TO_MM = 25.4;
    const double MM_TO_CM = 0.1;

    cout << "Дюймы   Сантиметры\n";
    cout << "------------------\n";

    for (int inches = 10; inches <= 22; inches++) {
        double centimeters = inches * INCH_TO_MM * MM_TO_CM;
        cout << inches << "      " << fixed << setprecision(2) << setw(6) << centimeters << endl;
    }

    return 0;
}
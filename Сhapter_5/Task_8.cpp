#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const double POUND_TO_KG = 0.453; // 1 фунт = 0.453 кг

    cout << "Фунты   Кг\n";
    cout << "------------\n";

    for (int pounds = 1; pounds <= 10; pounds++) {
        double kilograms = pounds * POUND_TO_KG;
        cout << pounds << "    " << fixed << setprecision(3) << kilograms << endl;
    }

    return 0;
}
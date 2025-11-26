#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double pricePerKg;
    cout << "Введите стоимость 1 кг сыра: ";
    cin >> pricePerKg;

    cout << "Вес (г)   Стоимость (руб)\n";
    cout << "------------------------\n";

    for (int weight = 50; weight <= 1000; weight += 50) {
        double cost = (weight / 1000.0) * pricePerKg;
        cout << setw(5) << weight << "     " << fixed << setprecision(2) << cost << endl;
    }

    return 0;
}
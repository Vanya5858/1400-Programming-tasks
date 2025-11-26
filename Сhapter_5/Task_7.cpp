#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double price = 20.4;

    cout << "Стоимость товара:\n";
    for (int i = 2; i <= 20; i++) {
        cout << i << " шт. - " << fixed << setprecision(2) << i * price << " руб.\n";
    }

    return 0;
}
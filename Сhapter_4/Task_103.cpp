#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double x;
    cout << "Введите число: ";
    cin >> x;

    double abs_val = x;
    if (x < 0) abs_val = -x;

    cout << "Абсолютная величина: " << abs_val << endl;

    return 0;
}
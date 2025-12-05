#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double a, product = 1;

    cout << "Введите 8 чисел: ";
    for (int i = 0; i < 8; i++) {
        cin >> a;
        product *= a;
    }

    cout << "Произведение = " << product;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double x;
    cout << "Введите число: ";
    cin >> x;

    if (x > -5 && x < 3) {
        cout << "Число принадлежит интервалу (-5, 3)\n";
    }
    else {
        cout << "Число не принадлежит интервалу (-5, 3)\n";
    }

    return 0;
}
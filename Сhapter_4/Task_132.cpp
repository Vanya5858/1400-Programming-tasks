#include <iostream>
using namespace std;

int main() {
    double x, y;
    cout << "Введите координаты точки (x y, где x!=0 и y!=0): ";
    cin >> x >> y;

    if (x > 0 && y > 0) {
        cout << "Точка в I четверти\n";
    }
    else if (x < 0 && y > 0) {
        cout << "Точка во II четверти\n";
    }
    else if (x < 0 && y < 0) {
        cout << "Точка в III четверти\n";
    }
    else if (x > 0 && y < 0) {
        cout << "Точка в IV четверти\n";
    }

    return 0;
}
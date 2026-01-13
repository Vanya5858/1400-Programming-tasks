#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int a, b;
    cout << "Введите два натуральных числа: ";
    cin >> a >> b;

    int x = a, y = b;

    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }

    cout << "Наибольший общий делитель чисел " << a << " и " << b
        << " равен: " << x << endl;

    return 0;
}
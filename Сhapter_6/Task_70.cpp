#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int a, b;
    cout << "Введите размеры прямоугольника (a b): ";
    cin >> a >> b;

    cout << "Размеры прямоугольника: " << a << "*" << b << endl;
    int totalSquares = 0;

    cout << "Разрезание на максимальные квадраты:" << endl;
    while (a > 0 && b > 0) {
        if (a >= b) {
            int count = a / b;
            cout << "Квадратов со стороной " << b << ": " << count << endl;
            a %= b;
            totalSquares += count;
        }
        else {
            int count = b / a;
            cout << "Квадратов со стороной " << a << ": " << count << endl;
            b %= a;
            totalSquares += count;
        }
    }

    cout << "Всего квадратов: " << totalSquares << endl;

    return 0;
}
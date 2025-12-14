#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double a;
    cout << "Введите a (0 < a <= 1): ";
    cin >> a;

    // Вариант 1: цикл while
    int n = 1;
    while (1.0 / n >= a) {
        n++;
    }
    cout << "Первая дробь < a (while): 1/" << n << " = " << 1.0 / n << endl;

    // Вариант 2: цикл for
    int m;
    for (m = 1; 1.0 / m >= a; m++) {}
    cout << "Первая дробь < a (for): 1/" << m << " = " << 1.0 / m << endl;

    return 0;
}
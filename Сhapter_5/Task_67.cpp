#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;

    cout << "Введите натуральное число n: ";
    cin >> n;

    int cube = 0;
    int start_odd = n * (n - 1) + 1; // первый нечетный для n^3

    for (int i = 0; i < n; i++) {
        cube += start_odd;
        start_odd += 2;
    }

    cout << n << "^3 = " << cube << endl;
    cout << "Проверка: " << n << " * " << n << " * " << n << " = " << n * n * n << endl;

    return 0;
}
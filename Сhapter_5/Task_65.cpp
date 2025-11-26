#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;

    cout << "Введите натуральное число n: ";
    cin >> n;

    int square = 0;
    int odd_number = 1;

    for (int i = 0; i < n; i++) {
        square += odd_number;
        odd_number += 2;
    }

    cout << n << "^2 = " << square << endl;
    cout << "Проверка: " << n << " * " << n << " = " << n * n << endl;

    return 0;
}
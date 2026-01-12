#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int n;
    cout << "Введите n: ";
    cin >> n;

    if (n <= 0) {
        cout << "Некорректное значение n" << endl;
        return 0;
    }

    int* arr = new int[n];

    // Заполняем массив степенями двойки
    for (int i = 0; i < n; i++) {
        arr[i] = pow(2, i + 1);
    }

    // Выводим массив
    cout << "\nСтепени числа 2 от 2¹ до 2ⁿ:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "2^" << (i + 1) << " = " << arr[i] << endl;
    }

    delete[] arr;

    return 0;
}
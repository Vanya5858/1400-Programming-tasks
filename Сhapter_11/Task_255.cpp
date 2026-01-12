#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int a[100], b[100], sum[100], prod[100], max_arr[100];
    int size;

    cout << "Введите размер массивов (до 100): ";
    cin >> size;

    cout << "Введите элементы массива a:\n";
    for (int i = 0; i < size; i++) {
        cout << "a[" << i << "]: ";
        cin >> a[i];
    }

    cout << "\nВведите элементы массива b:\n";
    for (int i = 0; i < size; i++) {
        cout << "b[" << i << "]: ";
        cin >> b[i];
    }

    // а) Сумма элементов
    for (int i = 0; i < size; i++) {
        sum[i] = a[i] + b[i];
    }

    // б) Произведение элементов
    for (int i = 0; i < size; i++) {
        prod[i] = a[i] * b[i];
    }

    // в) Максимальный из элементов
    for (int i = 0; i < size; i++) {
        if (a[i] > b[i]) {
            max_arr[i] = a[i];
        }
        else {
            max_arr[i] = b[i];
        }
    }

    cout << "\nа) Сумма элементов:\n";
    for (int i = 0; i < size; i++) {
        cout << "sum[" << i << "] = " << sum[i] << endl;
    }

    cout << "\nб) Произведение элементов:\n";
    for (int i = 0; i < size; i++) {
        cout << "prod[" << i << "] = " << prod[i] << endl;
    }

    cout << "\nв) Максимальный элемент:\n";
    for (int i = 0; i < size; i++) {
        cout << "max_arr[" << i << "] = " << max_arr[i] << endl;
    }

    return 0;
}
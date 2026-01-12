#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int SIZE = 15;
    int arr[SIZE];

    // Заполняем массив числами
    for (int i = 0; i < SIZE; i++) {
        arr[i] = (i + 1) * 10; // 10, 20, 30, ...
    }

    cout << "Массив: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // а) Второй, четвертый и т.д. элементы
    cout << "\nа) Элементы с четными индексами (начиная с 0):" << endl;
    for (int i = 1; i < SIZE; i += 2) {
        cout << "arr[" << i << "] = " << arr[i] << " ";
    }
    cout << endl;

    // б) Третий, шестой и т.д. элементы
    cout << "\nб) Каждый третий элемент:" << endl;
    for (int i = 2; i < SIZE; i += 3) {
        cout << "arr[" << i << "] = " << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
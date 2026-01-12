#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int SIZE = 10;
    int arr[SIZE] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };

    int index;
    cout << "Введите индекс элемента (0-" << SIZE - 1 << "): ";
    cin >> index;

    if (index >= 0 && index < SIZE) {
        cout << "arr[" << index << "] = " << arr[index] << endl;
    }
    else {
        cout << "Неверный индекс!" << endl;
    }

    // Выводим весь массив для справки
    cout << "\nВесь массив:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }

    return 0;
}
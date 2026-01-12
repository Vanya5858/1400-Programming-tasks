#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int SIZE = 15;
    int arr[SIZE];

    // Заполняем массив
    for (int i = 0; i < SIZE; i++) {
        arr[i] = (i + 1) * 5; // 5, 10, 15, ...
    }

    cout << "Весь массив: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "\nЭлементы на четных местах (второй, четвертый, ...):" << endl;
    for (int i = 1; i < SIZE; i += 2) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Элементы на нечетных местах (первый, третий, ...):" << endl;
    for (int i = 0; i < SIZE; i += 2) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
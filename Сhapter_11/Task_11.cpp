#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int SIZE = 27; // 25 чисел + 2 дополнительных
    int arr[SIZE];

    // Заполняем первыми 25 натуральными числами
    for (int i = 0; i < 25; i++) {
        arr[i] = i + 1;
    }

    // Добавляем числа 100 и 200
    arr[25] = 100;
    arr[26] = 200;

    // Выводим массив
    cout << "Массив (27 элементов):" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
        if ((i + 1) % 10 == 0) cout << endl;
    }
    cout << endl;

    return 0;
}
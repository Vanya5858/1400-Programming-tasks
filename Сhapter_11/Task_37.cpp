#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int SIZE = 10;
    double arr[SIZE];

    // Ввод массива
    cout << "Введите " << SIZE << " вещественных чисел:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    int a1;
    double b;
    cout << "Введите индекс a1 (0-" << SIZE - 1 << "): ";
    cin >> a1;
    cout << "Введите число b: ";
    cin >> b;

    if (a1 < 0 || a1 >= SIZE) {
        cout << "Неверный индекс!" << endl;
        return 0;
    }

    // а) Ко всем отрицательным элементам прибавить элемент с номером a1,
    // из всех нулевых вычесть число b. Положительные элементы оставить без изменения
    cout << "\nа) Результат:" << endl;
    for (int i = 0; i < SIZE; i++) {
        double original = arr[i];

        if (arr[i] < 0) {
            arr[i] += arr[a1];
        }
        else if (arr[i] == 0) {
            arr[i] -= b;
        }
        // Положительные элементы не изменяем

        cout << original << " -> " << arr[i];
        if (original > 0) cout << " (не изменился)";
        cout << endl;
    }

    return 0;
}
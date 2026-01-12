#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 10;
    int arr[n];

    cout << "Введите " << n << " элементов массива:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nИсходный массив: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    int newArr[n + 1];

    // а) Вставить число 10 после второго элемента
    for (int i = 0; i < n; i++) newArr[i] = arr[i];

    // Сдвигаем элементы после 2-го вправо
    for (int i = n; i > 2; i--) {
        newArr[i] = newArr[i - 1];
    }
    newArr[2] = 10;  // После второго элемента (индекс 2)

    cout << "а) После вставки 10 после 2-го элемента: ";
    for (int i = 0; i < n + 1; i++) cout << newArr[i] << " ";
    cout << endl;

    // б) Вставить число 100 после m-го элемента
    for (int i = 0; i < n; i++) newArr[i] = arr[i];

    int m;
    cout << "\nВведите номер элемента m для вставки после него (1-" << n << "): ";
    cin >> m;

    if (m >= 1 && m <= n) {
        // Сдвигаем элементы после m-го вправо
        for (int i = n; i > m; i--) {
            newArr[i] = newArr[i - 1];
        }
        newArr[m] = 100;  // После m-го элемента (индекс m)

        cout << "б) После вставки 100 после " << m << "-го элемента: ";
        for (int i = 0; i < n + 1; i++) cout << newArr[i] << " ";
        cout << endl;
    }

    return 0;
}
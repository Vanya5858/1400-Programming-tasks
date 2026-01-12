#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 10;
    int arr[n];

    cout << "Введите " << n << " целых чисел:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nИсходный массив: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    int temp[n];
    int count;

    // а) Удалить все четные элементы, стоящие на нечетных местах
    for (int i = 0; i < n; i++) temp[i] = arr[i];

    count = 0;
    for (int i = 0; i < n; i++) {
        // i - индекс (начинается с 0), место = i+1
        // Нечетное место: (i+1) % 2 != 0
        if (!(temp[i] % 2 == 0 && (i + 1) % 2 != 0)) {
            temp[count++] = temp[i];
        }
    }
    for (int i = count; i < n; i++) temp[i] = 0;

    cout << "а) После удаления четных на нечетных местах: ";
    for (int i = 0; i < n; i++) cout << temp[i] << " ";
    cout << endl;

    // б) Удалить все элементы, кратные 3 или 5
    for (int i = 0; i < n; i++) temp[i] = arr[i];

    count = 0;
    for (int i = 0; i < n; i++) {
        if (!(temp[i] % 3 == 0 || temp[i] % 5 == 0)) {
            temp[count++] = temp[i];
        }
    }
    for (int i = count; i < n; i++) temp[i] = 0;

    cout << "б) После удаления элементов, кратных 3 или 5: ";
    for (int i = 0; i < n; i++) cout << temp[i] << " ";
    cout << endl;

    return 0;
}
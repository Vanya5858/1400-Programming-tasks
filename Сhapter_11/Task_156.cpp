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

    int temp[n];

    // а) Удалить третий элемент
    for (int i = 0; i < n; i++) temp[i] = arr[i];
    for (int i = 2; i < n - 1; i++) {  // начинаем с 3-го элемента (индекс 2)
        temp[i] = temp[i + 1];
    }
    temp[n - 1] = 0;
    cout << "а) После удаления 3-го элемента: ";
    for (int i = 0; i < n; i++) cout << temp[i] << " ";
    cout << endl;

    // б) Удалить k-й элемент
    for (int i = 0; i < n; i++) temp[i] = arr[i];
    int k;
    cout << "\nВведите номер элемента k для удаления (1-" << n << "): ";
    cin >> k;
    if (k >= 1 && k <= n) {
        for (int i = k - 1; i < n - 1; i++) {
            temp[i] = temp[i + 1];
        }
        temp[n - 1] = 0;
        cout << "б) После удаления " << k << "-го элемента: ";
        for (int i = 0; i < n; i++) cout << temp[i] << " ";
        cout << endl;
    }

    return 0;
}
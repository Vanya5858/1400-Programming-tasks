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
    int count;

    // а) Удалить все отрицательные элементы
    for (int i = 0; i < n; i++) temp[i] = arr[i];

    count = 0;
    for (int i = 0; i < n; i++) {
        if (temp[i] >= 0) {
            temp[count++] = temp[i];
        }
    }
    for (int i = count; i < n; i++) temp[i] = 0;

    cout << "а) После удаления всех отрицательных элементов: ";
    for (int i = 0; i < n; i++) cout << temp[i] << " ";
    cout << endl;

    // б) Удалить все элементы, большие данного числа n
    for (int i = 0; i < n; i++) temp[i] = arr[i];

    int limit;
    cout << "\nВведите число для удаления элементов больше него: ";
    cin >> limit;

    count = 0;
    for (int i = 0; i < n; i++) {
        if (temp[i] <= limit) {
            temp[count++] = temp[i];
        }
    }
    for (int i = count; i < n; i++) temp[i] = 0;

    cout << "б) После удаления элементов > " << limit << ": ";
    for (int i = 0; i < n; i++) cout << temp[i] << " ";
    cout << endl;

    // в) Удалить все элементы с n1-го по n2-й
    for (int i = 0; i < n; i++) temp[i] = arr[i];

    int n1, n2;
    cout << "\nВведите n1 и n2 (n1 ≤ n2, 1-" << n << "): ";
    cin >> n1 >> n2;

    if (n1 >= 1 && n2 <= n && n1 <= n2) {
        count = 0;
        for (int i = 0; i < n; i++) {
            if (i < n1 - 1 || i > n2 - 1) {
                temp[count++] = temp[i];
            }
        }
        for (int i = count; i < n; i++) temp[i] = 0;

        cout << "в) После удаления элементов с " << n1 << "-го по " << n2 << "-й: ";
        for (int i = 0; i < n; i++) cout << temp[i] << " ";
        cout << endl;
    }

    return 0;
}
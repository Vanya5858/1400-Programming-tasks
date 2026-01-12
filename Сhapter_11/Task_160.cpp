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

    // а) Удалить первый отрицательный элемент
    for (int i = 0; i < n; i++) temp[i] = arr[i];

    int firstNegativeIndex = -1;
    for (int i = 0; i < n; i++) {
        if (temp[i] < 0) {
            firstNegativeIndex = i;
            break;
        }
    }

    if (firstNegativeIndex != -1) {
        for (int i = firstNegativeIndex; i < n - 1; i++) {
            temp[i] = temp[i + 1];
        }
        temp[n - 1] = 0;
        cout << "а) После удаления первого отрицательного элемента: ";
        for (int i = 0; i < n; i++) cout << temp[i] << " ";
        cout << endl;
    }
    else {
        cout << "а) Отрицательных элементов нет\n";
    }

    // б) Удалить последний четный элемент
    for (int i = 0; i < n; i++) temp[i] = arr[i];

    int lastEvenIndex = -1;
    for (int i = n - 1; i >= 0; i--) {
        if (temp[i] % 2 == 0) {
            lastEvenIndex = i;
            break;
        }
    }

    if (lastEvenIndex != -1) {
        for (int i = lastEvenIndex; i < n - 1; i++) {
            temp[i] = temp[i + 1];
        }
        temp[n - 1] = 0;
        cout << "б) После удаления последнего четного элемента: ";
        for (int i = 0; i < n; i++) cout << temp[i] << " ";
        cout << endl;
    }
    else {
        cout << "б) Четных элементов нет\n";
    }

    return 0;
}
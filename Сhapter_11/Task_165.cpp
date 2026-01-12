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

    int unique[n];
    int uniqueCount = 0;

    for (int i = 0; i < n; i++) {
        bool found = false;
        // Проверяем, встречался ли этот элемент раньше
        for (int j = 0; j < uniqueCount; j++) {
            if (arr[i] == unique[j]) {
                found = true;
                break;
            }
        }
        // Если не встречался - добавляем
        if (!found) {
            unique[uniqueCount++] = arr[i];
        }
    }

    // Заполняем остаток нулями
    for (int i = uniqueCount; i < n; i++) {
        unique[i] = 0;
    }

    cout << "Массив без повторений (первые вхождения): ";
    for (int i = 0; i < n; i++) cout << unique[i] << " ";
    cout << endl;

    return 0;
}
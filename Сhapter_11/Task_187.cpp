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

    // а) Вставить 100 в начало
    int temp1[n + 1];
    temp1[0] = 100;
    for (int i = 0; i < n; i++) {
        temp1[i + 1] = arr[i];
    }

    cout << "\nа) После вставки 100 в начало: ";
    for (int i = 0; i < n + 1; i++) cout << temp1[i] << " ";
    cout << endl;

    // б) Вставить заданное число в начало
    int num;
    cout << "\nВведите число для вставки в начало: ";
    cin >> num;

    int temp2[n + 1];
    temp2[0] = num;
    for (int i = 0; i < n; i++) {
        temp2[i + 1] = arr[i];
    }

    cout << "б) После вставки " << num << " в начало: ";
    for (int i = 0; i < n + 1; i++) cout << temp2[i] << " ";
    cout << endl;

    // в) Вставить заданное число перед элементом с заданным индексом
    int index, value;
    cout << "\nВведите индекс элемента (0-" << n - 1 << ") и число для вставки: ";
    cin >> index >> value;

    if (index >= 0 && index < n) {
        int temp3[n + 1];
        for (int i = 0; i < index; i++) {
            temp3[i] = arr[i];
        }
        temp3[index] = value;
        for (int i = index; i < n; i++) {
            temp3[i + 1] = arr[i];
        }

        cout << "в) После вставки " << value << " перед элементом с индексом " << index << ": ";
        for (int i = 0; i < n + 1; i++) cout << temp3[i] << " ";
        cout << endl;
    }

    return 0;
}
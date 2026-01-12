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

    int num1, num2;
    cout << "\nВведите два числа для вставки: ";
    cin >> num1 >> num2;

    // Находим первый максимальный элемент
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    // Вставляем num1 после любого максимального элемента
    int newArr1[n + 1];
    for (int i = 0; i < n; i++) newArr1[i] = arr[i];

    for (int i = n; i > maxIndex + 1; i--) {
        newArr1[i] = newArr1[i - 1];
    }
    newArr1[maxIndex + 1] = num1;

    // Вставляем num2 перед максимальным элементом
    int newArr2[n + 2];
    for (int i = 0; i < maxIndex; i++) {
        newArr2[i] = newArr1[i];
    }
    newArr2[maxIndex] = num2;
    for (int i = maxIndex; i < n + 1; i++) {
        newArr2[i + 1] = newArr1[i];
    }

    cout << "После вставки чисел " << num1 << " и " << num2 << ": ";
    for (int i = 0; i < n + 2; i++) cout << newArr2[i] << " ";
    cout << endl;

    return 0;
}
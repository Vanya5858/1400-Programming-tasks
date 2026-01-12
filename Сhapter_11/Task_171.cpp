#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int maxSize = 20;
    int arr[maxSize];
    int n;

    cout << "Введите количество элементов (не более " << maxSize << "): ";
    cin >> n;

    if (n > maxSize || n <= 0) {
        cout << "Неверное количество элементов!\n";
        return 1;
    }

    cout << "Введите " << n << " целых чисел:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nИсходный массив: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    int num, a;
    cout << "\nВведите число для вставки: ";
    cin >> num;

    // а) Перед всеми элементами, кратными числу a
    cout << "Введите число a для проверки кратности: ";
    cin >> a;

    int countMultiples = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % a == 0) countMultiples++;
    }

    // Максимальный размер при вставке перед каждым кратным
    cout << "\nа) Для вставки перед элементами, кратными " << a << ":\n";
    cout << "   Кратных элементов найдено: " << countMultiples << endl;
    cout << "   Максимальный размер исходного массива: " << maxSize - countMultiples << endl;

    // б) После всех отрицательных элементов
    int countNegatives = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) countNegatives++;
    }

    cout << "\nб) Для вставки после отрицательных элементов:\n";
    cout << "   Отрицательных элементов найдено: " << countNegatives << endl;
    cout << "   Максимальный размер исходного массива: " << maxSize - countNegatives << endl;

    return 0;
}
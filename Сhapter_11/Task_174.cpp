#include <iostream>
using namespace std;

// Функция проверки, содержит ли число цифру 5
bool hasDigit5(int num) {
    if (num < 0) num = -num;  // Работаем с модулем

    while (num > 0) {
        if (num % 10 == 5) return true;
        num /= 10;
    }
    return false;
}

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

    int num;
    cout << "\nВведите число a для вставки: ";
    cin >> num;

    // Считаем элементы с цифрой 5
    int countWith5 = 0;
    for (int i = 0; i < n; i++) {
        if (hasDigit5(arr[i])) countWith5++;
    }

    cout << "\nЭлементов с цифрой 5: " << countWith5 << endl;
    cout << "Максимальный размер исходного массива: " << maxSize - countWith5 << endl;

    // Показываем, как будет выглядеть результат
    if (countWith5 > 0) {
        cout << "\nПример результата (вставка после элементов с цифрой 5):\n";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
            if (hasDigit5(arr[i])) {
                cout << num << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
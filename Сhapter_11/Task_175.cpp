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

    int num;
    cout << "\nВведите число n для вставки: ";
    cin >> num;

    // Считаем пары соседних элементов с одинаковым знаком
    int countPairs = 0;
    for (int i = 0; i < n - 1; i++) {
        if ((arr[i] > 0 && arr[i + 1] > 0) || (arr[i] < 0 && arr[i + 1] < 0) ||
            (arr[i] == 0 && arr[i + 1] == 0)) {
            countPairs++;
        }
    }

    cout << "\nПар с одинаковым знаком: " << countPairs << endl;
    cout << "Максимальный размер исходного массива: " << maxSize - countPairs << endl;

    return 0;
}
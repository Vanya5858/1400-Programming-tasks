#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 10;
    int arr[n];

    cout << "Введите " << n << " целых чисел:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int duplicateCount = 0;
    int duplicateValue = 0;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                duplicateCount++;
                duplicateValue = arr[i];
                // Проверяем, нет ли других дубликатов
                for (int k = i + 1; k < n; k++) {
                    for (int l = k + 1; l < n; l++) {
                        if (k != j && l != j && arr[k] == arr[l]) {
                            duplicateCount++;
                        }
                    }
                }
                break;
            }
        }
        if (duplicateCount > 0) break;
    }

    if (duplicateCount == 1)
        cout << "В массиве есть только два одинаковых элемента: " << duplicateValue << endl;
    else
        cout << "В массиве более двух одинаковых элементов или их нет.\n";

    return 0;
}
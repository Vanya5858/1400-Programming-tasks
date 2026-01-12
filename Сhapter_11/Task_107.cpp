#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 10;
    int arr[n];

    cout << "Введите " << n << " целых чисел:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int duplicateValue = 0;
    bool found = false;

    for (int i = 0; i < n - 1 && !found; i++) {
        for (int j = i + 1; j < n && !found; j++) {
            if (arr[i] == arr[j]) {
                // Проверяем, нет ли других дубликатов
                bool otherDuplicates = false;
                for (int k = 0; k < n - 1 && !otherDuplicates; k++) {
                    for (int l = k + 1; l < n; l++) {
                        if (k != i && l != j && arr[k] == arr[l]) {
                            otherDuplicates = true;
                            break;
                        }
                    }
                }
                if (!otherDuplicates) {
                    duplicateValue = arr[i];
                    found = true;
                }
            }
        }
    }

    if (found)
        cout << "Два одинаковых элемента: " << duplicateValue << endl;
    else
        cout << "Нет только двух одинаковых элементов.\n";

    return 0;
}
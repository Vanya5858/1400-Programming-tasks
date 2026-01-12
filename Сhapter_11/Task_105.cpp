#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 10;
    int arr[n];

    cout << "Введите " << n << " целых чисел:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    bool hasDuplicates = false;
    for (int i = 0; i < n - 1 && !hasDuplicates; i++) {
        for (int j = i + 1; j < n && !hasDuplicates; j++) {
            if (arr[i] == arr[j]) {
                hasDuplicates = true;
            }
        }
    }

    if (hasDuplicates)
        cout << "В массиве есть одинаковые элементы.\n";
    else
        cout << "В массиве нет одинаковых элементов.\n";

    return 0;
}
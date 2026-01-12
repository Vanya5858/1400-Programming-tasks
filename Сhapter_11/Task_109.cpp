#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 20;
    int arr[n];

    cout << "Введите " << n << " чисел в неубывающей последовательности:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int equalCount = 0;
    int distinctCount = 1; // Первый элемент всегда уникален

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] == arr[i + 1]) {
            equalCount++;
        }
        else {
            distinctCount++;
        }
    }

    cout << "Количество равных соседних элементов: " << equalCount << endl;
    cout << "Количество различных чисел: " << distinctCount << endl;

    return 0;
}
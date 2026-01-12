#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 30;
    int arr[n];

    cout << "Введите " << n << " чисел в неубывающей последовательности:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int distinctCount = 1;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            distinctCount++;
        }
    }

    cout << "Количество различных чисел: " << distinctCount << endl;

    return 0;
}
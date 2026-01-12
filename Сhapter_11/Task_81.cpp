#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 10;
    int arr[n];

    cout << "Введите " << n << " целых чисел:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] % 2 == 0 && arr[i + 1] % 2 == 0) count++;
    }

    cout << "Число пар соседних четных элементов: " << count << endl;
    return 0;
}
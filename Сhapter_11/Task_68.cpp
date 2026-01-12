#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 10;
    int arr[n];

    cout << "Введите " << n << " целых чисел:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0) count++;
    }

    cout << "Количество неотрицательных элементов: " << count << endl;

    return 0;
}
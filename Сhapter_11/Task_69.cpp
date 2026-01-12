#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 10;
    int arr[n];

    cout << "Введите " << n << " целых чисел:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int countDiff = 0, countMultiple = 0;
    int a;
    cout << "Введите число a для проверки кратности: ";
    cin >> a;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] != arr[n - 1]) countDiff++;
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] % a == 0) countMultiple++;
    }

    cout << "Количество элементов, отличных от последнего: " << countDiff << endl;
    cout << "Количество элементов, кратных " << a << ": " << countMultiple << endl;

    return 0;
}
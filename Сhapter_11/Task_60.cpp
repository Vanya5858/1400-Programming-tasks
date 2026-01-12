#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 10;
    int arr[n];

    cout << "Введите " << n << " целых чисел:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int sumOdd = 0, sumMultiple = 0, sumAB = 0;
    int k, a, b;

    cout << "Введите число для проверки кратности: ";
    cin >> k;
    cout << "Введите числа a и b: ";
    cin >> a >> b;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) sumOdd += arr[i];
        if (arr[i] % k == 0) sumMultiple += arr[i];
        if (arr[i] % a == 0 || arr[i] % b == 0) sumAB += arr[i];
    }

    cout << "Сумма нечётных элементов: " << sumOdd << endl;
    cout << "Сумма элементов, кратных " << k << ": " << sumMultiple << endl;
    cout << "Сумма элементов, кратных " << a << " или " << b << ": " << sumAB << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 10;
    int arr[n];

    cout << "Введите " << n << " целых чисел:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int sum1 = 0, sum2 = 0;
    int a;
    cout << "Введите число a: ";
    cin >> a;

    for (int i = 0; i < n; i++) {
        if (arr[i] <= 20) sum1 += arr[i];
        if (arr[i] > a) sum2 += arr[i];
    }

    cout << "Сумма элементов, не превышающих 20: " << sum1 << endl;
    cout << "Сумма элементов, больших " << a << ": " << sum2 << endl;

    return 0;
}
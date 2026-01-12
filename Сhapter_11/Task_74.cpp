#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 15;
    int arr[n];
    int a, b;

    cout << "Введите " << n << " целых чисел:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "Введите границы интервала a и b (b > a): ";
    cin >> a >> b;

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= a && arr[i] <= b) count++;
    }

    cout << "Количество элементов в интервале [" << a << ", " << b << "]: " << count << endl;
    return 0;
}
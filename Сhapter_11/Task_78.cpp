#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 15;
    int arr[n];

    cout << "Введите " << n << " целых чисел:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int even = 0, endsWith5 = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) even++;
        if (arr[i] % 10 == 5 || arr[i] % 10 == -5) endsWith5++;
    }

    cout << "Четных: " << even << ", оканчивающихся на 5: " << endsWith5 << endl;
    return 0;
}
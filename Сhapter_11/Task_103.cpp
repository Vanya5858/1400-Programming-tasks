#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 20;
    int arr[n];

    cout << "Введите " << n << " целых чисел:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int maxSum = 0, maxStart = 0;

    // Первые 5 элементов
    int currentSum = 0;
    for (int i = 0; i < 5; i++) currentSum += arr[i];
    maxSum = currentSum;

    // Скользящее окно
    for (int i = 1; i <= n - 5; i++) {
        currentSum = currentSum - arr[i - 1] + arr[i + 4];
        if (currentSum > maxSum) {
            maxSum = currentSum;
            maxStart = i;
        }
    }

    cout << "Максимальная сумма пяти соседних элементов: " << maxSum << endl;
    cout << "Элементы: ";
    for (int i = maxStart; i < maxStart + 5; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}
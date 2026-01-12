#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 10;
    int arr[n];

    cout << "Введите " << n << " целых чисел:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int sum = 0, sumSquares = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        sumSquares += arr[i] * arr[i];
    }
    if (sum % 2 == 0)
        cout << "Сумма элементов чётная.\n";
    else
        cout << "Сумма элементов нечётная.\n";

    if (sumSquares >= 10000 && sumSquares <= 99999)
        cout << "Сумма квадратов является пятизначным числом.\n";
    else
        cout << "Сумма квадратов не является пятизначным числом.\n";

    return 0;
}
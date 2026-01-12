#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 10;
    int arr[n];

    cout << "Введите " << n << " целых чисел:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 20) sum1 += arr[i];
        if (arr[i] < 50) sum2 += arr[i];
    }

    if (sum1 > 100)
        cout << "Сумма элементов >20 превышает 100.\n";
    else
        cout << "Сумма элементов >20 не превышает 100.\n";

    if (sum2 % 2 == 0)
        cout << "Сумма элементов <50 чётная.\n";
    else
        cout << "Сумма элементов <50 нечётная.\n";

    return 0;
}
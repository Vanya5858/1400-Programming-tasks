#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 15;
    double arr[n];

    cout << "Введите " << n << " вещественных чисел:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int pos = 0, less50 = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) pos++;
        if (arr[i] <= 50.55) less50++;
    }

    if (pos <= 5)
        cout << "Количество положительных не превышает 5.\n";
    else
        cout << "Количество положительных больше 5.\n";

    if (less50 % 4 == 0)
        cout << "Количество элементов <= 50.55 кратно 4.\n";
    else
        cout << "Количество элементов <= 50.55 не кратно 4.\n";

    return 0;
}
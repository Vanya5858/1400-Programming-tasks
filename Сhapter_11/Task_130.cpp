#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 10;
    double arr[n];

    cout << "Введите " << n << " вещественных чисел:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    double max = arr[0], min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }

    if (max - min <= 25)
        cout << "Максимальный элемент превышает минимальный не более чем на 25.\n";
    else
        cout << "Максимальный элемент превышает минимальный более чем на 25.\n";

    if (min < max / 2)
        cout << "Минимальный элемент меньше максимального более чем в 2 раза.\n";
    else
        cout << "Минимальный элемент не меньше максимального в 2 раза.\n";

    return 0;
}
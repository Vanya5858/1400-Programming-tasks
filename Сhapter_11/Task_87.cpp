#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 10;
    double arr[n];

    cout << "Введите " << n << " вещественных чисел:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    double sum = 0;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 10) {
            sum += arr[i];
            count++;
        }
    }

    if (count > 0)
        cout << "Среднее арифметическое элементов >10: " << sum / count << endl;
    else
        cout << "Нет элементов >10.\n";

    return 0;
}
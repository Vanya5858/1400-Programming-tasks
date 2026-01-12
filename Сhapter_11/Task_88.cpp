#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 12;
    double arr[n];
    double m;

    cout << "Введите число m: ";
    cin >> m;

    cout << "Введите " << n << " вещественных чисел:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    double sum = 0;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < m) {
            sum += arr[i];
            count++;
        }
    }

    if (count > 0)
        cout << "Среднее арифметическое элементов <" << m << ": " << sum / count << endl;
    else
        cout << "Нет элементов меньше " << m << ".\n";

    return 0;
}
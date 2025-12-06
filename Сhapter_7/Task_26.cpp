#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    double a, sum = 0;

    cout << "Введите количество чисел n: ";
    cin >> n;
    cout << "Введите " << n << " вещественных чисел: ";

    for (int i = 0; i < n; i++) {
        cin >> a;
        sum += a;
    }

    cout << "Среднее арифметическое = " << sum / n;
    return 0;
}
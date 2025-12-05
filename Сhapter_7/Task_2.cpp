#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    double num, sum = 0;

    cout << "Введите количество чисел n: ";
    cin >> n;
    cout << "Введите " << n << " вещественных чисел: ";

    for (int i = 0; i < n; i++) {
        cin >> num;
        sum += num;
    }

    cout << "Сумма = " << sum;
    return 0;
}
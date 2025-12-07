#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    double b, p, sum = 0;

    cout << "Введите количество чисел n: ";
    cin >> n;
    cout << "Введите значение p: ";
    cin >> p;
    cout << "Введите " << n << " вещественных чисел: ";

    for (int i = 0; i < n; i++) {
        cin >> b;
        if (b > p)
            sum += b;
    }

    cout << "Сумма чисел больше " << p << " => " << sum;
    return 0;
}
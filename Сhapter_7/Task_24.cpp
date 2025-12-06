#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    double d, product = 1;

    cout << "Введите количество чисел n: ";
    cin >> n;
    cout << "Введите " << n << " вещественных чисел: ";

    for (int i = 0; i < n; i++) {
        cin >> d;
        product *= d;
    }

    double s;
    cout << "Введите число s для сравнения: ";
    cin >> s;

    cout << (product > s ? "Произведение больше s" : "Произведение не больше s");
    return 0;
}
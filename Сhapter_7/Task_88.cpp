#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n, a, negativeCount = 0, x;

    cout << "Введите количество чисел n: ";
    cin >> n;
    cout << "Введите значение x: ";
    cin >> x;
    cout << "Введите " << n << " целых чисел: ";

    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a < 0)
            negativeCount++;
    }

    cout << (negativeCount > x ? "Верно: отрицательных больше x" :
        "Неверно: отрицательных не больше x");
    return 0;
}
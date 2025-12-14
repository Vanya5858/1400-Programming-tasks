#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double a;
    cout << "Введите a: ";
    cin >> a;

    double sum = 0;
    int n = 1;

    while (true) {
        sum += 1.0 / n;
        if (sum > a) {
            cout << n << " ";
        }
        n++;
        if (n > 1000) break; // ограничим для безопасности
    }

    return 0;
}
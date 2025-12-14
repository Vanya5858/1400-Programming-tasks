#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double a;
    cout << "Введите a: ";
    cin >> a;

    double sum = 0;
    int n = 1;

    while (sum <= a) {
        sum += 1.0 / n;
        n++;
    }

    cout << "Наименьшее n: " << n - 1 << endl;
    return 0;
}
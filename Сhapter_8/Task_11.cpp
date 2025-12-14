#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double limit;
    cout << "Введите число n: ";
    cin >> limit;

    double sum = 0;
    int n = 1;
    while (sum <= limit) {
        sum += 1.0 / n;
        n++;
    }
    cout << "Первая сумма > n: " << sum << " при n = " << n - 1 << endl;
    return 0;
}
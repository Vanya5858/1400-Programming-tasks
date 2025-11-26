#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите натуральное число n: ";
    cin >> n;

    double sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }

    cout << "1 + 1/2 + 1/3 + ... + 1/" << n << " = " << sum << endl;

    return 0;
}
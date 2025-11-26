#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите натуральное число n: ";
    cin >> n;

    long long sum = 0;
    for (int i = n; i <= 2 * n; i++) {
        sum += (long long)i * i;
    }

    cout << n << "^2 + " << n + 1 << "^2 + ... + " << 2 * n << "^2 = " << sum << endl;

    return 0;
}
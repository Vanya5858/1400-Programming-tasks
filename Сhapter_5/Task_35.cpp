#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите натуральное число n (n >= 2): ";
    cin >> n;

    long long sum = 0;
    for (int i = 1; i <= n - 1; i++) {
        sum += (long long)i * (i + 1);
    }

    cout << "1*2 + 2*3 + ... + (" << n - 1 << ")*" << n << " = " << sum << endl;

    return 0;
}
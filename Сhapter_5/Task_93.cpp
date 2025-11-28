#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите натуральное число: ";
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    if (sum == n) {
        cout << "Число " << n << " совершенное\n";
    }
    else {
        cout << "Число " << n << " не совершенное\n";
    }

    return 0;
}
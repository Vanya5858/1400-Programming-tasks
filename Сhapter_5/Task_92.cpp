#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите натуральное число: ";
    cin >> n;

    if (n <= 1) {
        cout << "Число " << n << " не является простым\n";
        return 0;
    }

    bool is_prime = true;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            is_prime = false;
            break;
        }
    }

    if (is_prime) {
        cout << "Число " << n << " простое\n";
    }
    else {
        cout << "Число " << n << " составное\n";
    }

    return 0;
}
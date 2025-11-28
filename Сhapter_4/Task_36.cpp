#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите натуральное число: ";
    cin >> n;

    int last_digit = n % 10;

    // а) заканчивается четной цифрой
    if (last_digit % 2 == 0) {
        cout << "а) Число заканчивается четной цифрой\n";
    }
    else {
        cout << "а) Число не заканчивается четной цифрой\n";
    }

    // б) заканчивается нечетной цифрой
    if (last_digit % 2 != 0) {
        cout << "б) Число заканчивается нечетной цифрой\n";
    }
    else {
        cout << "б) Число не заканчивается нечетной цифрой\n";
    }

    return 0;
}
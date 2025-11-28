#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите n (количество членов последовательности Фибоначчи): ";
    cin >> n;

    if (n < 1) {
        cout << "n должно быть >= 1\n";
        return 1;
    }

    long long a = 1, b = 1, sum = 2;
    cout << "Последовательность: 1 1 ";
    for (int i = 3; i <= n; i++) {
        long long c = a + b;
        sum += c;
        a = b;
        b = c;
        cout << c << " ";
    }

    cout << "\nСумма первых " << n << " членов: " << sum << endl;
    cout << "Сумма " << (sum % 2 == 0 ? "четная" : "нечетная") << endl;
    return 0;
}
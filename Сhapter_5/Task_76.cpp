#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int a, b, c;

    cout << "Введите начало интервала a: ";
    cin >> a;
    cout << "Введите конец интервала b: ";
    cin >> b;
    cout << "Введите число c: ";
    cin >> c;

    cout << "Числа из интервала [" << a << ", " << b << "], кратные " << c << ":\n";

    int count = 0;
    // Находим первое число, кратное c, в интервале
    int first_multiple = a;
    if (a % c != 0) {
        first_multiple = a + (c - a % c);
    }

    for (int i = first_multiple; i <= b; i += c) {
        cout << i << " ";
        count++;
        if (count % 10 == 0) cout << endl;
    }

    cout << "\nВсего чисел: " << count << endl;

    return 0;
}
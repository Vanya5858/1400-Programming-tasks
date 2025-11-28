#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;

    cout << "Введите цифру n (0-9): ";
    cin >> n;

    if (n < 0 || n > 9) {
        cout << "Ошибка: n должно быть цифрой от 0 до 9\n";
        return 1;
    }

    cout << "Двузначные числа, которые делятся на " << n << " или содержат цифру " << n << ":\n";

    int count = 0;
    for (int i = 10; i <= 99; i++) {
        bool divisible = (n != 0) ? (i % n == 0) : false; // делятся на n (кроме n=0)
        bool contains_digit = (i / 10 == n) || (i % 10 == n); // содержат цифру n

        if (divisible || contains_digit) {
            cout << i << " ";
            count++;
            if (count % 10 == 0) cout << endl;

            // Выводим причину выбора
            if (divisible && contains_digit) {
                cout << "(делится и содержит) ";
            }
            else if (divisible) {
                cout << "(делится) ";
            }
            else {
                cout << "(содержит) ";
            }
        }
    }

    cout << "\nВсего чисел: " << count << endl;

    return 0;
}
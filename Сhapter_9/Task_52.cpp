#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int p, q;
    cout << "Введите p: ";
    cin >> p;
    cout << "Введите q: ";
    cin >> q;

    cout << "\nДелители числа " << q << ", взаимно простые с " << p << ":" << endl;

    int count = 0;

    for (int d = 1; d <= q; d++) {
        if (q % d == 0) {
            // Проверяем НОД(d, p)
            int a = d, b = p;
            while (b != 0) {
                int temp = b;
                b = a % b;
                a = temp;
            }

            if (a == 1) {
                cout << d << " ";
                count++;

                if (count % 10 == 0) {
                    cout << endl;
                }
            }
        }
    }

    cout << "\n\nВсего: " << count << " делителей" << endl;

    // Выводим все делители для сравнения
    cout << "\nВсе делители " << q << ": ";
    for (int d = 1; d <= q; d++) {
        if (q % d == 0) {
            cout << d << " ";
        }
    }
    cout << endl;

    return 0;
}
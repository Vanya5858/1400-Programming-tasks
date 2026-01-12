#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int limit = 10000; // Достаточно большой предел для поиска
    bool found = false;

    for (int n = 1; n <= limit && !found; n++) {
        int ways = 0;

        // Храним найденные пары
        int a1 = 0, b1 = 0, a2 = 0, b2 = 0;

        for (int a = 1; a * a * a <= n && ways < 2; a++) {
            int a3 = a * a * a;

            for (int b = a; a3 + b * b * b <= n && ways < 2; b++) {
                int b3 = b * b * b;

                if (a3 + b3 == n) {
                    ways++;
                    if (ways == 1) {
                        a1 = a;
                        b1 = b;
                    }
                    else if (ways == 2) {
                        a2 = a;
                        b2 = b;
                    }
                }
            }
        }

        if (ways >= 2) {
            found = true;
            cout << "Найдено число: " << n << endl;
            cout << "Первый способ: " << a1 << "^3 + " << b1 << "^3 = "
                << a1 * a1 * a1 << " + " << b1 * b1 * b1 << " = " << n << endl;
            cout << "Второй способ: " << a2 << "^3 + " << b2 << "^3 = "
                << a2 * a2 * a2 << " + " << b2 * b2 * b2 << " = " << n << endl;
        }
    }

    if (!found) {
        cout << "В пределах " << limit << " такое число не найдено" << endl;
        cout << "Известное такое число: 1729 = 1^3 + 12^3 = 9^3 + 10^3" << endl;
        cout << "1729 = " << 1 * 1 * 1 << " + " << 12 * 12 * 12 << " = " << 1 + 1728 << endl;
        cout << "1729 = " << 9 * 9 * 9 << " + " << 10 * 10 * 10 << " = " << 729 + 1000 << endl;
    }

    return 0;
}
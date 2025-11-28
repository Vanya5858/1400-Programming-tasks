#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    cout << "Нечетные двузначные числа, у которых последняя цифра равна 3 или 7:\n";

    int count = 0;
    for (int i = 10; i <= 99; i++) {
        if (i % 2 != 0) { // нечетное
            int last_digit = i % 10;
            if (last_digit == 3 or last_digit == 7) {
                cout << i << " ";
                count++;
                if (count % 10 == 0) cout << endl;
            }
        }
    }

    cout << "\nВсего чисел: " << count << endl;

    return 0;
}
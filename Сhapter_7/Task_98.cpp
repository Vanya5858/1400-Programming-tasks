#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int d[20];
    bool foundOddPair = false;
    int firstIndex = -1;

    cout << "Введите 20 натуральных чисел: ";

    for (int i = 0; i < 20; i++) {
        cin >> d[i];
    }

    for (int i = 0; i < 19 && !foundOddPair; i++) {
        if (d[i] % 2 != 0 && d[i + 1] % 2 != 0) {
            foundOddPair = true;
            firstIndex = i + 1;
        }
    }

    if (foundOddPair) {
        cout << "Есть пара соседних нечётных чисел\n";
        cout << "Порядковые номера: " << firstIndex << " и " << firstIndex + 1;
    }
    else {
        cout << "Нет пар соседних нечётных чисел";
    }

    return 0;
}
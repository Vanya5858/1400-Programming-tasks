#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int a[15];
    bool foundPair = false;
    int firstIndex = -1;

    cout << "Введите 15 натуральных чисел: ";

    for (int i = 0; i < 15; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < 14 && !foundPair; i++) {
        if (a[i] == a[i + 1]) {
            foundPair = true;
            firstIndex = i + 1;
        }
    }

    if (foundPair) {
        cout << "Есть пара одинаковых соседних чисел\n";
        cout << "Порядковые номера: " << firstIndex << " и " << firstIndex + 1;
    }
    else {
        cout << "Нет пар одинаковых соседних чисел";
    }

    return 0;
}
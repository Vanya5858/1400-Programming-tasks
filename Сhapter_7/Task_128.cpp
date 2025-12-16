#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int SIZE = 12;
    int b[SIZE];

    cout << "Введите 12 натуральных чисел: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> b[i];
    }

    int firstIndex = -1;
    for (int i = 0; i < SIZE; i++) {
        if (b[i] % 10 == 7) {
            firstIndex = i + 1;
            break;
        }
    }

    if (firstIndex != -1) {
        cout << "Номер первого числа, оканчивающегося на 7: " << firstIndex << endl;
    }
    else {
        cout << "Таких чисел нет\n";
    }

    return 0;
}
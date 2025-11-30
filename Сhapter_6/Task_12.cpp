#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int number;

    cout << "Введите последовательность чисел (0 - конец):\n";

    do {
        cin >> number;
        if (number != 0) {
            cout << "Вы ввели число: " << number << endl;
        }
    } while (number != 0);

    cout << "Конец последовательности\n";

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int num, first;
    bool allEqual = true;
    bool firstRead = false;

    cout << "Введите последовательность целых чисел (оканчивается отрицательным): ";

    while (true) {
        cin >> num;
        if (num < 0) break;

        if (!firstRead) {
            first = num;
            firstRead = true;
        }
        else if (num != first) {
            allEqual = false;
        }
    }

    if (!firstRead) {
        cout << "Последовательность пуста";
    }
    else {
        cout << (allEqual ? "Все элементы равны" : "Не все элементы равны");
    }

    return 0;
}
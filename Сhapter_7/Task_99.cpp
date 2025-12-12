#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int num, prev;
    bool foundEvenPair = false;
    int count = 1;
    int firstIndex = -1;

    cout << "Введите последовательность целых чисел (оканчивается 9999): ";

    cin >> prev;
    if (prev == 9999) {
        cout << "Последовательность слишком короткая";
        return 0;
    }

    while (true) {
        cin >> num;
        if (num == 9999) break;

        count++;

        if (!foundEvenPair && prev % 2 == 0 && num % 2 == 0) {
            foundEvenPair = true;
            firstIndex = count - 1;
        }

        prev = num;
    }

    if (foundEvenPair) {
        cout << "Есть пара соседних чётных чисел\n";
        cout << "Порядковые номера: " << firstIndex << " и " << firstIndex + 1;
    }
    else {
        cout << "Нет пар соседних чётных чисел";
    }

    return 0;
}
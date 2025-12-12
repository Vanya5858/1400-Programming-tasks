#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int num, prev;
    bool foundPair = false;
    int count = 1;
    int firstIndex = -1;

    cout << "Введите последовательность целых чисел (оканчивается -1): ";

    cin >> prev;
    if (prev == -1) {
        cout << "Последовательность слишком короткая";
        return 0;
    }

    while (true) {
        cin >> num;
        if (num == -1) break;

        count++;

        if (!foundPair && num == prev) {
            foundPair = true;
            firstIndex = count - 1; 
        }

        prev = num;
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
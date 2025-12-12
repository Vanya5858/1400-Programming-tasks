#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double num, prev;
    bool isOrdered = true;
    int count = 1;
    int firstWrongIndex = -1;

    cout << "Введите последовательность вещественных чисел (оканчивается 10000): ";

    cin >> prev;
    if (prev == 10000) {
        cout << "Последовательность слишком короткая";
        return 0;
    }

    while (true) {
        cin >> num;
        if (num == 10000) break;

        count++;

        if (isOrdered && num < prev) {
            isOrdered = false;
            firstWrongIndex = count; 
        }

        prev = num;
    }

    if (isOrdered) {
        cout << "Последовательность упорядочена по возрастанию";
    }
    else {
        cout << "Последовательность не упорядочена по возрастанию\n";
        cout << "Порядковый номер первого числа, нарушающего упорядоченность: "
            << firstWrongIndex;
    }

    return 0;
}
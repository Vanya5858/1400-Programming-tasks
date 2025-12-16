#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int num, count = 0, firstIndex = -1;

    cout << "Введите последовательность целых чисел, оканчивающуюся -1: ";
    while (true) {
        cin >> num;
        count++;
        if (num == -1) break;
        if (num % 7 == 0 && firstIndex == -1) {
            firstIndex = count;
        }
    }

    if (firstIndex != -1) {
        cout << "Номер первого числа, кратного 7: " << firstIndex << endl;
    }
    else {
        cout << "Чисел, кратных 7, нет\n";
    }

    return 0;
}
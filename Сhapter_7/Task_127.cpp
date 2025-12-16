#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int num, count = 0, firstIndex = -1;

    cout << "Введите последовательность целых чисел, оканчивающуюся 100: ";
    while (true) {
        cin >> num;
        count++;
        if (num == 100) break;
        if (num == 666 && firstIndex == -1) {
            firstIndex = count;
        }
    }

    if (firstIndex != -1) {
        cout << "Номер первого числа 666: " << firstIndex << endl;
    }
    else {
        cout << "Числа 666 нет в последовательности\n";
    }

    return 0;
}
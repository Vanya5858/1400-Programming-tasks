#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int num, prev, count = 0, totalEqual = 0;
    bool first = true;

    cout << "Введите последовательность вещественных чисел, оканчивающуюся 1000: ";
    while (true) {
        cin >> num;
        if (num == 1000) break;

        if (first) {
            prev = num;
            first = false;
        }
        else {
            if (num == prev) {
                count++;
            }
            else {
                if (count > 0) totalEqual += count + 1;
                count = 0;
                prev = num;
            }
        }
    }
    // Учитываем последнюю группу
    if (count > 0) totalEqual += count + 1;

    cout << "Количество подряд идущих равных чисел: " << totalEqual << endl;
    return 0;
}
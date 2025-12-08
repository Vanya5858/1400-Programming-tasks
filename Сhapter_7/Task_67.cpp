#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double num;
    int countBeforeZero = 0;

    cout << "Введите последовательность вещественных чисел (завершается 0): ";

    while (true) {
        cin >> num;
        if (num == 0)
            break;
        countBeforeZero++;
    }

    cout << "Количество чисел перед первым нулём: " << countBeforeZero;
    return 0;
}
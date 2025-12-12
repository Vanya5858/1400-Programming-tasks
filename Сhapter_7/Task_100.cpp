#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double x[15];
    bool isOrdered = true;
    int firstWrongIndex = -1;

    cout << "Введите 15 вещественных чисел: ";

    cin >> x[0];

    for (int i = 1; i < 15; i++) {
        cin >> x[i];

        if (isOrdered && x[i] < x[i - 1]) {
            isOrdered = false;
            firstWrongIndex = i + 1;
        }
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
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int SIZE = 15;
    double y[SIZE];

    cout << "Введите 15 вещественных чисел (по возрастанию): ";
    for (int i = 0; i < SIZE; i++) {
        cin >> y[i];
    }

    double n;
    cout << "Введите число n (не равное элементам последовательности): ";
    cin >> n;

    // а) Сумма чисел, меньших n
    double sum = 0;
    int i = 0;
    while (i < SIZE && y[i] < n) {
        sum += y[i];
        i++;
    }
    cout << "Сумма чисел < n: " << sum << endl;

    // б) Два элемента, между которыми находится n
    for (i = 0; i < SIZE - 1; i++) {
        if (y[i] < n && n < y[i + 1]) {
            cout << "n находится между элементами " << i + 1 << " (" << y[i]
                << ") и " << i + 2 << " (" << y[i + 1] << ")\n";
            break;
        }
    }

    return 0;
}
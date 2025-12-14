#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double m;
    cout << "Введите m (0.5 < m < 1): ";
    cin >> m;

    // Вариант 1: цикл while
    int i = 1;
    while (i / (i + 1.0) < m) {
        cout << i / (i + 1.0) << " ";
        i++;
    }
    cout << endl;

    // Вариант 2: цикл for
    for (int j = 1; j / (j + 1.0) < m; j++) {
        cout << j / (j + 1.0) << " ";
    }

    return 0;
}
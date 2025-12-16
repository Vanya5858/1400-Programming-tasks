#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int m;
    cout << "Введите количество чисел m: ";
    cin >> m;

    int lastIndex = -1;

    cout << "Введите " << m << " целых чисел: ";
    for (int i = 1; i <= m; i++) {
        int num;
        cin >> num;
        if (abs(num) % 100 == 12) { // оканчивается на 12
            lastIndex = i;
        }
    }

    if (lastIndex != -1) {
        cout << "Номер последнего числа, оканчивающегося на 12: " << lastIndex << endl;
    }
    else {
        cout << "Таких чисел нет\n";
    }

    return 0;
}
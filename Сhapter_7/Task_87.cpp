#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int m, d, positiveCount = 0;

    cout << "Введите количество чисел m: ";
    cin >> m;
    cout << "Введите " << m << " целых чисел: ";

    for (int i = 0; i < m; i++) {
        cin >> d;
        if (d > 0)
            positiveCount++;
    }

    cout << (positiveCount % 3 == 0 ?
        "Верно: количество положительных кратно 3" :
        "Неверно: количество положительных не кратно 3");
    return 0;
}
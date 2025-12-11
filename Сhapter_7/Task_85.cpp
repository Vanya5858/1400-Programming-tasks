#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double x;
    int countNotGreater33_2 = 0;

    cout << "Введите 15 вещественных чисел: ";
    for (int i = 0; i < 15; i++) {
        cin >> x;
        if (x <= 33.2)
            countNotGreater33_2++;
    }

    cout << (countNotGreater33_2 % 4 == 0 ?
        "Верно: количество кратно 4" :
        "Неверно: количество не кратно 4");
    return 0;
}
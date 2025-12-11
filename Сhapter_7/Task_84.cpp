#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int a, positiveCount = 0;

    cout << "Введите 10 целых чисел: ";
    for (int i = 0; i < 10; i++) {
        cin >> a;
        if (a > 0)
            positiveCount++;
    }

    cout << (positiveCount <= 5 ? "Верно: положительных не более 5" :
        "Неверно: положительных больше 5");
    return 0;
}
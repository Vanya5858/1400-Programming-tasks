#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n, c, countLess20 = 0;

    cout << "Введите количество чисел n: ";
    cin >> n;
    cout << "Введите " << n << " целых чисел: ";

    for (int i = 0; i < n; i++) {
        cin >> c;
        if (c < 20)
            countLess20++;
    }

    cout << (countLess20 == 5 ? "Верно: ровно 5 чисел меньше 20" :
        "Неверно: не ровно 5 чисел меньше 20");
    return 0;
}
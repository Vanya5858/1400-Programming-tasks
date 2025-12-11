#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int m, a, countGreaterM = 0, p;

    cout << "Введите количество чисел m: ";
    cin >> m;
    cout << "Введите число для сравнения: ";
    cin >> p;
    cout << "Введите " << m << " целых чисел: ";

    for (int i = 0; i < m; i++) {
        cin >> a;
        if (a > m)
            countGreaterM++;
    }

    cout << (countGreaterM % p == 0 ?
        "Верно: количество чисел > m кратно p" :
        "Неверно: количество чисел > m не кратно p");
    return 0;
}
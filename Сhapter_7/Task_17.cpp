#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int a, sum = 0;

    cout << "Введите 9 целых чисел: ";
    for (int i = 0; i < 9; i++) {
        cin >> a;
        sum += a;
    }

    cout << (sum % 2 == 0 ? "Сумма чётная" : "Сумма нечётная");
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int power = 4; // начинаем с 2^2

    for (int i = 2; i <= 10; i++) {
        power *= 2; // умножаем на 2 для получения следующей степени
        sum += power;
    }

    cout << "Сумма 2^2 + 2^3 + ... + 2^10 = " << sum << endl;

    return 0;
}
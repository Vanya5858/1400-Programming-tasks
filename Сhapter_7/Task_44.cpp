#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int a, sum = 0;

    cout << "Введите 20 целых чисел: ";
    for (int i = 1; i <= 20; i++) {
        cin >> a;
        if (i % 2 == 0)
            sum += a;
    }

    cout << "Сумма элементов на чётных позициях = " << sum;
    return 0;
}
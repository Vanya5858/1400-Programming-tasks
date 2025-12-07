#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int num, sum = 0;

    cout << "Введите 10 целых чисел: ";
    for (int i = 0; i < 10; i++) {
        cin >> num;
        if (num % 10 == 0)
            sum += num;
    }

    cout << "Сумма чисел, оканчивающихся нулём = " << sum;
    return 0;
}
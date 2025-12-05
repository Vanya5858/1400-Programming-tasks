#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double a, sumSquares = 0;

    cout << "Введите 10 чисел: ";
    for (int i = 0; i < 10; i++) {
        cin >> a;
        sumSquares += a * a;
    }

    cout << "Сумма квадратов = " << sumSquares;
    return 0;
}
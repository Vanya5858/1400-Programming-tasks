#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    cout << "(дружественные - каждое равно сумме делителей другого)" << endl;

    cout << "\nПоиск дружественных пар:" << endl;
    cout << "-----------------------" << endl;

    int foundPairs = 0;

    for (int a = 2; a < 50000; a++) {
        // Сумма делителей для числа a
        int sumA = 0;
        for (int d = 1; d <= a / 2; d++) {
            if (a % d == 0) {
                sumA += d;
            }
        }

        // Если сумма делителей a больше a и меньше 50000
        if (sumA > a && sumA < 50000) {
            // Сумма делителей для числа sumA
            int sumB = 0;
            for (int d = 1; d <= sumA / 2; d++) {
                if (sumA % d == 0) {
                    sumB += d;
                }
            }

            // Проверяем, являются ли числа дружественными
            if (sumB == a && a != sumA) {
                cout << "Найдена пара: " << a << " и " << sumA << endl;
                cout << a << ": ";
                for (int d = 1; d <= a / 2; d++) {
                    if (a % d == 0) cout << d << " ";
                }
                cout << "= " << sumA << endl;

                cout << sumA << ": ";
                for (int d = 1; d <= sumA / 2; d++) {
                    if (sumA % d == 0) cout << d << " ";
                }
                cout << "= " << a << endl << endl;

                foundPairs++;
            }
        }
    }

    if (foundPairs == 0) {
        cout << "Дружественных пар не найдено" << endl;
    }
    else {
        cout << "Всего найдено пар: " << foundPairs << endl;
    }

    return 0;
}
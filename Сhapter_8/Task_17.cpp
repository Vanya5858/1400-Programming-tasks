#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double num1 = 1.0, den1 = 1.0; // 1/1
    double num2 = 2.0, den2 = 1.0; // 2/1

    while (true) {
        double val1 = num1 / den1;
        double val2 = num2 / den2;

        if (abs(val2 - val1) <= 0.001) {
            cout << "Первый подходящий член: " << val2 << endl;
            break;
        }

        // Генерируем следующий член
        double new_num = num1 + num2;
        double new_den = den1 + den2;

        num1 = num2;
        den1 = den2;
        num2 = new_num;
        den2 = new_den;
    }

    return 0;
}
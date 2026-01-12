#include <iostream>
using namespace std;

// Функция для нахождения НОД
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    setlocale(LC_ALL, "RU");

    cout << "Знаменатели не превышают 7" << endl;

    cout << "\nПростые несократимые дроби:" << endl;
    cout << "(числитель/знаменатель)" << endl;
    cout << "--------------------------" << endl;

    int count = 0;

    // Перебираем все возможные дроби
    for (int denominator = 2; denominator <= 7; denominator++) {
        for (int numerator = 1; numerator < denominator; numerator++) {
            // Дробь должна быть между 0 и 1 (числитель < знаменатель)
            // Проверяем несократимость (НОД = 1)
            if (gcd(numerator, denominator) == 1) {
                cout << numerator << "/" << denominator << " ";
                count++;

                if (count % 8 == 0) {
                    cout << endl;
                }
            }
        }
    }

    cout << "\n\nВсего дробей: " << count << endl;

    // Выводим в виде десятичных дробей для наглядности
    cout << "\nВ десятичном виде:" << endl;
    cout << "----------------" << endl;

    count = 0;
    for (int denominator = 2; denominator <= 7; denominator++) {
        for (int numerator = 1; numerator < denominator; numerator++) {
            if (gcd(numerator, denominator) == 1) {
                double decimal = (double)numerator / denominator;
                cout << numerator << "/" << denominator << " = " << decimal;

                if (decimal < 0.5) cout << " < 1/2";
                else if (decimal > 0.5) cout << " > 1/2";
                else cout << " = 1/2";

                cout << endl;
                count++;
            }
        }
    }

    return 0;
}
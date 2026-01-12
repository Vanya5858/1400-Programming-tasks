#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int n;
    cout << "Введите n: ";
    cin >> n;

    cout << "\nЧисло и его делители (+):" << endl;
    cout << "-----------------------" << endl;

    for (int i = 1; i <= n; i++) {
        int divisors = 0;

        // Считаем делители
        for (int d = 1; d <= i; d++) {
            if (i % d == 0) {
                divisors++;
            }
        }

        // Выводим число и символы +
        cout << i << " ";
        for (int j = 0; j < divisors; j++) {
            cout << "+";
        }
        cout << endl;
    }

    return 0;
}
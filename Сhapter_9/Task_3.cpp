#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    // Вариант а: строки фиксированы (1-9), столбцы меняются (1-9)
    cout << "\nа) Вариант:" << endl;
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            cout << i << "*" << j << "=" << i * j << "\t";
        }
        cout << endl;
    }

    // Вариант б: столбцы фиксированы (1-9), строки меняются (1-9)
    cout << "\nб) Вариант:" << endl;
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            cout << j << "*" << i << "=" << j * i << "\t";
        }
        cout << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int v;
    cout << "Введите объем v: ";
    cin >> v;

    cout << "\nа) Все параллелепипеды (перестановки разные):" << endl;
    cout << "Длина * Ширина * Высота = Объем" << endl;
    cout << "-----------------------------" << endl;

    int countAll = 0;
    for (int a = 1; a <= v; a++) {
        if (v % a == 0) {
            int v_ab = v / a;
            for (int b = 1; b <= v_ab; b++) {
                if (v_ab % b == 0) {
                    int c = v_ab / b;
                    if (a * b * c == v) {
                        cout << a << " x " << b << " x " << c << " = " << v << endl;
                        countAll++;
                    }
                }
            }
        }
    }
    cout << "Всего: " << countAll << " параллелепипедов" << endl;

    cout << "\nб) Параллелепипеды (перестановки совпадающие):" << endl;
    cout << "Длина * Ширина * Высота = Объем" << endl;
    cout << "-----------------------------" << endl;

    int countUnique = 0;
    for (int a = 1; a * a * a <= v; a++) {
        if (v % a == 0) {
            int v_ab = v / a;
            for (int b = a; b * b <= v_ab; b++) {
                if (v_ab % b == 0) {
                    int c = v_ab / b;
                    if (c >= b && a * b * c == v) {
                        cout << a << " x " << b << " x " << c << " = " << v << endl;
                        countUnique++;
                    }
                }
            }
        }
    }
    cout << "Всего: " << countUnique << " различных параллелепипедов" << endl;

    return 0;
}
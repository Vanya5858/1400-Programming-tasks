#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int n, f, s;

    cout << "Введите число n: ";
    cin >> n;
    cout << "Введите первый член прогрессии f и шаг s: ";
    cin >> f >> s;

    if (s == 0) {
        if (n == f) {
            cout << "Число " << n << " является членом прогрессии" << endl;
        }
        else {
            cout << "Число " << n << " не является членом прогрессии" << endl;
        }
        return 0;
    }

    if ((n - f) % s == 0 && (n - f) / s >= 0) {
        cout << "Число " << n << " является членом арифметической прогрессии" << endl;
    }
    else {
        cout << "Число " << n << " не является членом арифметической прогрессии" << endl;
    }

    return 0;
}
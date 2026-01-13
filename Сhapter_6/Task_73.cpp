#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int m, g, z;

    cout << "Введите число m: ";
    cin >> m;
    cout << "Введите первый член прогрессии g и знаменатель z: ";
    cin >> g >> z;

    if (z == 0 || g == 0) {
        cout << "Некорректные параметры прогрессии" << endl;
        return 0;
    }

    if (m == 0) {
        cout << "Число 0 не может быть членом геометрической прогрессии" << endl;
        return 0;
    }

    if (m % g != 0) {
        cout << "Число " << m << " не является членом геометрической прогрессии" << endl;
        return 0;
    }

    int quotient = m / g;
    bool isMember = false;

    if (z == 1) {
        if (m == g) {
            isMember = true;
        }
    }
    else {
        int temp = quotient;
        while (temp % z == 0) {
            temp /= z;
        }
        if (temp == 1) {
            isMember = true;
        }
    }

    if (isMember) {
        cout << "Число " << m << " является членом геометрической прогрессии" << endl;
    }
    else {
        cout << "Число " << m << " не является членом геометрической прогрессии" << endl;
    }

    return 0;
}
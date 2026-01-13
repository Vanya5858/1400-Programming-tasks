#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n, a, b;

    cout << "Введите число n: ";
    cin >> n;
    cout << "Введите цифры a и b: ";
    cin >> a >> b;

    int posA = -1, posB = -1;
    int position = 1;
    int temp = n;

    while (temp > 0) {
        int digit = temp % 10;
        if (digit == a) {
            posA = position;
        }
        if (digit == b) {
            posB = position;
        }
        position++;
        temp /= 10;
    }

    if (posA == -1 && posB == -1) {
        cout << "В числе нет цифр " << a << " и " << b << endl;
    }
    else if (posA == -1) {
        cout << "В числе нет цифры " << a << endl;
    }
    else if (posB == -1) {
        cout << "В числе нет цифры " << b << endl;
    }
    else {
        cout << "Позиция цифры " << a << " (справа): " << posA << endl;
        cout << "Позиция цифры " << b << " (справа): " << posB << endl;

        if (posA < posB) {
            cout << "Цифра " << a << " расположена правее (ближе к концу числа)" << endl;
        }
        else {
            cout << "Цифра " << b << " расположена правее (ближе к концу числа)" << endl;
        }
    }

    return 0;
}
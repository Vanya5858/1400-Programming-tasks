#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите натуральное число: ";
    cin >> n;

    int pos2 = -1, pos5 = -1;
    int position = 1;
    int temp = n;

    while (temp > 0) {
        int digit = temp % 10;
        if (digit == 2 && pos2 == -1) {
            pos2 = position;
        }
        if (digit == 5 && pos5 == -1) {
            pos5 = position;
        }
        position++;
        temp /= 10;
    }

    if (pos2 == -1 && pos5 == -1) {
        cout << "В числе нет цифр 2 и 5" << endl;
    }
    else if (pos2 == -1) {
        cout << "В числе нет цифры 2" << endl;
    }
    else if (pos5 == -1) {
        cout << "В числе нет цифры 5" << endl;
    }
    else {
        cout << "Позиция цифры 2 (справа): " << pos2 << endl;
        cout << "Позиция цифры 5 (справа): " << pos5 << endl;

        if (pos2 < pos5) {
            cout << "Цифра 2 расположена левее (ближе к началу числа)" << endl;
        }
        else {
            cout << "Цифра 5 расположена левее (ближе к началу числа)" << endl;
        }
    }

    return 0;
}
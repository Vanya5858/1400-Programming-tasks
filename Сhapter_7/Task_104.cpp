#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int x, first;
    bool allEqual = true;

    cout << "Введите 12 целых чисел: ";

    cin >> first;

    for (int i = 1; i < 12; i++) {
        cin >> x;
        if (x != first) {
            allEqual = false;
        }
    }

    cout << (allEqual ? "Все элементы равны" : "Не все элементы равны");
    return 0;
}
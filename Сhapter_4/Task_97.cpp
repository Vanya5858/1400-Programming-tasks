#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int k;
    cout << "Введите k (1-222): ";
    cin >> k;

    int position = k;
    int number = 1;

    while (position > (number < 10 ? 1 : (number < 100 ? 2 : 3))) {
        if (number < 10) {
            position -= 1;
        }
        else if (number < 100) {
            position -= 2;
        }
        else {
            position -= 3;
        }
        number++;
    }

    if (number < 10) {
        cout << number;
    }
    else if (number < 100) {
        if (position == 1) {
            cout << number / 10;
        }
        else {
            cout << number % 10;
        }
    }
    else {
        if (position == 1) {
            cout << number / 100;
        }
        else if (position == 2) {
            cout << (number / 10) % 10;
        }
        else {
            cout << number % 10;
        }
    }
    cout << endl;

    return 0;
}
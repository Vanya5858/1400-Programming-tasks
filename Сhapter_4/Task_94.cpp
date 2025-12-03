#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int k;
    cout << "Введите k (1-180): ";
    cin >> k;

    int position = k;
    int number = 10;

    while (position > 2) {
        position -= 2;
        number++;
    }

    if (position == 1) {
        cout << "k-я цифра: " << number / 10 << endl;
    }
    else {
        cout << "k-я цифра: " << number % 10 << endl;
    }

    return 0;
}
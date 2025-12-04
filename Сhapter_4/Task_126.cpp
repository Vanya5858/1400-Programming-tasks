#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int a, b;
    cout << "Введите два различных целых числа: ";
    cin >> a >> b;

    if (a % b == 0) {
        cout << a << " делится на " << b << endl;
    }
    else if (b % a == 0) {
        cout << b << " делится на " << a << endl;
    }
    else {
        cout << "Числа не являются делителями друг друга\n";
    }

    return 0;
}
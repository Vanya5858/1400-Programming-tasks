#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int a, b, c, d;
    cout << "Введите a, b, c, d: ";
    cin >> a >> b >> c >> d;

    int remainder = a % b;

    if (remainder == c) {
        cout << "Остаток равен " << c << endl;
    }
    else if (remainder == d) {
        cout << "Остаток равен " << d << endl;
    }
    else {
        cout << "Остаток не равен " << c << " и " << d << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int a, n;
    cout << "Введите числа a и n: ";
    cin >> a >> n;

    if (n % a == 0) {
        cout << a << " является делителем " << n << endl;
    }
    else {
        cout << a << " не является делителем " << n << endl;
    }

    return 0;
}
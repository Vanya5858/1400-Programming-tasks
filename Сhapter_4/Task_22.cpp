#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int m, n;
    cout << "Введите два целых числа: ";
    cin >> m >> n;

    if (m % n == 0) {
        cout << "Частное: " << m / n << endl;
    }
    else {
        cout << m << " на " << n << " нацело не делится\n";
    }

    return 0;
}
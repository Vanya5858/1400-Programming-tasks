#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double a;
    cout << "Введите a: ";
    cin >> a;

    int n = 1;
    while (1 + 1.0 / n < a) {
        cout << 1 + 1.0 / n << " ";
        n++;
    }
    return 0;
}
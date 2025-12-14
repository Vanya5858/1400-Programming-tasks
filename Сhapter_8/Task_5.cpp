#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double a;
    cout << "Введите a (1 < a <= 1.5): ";
    cin >> a;

    for (int n = 2; 1 + 1.0 / n >= a; n++) {
        cout << "1 + 1/" << n << " = " << 1 + 1.0 / n << endl;
    }
    return 0;
}
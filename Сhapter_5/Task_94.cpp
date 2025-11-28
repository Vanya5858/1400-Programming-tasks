#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите число n: ";
    cin >> n;

    cout << "Натуральные числа, квадрат которых не превышает " << n << ": ";
    for (int i = 1; i * i <= n; i++) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
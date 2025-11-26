#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите число(1 <= n <= 9): ";
    cin >> n;

    for (int i = 1; i <= 9; i++) {
        cout << i << " x " << n << " = " << i * n << endl;
    }

    return 0;
}
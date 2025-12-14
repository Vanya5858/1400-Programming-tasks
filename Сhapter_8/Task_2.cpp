#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите n: ";
    cin >> n;

    // Способ 1: цикл while
    int i = 1;
    while (i * i <= n) i++;
    cout << "Первое число > n: " << i * i << endl;

    // Способ 2: for
    for (int j = 1; ; j++) {
        if (j * j > n) {
            cout << "Первое число > n: " << j * j << endl;
            break;
        }
    }
    return 0;
}
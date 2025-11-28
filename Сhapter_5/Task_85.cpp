#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int a, b;
    cout << "Введите a: ";
    cin >> a;
    cout << "Введите b: ";
    cin >> b;

    int sum = 0;
    for (int i = a; i <= b; i++) {
        if (i % 4 == 0) {
            sum += i;
        }
    }
    cout << "Сумма чисел, кратных 4: " << sum << endl;
    return 0;
}
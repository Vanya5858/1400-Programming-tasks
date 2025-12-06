#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n, x, sum = 0;

    cout << "Введите количество чисел n: ";
    cin >> n;
    cout << "Введите " << n << " целых чисел: ";

    for (int i = 0; i < n; i++) {
        cin >> x;
        sum += x;
    }

    int b;
    cout << "Введите число b: ";
    cin >> b;

    cout << (sum % b == 0 ? "Сумма кратна b" : "Сумма не кратна b");
    return 0;
}
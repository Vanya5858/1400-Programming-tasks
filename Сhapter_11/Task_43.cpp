#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 10;
    int a[n];

    cout << "Введите " << n << " целых чисел:\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
            sum += a[i];
        else
            sum -= a[i];
    }

    cout << "Знакопеременная сумма a[1] - a[2] + a[3] - ... : " << sum << endl;
    return 0;
}
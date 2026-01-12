#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int n;
    cout << "Введите n: ";
    cin >> n;

    int denominations[] = { 64, 32, 16, 8, 4, 2, 1 };
    int count = sizeof(denominations) / sizeof(denominations[0]);

    cout << "\nВыплата сумм от " << n << " до " << n + 10 << ":" << endl;
    cout << "Сумма\t64\t32\t16\t8\t4\t2\t1" << endl;
    cout << "----------------------------------------------" << endl;

    for (int sum = n; sum <= n + 10; sum++) {
        cout << sum << "\t";
        int temp = sum;

        for (int i = 0; i < count; i++) {
            int num = temp / denominations[i];
            cout << num << "\t";
            temp = temp % denominations[i];
        }

        cout << endl;
    }

    return 0;
}
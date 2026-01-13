#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int n;
    cout << "Введите сумму для выплаты: ";
    cin >> n;

    int denominations[] = { 64, 32, 16, 8, 4, 2, 1 };
    string names[] = { "64", "32", "16", "8", "4", "2", "1" };

    cout << "Для выплаты суммы " << n << " руб. потребуется:" << endl;

    int remaining = n;
    int total = 0;

    for (int i = 0; i < 7; i++) {
        int count = remaining / denominations[i];
        if (count > 0) {
            cout << "Купюр достоинством " << names[i] << " руб.: " << count << endl;
            remaining %= denominations[i];
            total += count;
        }
    }

    cout << "Всего купюр: " << total << endl;

    return 0;
}
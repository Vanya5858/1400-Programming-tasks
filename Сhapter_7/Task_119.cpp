#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите количество чисел n: ";
    cin >> n;

    int lastIndex = -1;

    cout << "Введите " << n << " целых чисел: ";
    for (int i = 1; i <= n; i++) {
        int num;
        cin >> num;
        if (num > 100) {
            lastIndex = i;
        }
    }

    cout << "Номер последнего числа > 100: " << lastIndex << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int k;
    cout << "Введите количество чисел k: ";
    cin >> k;

    int lastNegIndex = -1;

    cout << "Введите " << k << " целых чисел: ";
    for (int i = 1; i <= k; i++) {
        int num;
        cin >> num;
        if (num < 0) {
            lastNegIndex = i;
        }
    }

    // По условию известно, что отрицательные числа есть
    cout << "Номер последнего отрицательного числа: " << lastNegIndex << endl;

    return 0;
}
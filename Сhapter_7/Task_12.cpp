#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int num, schet = 1;
    cout << "Введите последовательность положительных чисел (оканчивается 0): ";

    while (true) {
        cin >> num;
        if (num == 0) break;
        schet *= num;
        cout << schet << endl;
    }

    cout << "0";
    return 0;
}
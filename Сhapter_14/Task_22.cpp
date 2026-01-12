#include <iostream>
using namespace std;

bool isPowerOfFive(int num) {
    if (num <= 0) return false;

    while (num % 5 == 0) {
        num /= 5;
    }

    return num == 1;
}

int main() {
    setlocale(LC_ALL, "RU");

    int n;
    cout << "Введите количество чисел: ";
    cin >> n;

    int count = 0;
    cout << "Введите " << n << " целых чисел:" << endl;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if (isPowerOfFive(num)) {
            count++;
        }
    }

    cout << "\nКоличество степеней пятерки: " << count << endl;

    return 0;
}
#include <iostream>
using namespace std;

bool isEven(int num) {
    return num % 2 == 0;
}

int main() {
    setlocale(LC_ALL, "RU");

    int a[8], b[8];

    cout << "Введите первую последовательность из 8 чисел:" << endl;
    for (int i = 0; i < 8; i++) {
        cout << "a[" << i + 1 << "] = ";
        cin >> a[i];
    }

    cout << "\nВведите вторую последовательность из 8 чисел:" << endl;
    for (int i = 0; i < 8; i++) {
        cout << "b[" << i + 1 << "] = ";
        cin >> b[i];
    }

    int evenCount = 0, oddCount = 0;

    for (int i = 0; i < 8; i++) {
        if (isEven(a[i])) evenCount++;
        if (!isEven(b[i])) oddCount++;
    }

    cout << "\nРезультат:" << endl;
    cout << "Количество четных чисел в первой последовательности: " << evenCount << endl;
    cout << "Количество нечетных чисел во второй последовательности: " << oddCount << endl;

    return 0;
}
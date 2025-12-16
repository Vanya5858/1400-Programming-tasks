#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    cout << "Введите 14 целых чисел: ";
    int count = 0, sum = 0;

    for (int i = 0; i < 14; i++) {
        int num;
        cin >> num;
        if (num % 2 == 0) {
            sum += num;
            count++;
        }
    }

    if (count > 0) {
        cout << "Среднее арифметическое четных чисел: " << (double)sum / count << endl;
    }
    else {
        cout << "Нет четных чисел\n";
    }

    return 0;
}
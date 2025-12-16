#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int x, n;
    cout << "Введите количество чисел x: ";
    cin >> x;
    cout << "Введите число n: ";
    cin >> n;

    int count = 0;
    int sum = 0;

    cout << "Введите " << x << " целых чисел: ";
    for (int i = 0; i < x; i++) {
        int num;
        cin >> num;
        if (num > n) {
            sum += num;
            count++;
        }
    }

    if (count > 0) {
        cout << "Среднее арифметическое чисел > " << n << ": " << (double)sum / count << endl;
    }
    else {
        cout << "Нет чисел > " << n << endl;
    }

    return 0;
}
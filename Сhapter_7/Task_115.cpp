#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int m, n;
    cout << "Введите количество чисел m: ";
    cin >> m;
    cout << "Введите число n: ";
    cin >> n;

    int count = 0, sum = 0;
    cout << "Введите " << m << " целых чисел: ";

    for (int i = 0; i < m; i++) {
        int num;
        cin >> num;
        if (num % n == 0) {
            sum += num;
            count++;
        }
    }

    if (count > 0) {
        cout << "Среднее арифметическое чисел, кратных " << n << ": " << (double)sum / count << endl;
    }
    else {
        cout << "Нет чисел, кратных " << n << endl;
    }

    return 0;
}
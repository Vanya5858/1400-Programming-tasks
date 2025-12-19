#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите количество чисел n: ";
    cin >> n;

    if (n <= 0) return 0;

    double maxNum, minNum, num;
    cin >> num;
    maxNum = minNum = num;

    for (int i = 1; i < n; i++) {
        cin >> num;
        if (num > maxNum) maxNum = num;
        if (num < minNum) minNum = num;
    }

    cout << "Максимальное: " << maxNum << endl;
    cout << "Минимальное: " << minNum << endl;

    return 0;
}
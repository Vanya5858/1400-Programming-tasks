#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите количество чисел n: ";
    cin >> n;

    int maxNum, minNum, num;
    cin >> num;
    maxNum = minNum = num;

    for (int i = 1; i < n; i++) {
        cin >> num;
        if (num > maxNum) maxNum = num;
        if (num < minNum) minNum = num;
    }

    bool condition = (maxNum - minNum) <= 25;
    cout << "Максимальное (" << maxNum << ") превышает минимальное ("
        << minNum << ") не более чем на 25: "
        << (condition ? "Верно" : "Неверно") << endl;

    return 0;
}
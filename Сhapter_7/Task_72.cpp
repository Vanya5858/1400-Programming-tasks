#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    double a;
    int countNeg = 0, countPos = 0;

    cout << "Введите количество чисел n: ";
    cin >> n;
    cout << "Введите " << n << " вещественных чисел: ";

    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a < 0)
            countNeg++;
        else if (a > 0)
            countPos++;
    }

    cout << "Количество отрицательных: " << countNeg << endl;
    cout << "Количество положительных: " << countPos;
    return 0;
}
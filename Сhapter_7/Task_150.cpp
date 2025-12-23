#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите количество чисел n: ";
    cin >> n;

    int maxLength = 0, currentLength = 0;

    cout << "Введите " << n << " целых чисел: ";
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;

        if (num % 2 == 0) {
            currentLength++;
            if (currentLength > maxLength) {
                maxLength = currentLength;
            }
        }
        else {
            currentLength = 0;
        }
    }

    cout << "Наибольшая длина отрезка из четных чисел: " << maxLength << endl;
    return 0;
}
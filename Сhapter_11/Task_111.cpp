#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 15;
    int arr[n];

    cout << "Введите " << n << " целых чисел:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int maxLength = 0;
    int currentLength = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            currentLength++;
            if (currentLength > maxLength) {
                maxLength = currentLength;
            }
        }
        else {
            currentLength = 0;
        }
    }

    cout << "Наибольшая длина отрезка из нечетных чисел: " << maxLength << endl;

    return 0;
}
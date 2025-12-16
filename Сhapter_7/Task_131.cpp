#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int SIZE = 20;
    int arr[SIZE];

    cout << "Введите 20 чисел (неубывающая последовательность): ";
    for (int i = 0; i < SIZE; i++) {
        cin >> arr[i];
    }

    int maxCount = 1, currentCount = 1;
    for (int i = 1; i < SIZE; i++) {
        if (arr[i] == arr[i - 1]) {
            currentCount++;
            if (currentCount > maxCount) {
                maxCount = currentCount;
            }
        }
        else {
            currentCount = 1;
        }
    }

    cout << "Максимальное количество подряд идущих равных чисел: " << maxCount << endl;
    return 0;
}
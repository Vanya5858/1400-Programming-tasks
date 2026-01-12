#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 10;
    int arr[n];

    cout << "Введите " << n << " целых чисел:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int max = arr[0], min = arr[0];
    int maxCount = 1, minCount = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            maxCount = 1;
        }
        else if (arr[i] == max) {
            maxCount++;
        }

        if (arr[i] < min) {
            min = arr[i];
            minCount = 1;
        }
        else if (arr[i] == min) {
            minCount++;
        }
    }

    cout << "Количество максимальных элементов: " << maxCount << endl;
    cout << "Количество минимальных элементов: " << minCount << endl;

    return 0;
}